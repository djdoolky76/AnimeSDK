#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFHADNIAOAD;
class KBLELMJDBEA;
class KDKHADGLIPJ;
class MFKLCJHKNBK;
namespace Entitas { class IGroup; }

#define GBLEOHLLHNA_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x15952120)
#define GBLEOHLLHNA_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x15951DD0)
#define GBLEOHLLHNA_CTOR_OFFSET UNITYSDK_OFFSET(0x15951DC0)
#define GBLEOHLLHNA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15952160)
#define GBLEOHLLHNA_ILDLLFNLKDL_OFFSET UNITYSDK_OFFSET(0x15952270)
#define GBLEOHLLHNA_JMMOBKNNPIE_OFFSET UNITYSDK_OFFSET(0x159521B0)

	class GBLEOHLLHNA : public ::System::Object
	{
	public:
		::KBLELMJDBEA* ADJNOFMEIKM; // 0x10
		::DFHADNIAOAD* KGCNPIEDOCA; // 0x18
		::MFKLCJHKNBK* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::DFHADNIAOAD* a1, ::MFKLCJHKNBK* a2, ::KBLELMJDBEA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::DFHADNIAOAD*, ::MFKLCJHKNBK*, ::KBLELMJDBEA*))((::PBYTE)hIl2Cpp + GBLEOHLLHNA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLEOHLLHNA_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLEOHLLHNA_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLEOHLLHNA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean JMMOBKNNPIE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLEOHLLHNA_JMMOBKNNPIE_OFFSET))(this);
		}

		::Entitas::IGroup* ILDLLFNLKDL()
		{
			return ((::Entitas::IGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLEOHLLHNA_ILDLLFNLKDL_OFFSET))(this);
		}

	};
