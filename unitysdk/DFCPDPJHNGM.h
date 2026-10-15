#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleGridFightEquipData; }

#define DFCPDPJHNGM_CTOR_OFFSET UNITYSDK_OFFSET(0xE819AF0)
#define DFCPDPJHNGM_DJKCKOEBPLF_OFFSET UNITYSDK_OFFSET(0xE819B00)

inline static constexpr unsigned int DFCPDPJHNGM_TypeDefinitionIndex = 64971;

	class DFCPDPJHNGM : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleGridFightEquipData* HNNBFLIHGJG; // 0x10
		::System::Void _ctor(::RPG::GameCore::BattleGridFightEquipData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightEquipData*))((::PBYTE)hIl2Cpp + DFCPDPJHNGM_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 DJKCKOEBPLF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFCPDPJHNGM_DJKCKOEBPLF_OFFSET))(this);
		}

	};
