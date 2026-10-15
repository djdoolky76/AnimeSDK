#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D629970)
#define RPG_GAMECORE_DYNAMICSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6271C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicString_TypeDefinitionIndex = 16479;

	class DynamicString : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Custom; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* Key; // 0x18
		::System::String* Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
