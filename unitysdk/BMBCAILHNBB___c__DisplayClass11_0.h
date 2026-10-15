#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }

#define BMBCAILHNBB___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA863B0)
#define BMBCAILHNBB___C__DISPLAYCLASS11_0___GETRESONANCEINDEX_B__0_OFFSET UNITYSDK_OFFSET(0xBA86780)

inline static constexpr unsigned int BMBCAILHNBB___c__DisplayClass11_0_TypeDefinitionIndex = 53580;

	class BMBCAILHNBB___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::UInt32 pairID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCAILHNBB___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetResonanceIndex_b__0(::RPG::GameCore::EvolveBuildGearEquipInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + BMBCAILHNBB___C__DISPLAYCLASS11_0___GETRESONANCEINDEX_B__0_OFFSET))(this, a1);
		}

	};
