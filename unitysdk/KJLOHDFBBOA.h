#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KJLOHDFBBOA;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define KJLOHDFBBOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D06B280)
#define KJLOHDFBBOA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D06B2F0)
#define KJLOHDFBBOA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D06B1F0)

inline static constexpr unsigned int KJLOHDFBBOA_TypeDefinitionIndex = 19893;

	class KJLOHDFBBOA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* HOCMHABKLGJ; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DNCFBGANPCD; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PAHHNMLMNLN; // 0x28
		::Il2CppArray<::System::UInt32>* PFLABPLALNK; // 0x30
		::System::Boolean NANPIEIOFLM; // 0x38
		::System::Boolean NLFHNLKIOJJ; // 0x39
		::RPG::GameCore::FateRinCardPileType IANCHJFBKFC; // 0x3A
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
