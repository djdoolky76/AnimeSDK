#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class APFIHNDDPIO;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define APFIHNDDPIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCED180)
#define APFIHNDDPIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCED190)
#define APFIHNDDPIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCED150)

	class APFIHNDDPIO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LADICPOACOE; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DNCFBGANPCD; // 0x20
		::Il2CppArray<::System::UInt32>* LKPEDJLLAIO; // 0x28
		::RPG::GameCore::DynamicFloat* HCDEOKNIGKG; // 0x30
		::RPG::GameCore::FateRinCardPileType IANCHJFBKFC; // 0x38
		::System::Boolean ODPKFODJBBD; // 0x3A
		::System::Boolean LINNKILOOBC; // 0x3B
		::System::UInt32 PHFMCACHFIJ; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFIHNDDPIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::APFIHNDDPIO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::APFIHNDDPIO*))((::PBYTE)hIl2Cpp + APFIHNDDPIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::APFIHNDDPIO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::APFIHNDDPIO*))((::PBYTE)hIl2Cpp + APFIHNDDPIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
