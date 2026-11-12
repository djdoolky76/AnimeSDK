#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WaitBatchItemTriggerState.h"
#include "unitysdk/System/Object.h"
class GELIALJDFBL;
class KFELGAIGHAP;
class NKANJOLHHOE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitBatchItem; }

#define CNCLNAFILDC_CBPOBEFJDCC_OFFSET UNITYSDK_OFFSET(0xE5E2610)
#define CNCLNAFILDC_CJCIJCCOFHI_OFFSET UNITYSDK_OFFSET(0xE5E2090)
#define CNCLNAFILDC_CTOR_OFFSET UNITYSDK_OFFSET(0xE5E2630)
#define CNCLNAFILDC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xE5E1E00)
#define CNCLNAFILDC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xE5E24F0)
#define CNCLNAFILDC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE5E1C10)
#define CNCLNAFILDC_LDDLBMMAHIJ_OFFSET UNITYSDK_OFFSET(0xE5E2120)
#define CNCLNAFILDC_NCBGDCINJEB_OFFSET UNITYSDK_OFFSET(0xE5E2620)
#define CNCLNAFILDC_NIHGOACGCJG_OFFSET UNITYSDK_OFFSET(0xE5E2550)
#define CNCLNAFILDC_NOKOBCHABHF_OFFSET UNITYSDK_OFFSET(0xE5E2230)
#define CNCLNAFILDC_PBLKCCJADCA_OFFSET UNITYSDK_OFFSET(0xE5E2600)

inline static constexpr unsigned int CNCLNAFILDC_TypeDefinitionIndex = 60130;

	class CNCLNAFILDC : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x10
		::RPG::GameCore::WaitBatchItem* OFKGLJOAMLD; // 0x18
		::KFELGAIGHAP* DCFCFCAOJFN; // 0x20
		::NKANJOLHHOE* CFKHNPGEAJA; // 0x28
		::GELIALJDFBL* OLPNJHPNJNG; // 0x30
		::RPG::GameCore::WaitBatchItemTriggerState LKCEDOCILMB; // 0x38
		::System::Boolean AOEDKKGBJKG; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCLNAFILDC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::WaitBatchItem* a1, ::RPG::GameCore::TaskContext* a2, ::NKANJOLHHOE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaitBatchItem*, ::RPG::GameCore::TaskContext*, ::NKANJOLHHOE*))((::PBYTE)hIl2Cpp + CNCLNAFILDC_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCLNAFILDC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void LDDLBMMAHIJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CNCLNAFILDC_LDDLBMMAHIJ_OFFSET))(this, a1);
		}

		::System::Boolean NOKOBCHABHF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCLNAFILDC_NOKOBCHABHF_OFFSET))(this);
		}

		::System::Void CJCIJCCOFHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCLNAFILDC_CJCIJCCOFHI_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNCLNAFILDC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void NIHGOACGCJG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNCLNAFILDC_NIHGOACGCJG_OFFSET))(this, a1);
		}

		::RPG::GameCore::WaitBatchItemTriggerState PBLKCCJADCA()
		{
			return ((::RPG::GameCore::WaitBatchItemTriggerState(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCLNAFILDC_PBLKCCJADCA_OFFSET))(this);
		}

		::System::Boolean CBPOBEFJDCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCLNAFILDC_CBPOBEFJDCC_OFFSET))(this);
		}

		::System::Boolean NCBGDCINJEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCLNAFILDC_NCBGDCINJEB_OFFSET))(this);
		}

	};
