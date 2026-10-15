#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicJson; }
namespace RPG::GameCore { class DynamicJsonConfig; }
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICJSON_CTOR_OFFSET UNITYSDK_OFFSET(0x1D628AB0)
#define RPG_GAMECORE_DYNAMICJSON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D628960)

namespace RPG::GameCore
{
	class DynamicJson : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Custom; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* Key; // 0x18
		::RPG::GameCore::DynamicJsonConfig* Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICJSON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicJson* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicJson*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICJSON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
