#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicBool; }
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICBOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F9A70)
#define RPG_GAMECORE_DYNAMICBOOL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5F98B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicBool_TypeDefinitionIndex = 16480;

	class DynamicBool : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Custom; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* Key; // 0x18
		::System::Boolean Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICBOOL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICBOOL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
