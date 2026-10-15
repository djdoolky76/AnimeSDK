#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KJLOHDFBBOA;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define KJLOHDFBBOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0991C0)
#define KJLOHDFBBOA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D099230)
#define KJLOHDFBBOA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D099130)

	class KJLOHDFBBOA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DNCFBGANPCD; // 0x18
		::RPG::GameCore::DynamicFloat* HOCMHABKLGJ; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PAHHNMLMNLN; // 0x28
		::Il2CppArray<::System::UInt32>* PFLABPLALNK; // 0x30
		::RPG::GameCore::FateRinCardPileType IANCHJFBKFC; // 0x38
		::System::Boolean NLFHNLKIOJJ; // 0x3A
		::System::Boolean NANPIEIOFLM; // 0x3B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLOHDFBBOA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KJLOHDFBBOA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KJLOHDFBBOA*))((::PBYTE)hIl2Cpp + KJLOHDFBBOA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KJLOHDFBBOA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KJLOHDFBBOA*))((::PBYTE)hIl2Cpp + KJLOHDFBBOA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
