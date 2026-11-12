#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFHADNIAOAD;
class KBLELMJDBEA;
class KDKHADGLIPJ;
class MFKLCJHKNBK;
namespace Entitas { template <typename T> class IGroup_1; }

#define GBLEOHLLHNA_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x16887800)
#define GBLEOHLLHNA_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x168874B0)
#define GBLEOHLLHNA_CTOR_OFFSET UNITYSDK_OFFSET(0x168874A0)
#define GBLEOHLLHNA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x16887840)
#define GBLEOHLLHNA_ILDLLFNLKDL_OFFSET UNITYSDK_OFFSET(0x16887950)
#define GBLEOHLLHNA_JMMOBKNNPIE_OFFSET UNITYSDK_OFFSET(0x16887890)

inline static constexpr unsigned int GBLEOHLLHNA_TypeDefinitionIndex = 78094;

	class GBLEOHLLHNA : public ::System::Object
	{
	public:
		::DFHADNIAOAD* KGCNPIEDOCA; // 0x10
		::KBLELMJDBEA* ADJNOFMEIKM; // 0x18
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

		::Entitas::IGroup_1<::KDKHADGLIPJ*>* ILDLLFNLKDL()
		{
			return ((::Entitas::IGroup_1<::KDKHADGLIPJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLEOHLLHNA_ILDLLFNLKDL_OFFSET))(this);
		}

	};
