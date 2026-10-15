#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class CNCLNAFILDC;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitBatch; }
namespace RPG::GameCore { class WaitBatchItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NKANJOLHHOE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC2DB40)
#define NKANJOLHHOE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC2DF30)
#define NKANJOLHHOE_FFFOKHFCLBI_OFFSET UNITYSDK_OFFSET(0xBC2DC80)
#define NKANJOLHHOE_GMCLFNKAHIM_OFFSET UNITYSDK_OFFSET(0xBC2EAE0)
#define NKANJOLHHOE_HIFNLJEHCLB_OFFSET UNITYSDK_OFFSET(0xBC2E720)
#define NKANJOLHHOE_KGFCAODCNMB_OFFSET UNITYSDK_OFFSET(0xBC2E7F0)
#define NKANJOLHHOE_LDDLBMMAHIJ_OFFSET UNITYSDK_OFFSET(0xBC2E280)
#define NKANJOLHHOE_NLDABELPNNP_OFFSET UNITYSDK_OFFSET(0xBC2E8B0)
#define NKANJOLHHOE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC2E330)
#define NKANJOLHHOE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC2E110)
#define NKANJOLHHOE_PFGJGJIMKDO_OFFSET UNITYSDK_OFFSET(0xBC2E1D0)
#define NKANJOLHHOE_PGAIJGLFIFI_OFFSET UNITYSDK_OFFSET(0xBC2E7A0)
#define NKANJOLHHOE_TICK_OFFSET UNITYSDK_OFFSET(0xBC2E3A0)

inline static constexpr unsigned int NKANJOLHHOE_TypeDefinitionIndex = 58864;

	class NKANJOLHHOE : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::CNCLNAFILDC*>* HLMNPOPCCAG; // 0x18
		::System::Collections::Generic::List_1<::CNCLNAFILDC*>* INPJEFACPOH; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* LALNHIHMFAK; // 0x30
		::RPG::GameCore::WaitBatch* OFKGLJOAMLD; // 0x38
		::System::Int32 LFOALCFJHMC; // 0x40
		::System::Int32 OJNIIIELJGE; // 0x44
		::System::Boolean NBMLBDAFCBM; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitBatch* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitBatch*))((::PBYTE)hIl2Cpp + NKANJOLHHOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void FFFOKHFCLBI(::RPG::GameCore::WaitBatchItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaitBatchItem*))((::PBYTE)hIl2Cpp + NKANJOLHHOE_FFFOKHFCLBI_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKANJOLHHOE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKANJOLHHOE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKANJOLHHOE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NKANJOLHHOE_TICK_OFFSET))(this, a1);
		}

		::System::Void PGAIJGLFIFI(::CNCLNAFILDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNCLNAFILDC*))((::PBYTE)hIl2Cpp + NKANJOLHHOE_PGAIJGLFIFI_OFFSET))(this, a1);
		}

		::System::Void KGFCAODCNMB(::CNCLNAFILDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNCLNAFILDC*))((::PBYTE)hIl2Cpp + NKANJOLHHOE_KGFCAODCNMB_OFFSET))(this, a1);
		}

		::System::Boolean GMCLFNKAHIM(::CNCLNAFILDC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNCLNAFILDC*))((::PBYTE)hIl2Cpp + NKANJOLHHOE_GMCLFNKAHIM_OFFSET))(this, a1);
		}

		::System::Void PFGJGJIMKDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKANJOLHHOE_PFGJGJIMKDO_OFFSET))(this);
		}

		::System::Void LDDLBMMAHIJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKANJOLHHOE_LDDLBMMAHIJ_OFFSET))(this, a1);
		}

		::System::Void NLDABELPNNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKANJOLHHOE_NLDABELPNNP_OFFSET))(this);
		}

		::System::Void HIFNLJEHCLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKANJOLHHOE_HIFNLJEHCLB_OFFSET))(this);
		}

	};
