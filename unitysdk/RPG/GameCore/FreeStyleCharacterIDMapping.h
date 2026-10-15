#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleCharacterIDMapping; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLECHARACTERIDMAPPING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C63A0)
#define RPG_GAMECORE_FREESTYLECHARACTERIDMAPPING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C6280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleCharacterIDMapping_TypeDefinitionIndex = 16311;

	class FreeStyleCharacterIDMapping : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FreeStyleCharacterID; // 0x10
		::Il2CppArray<::System::String*>* MappingIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERIDMAPPING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleCharacterIDMapping* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleCharacterIDMapping*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERIDMAPPING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
