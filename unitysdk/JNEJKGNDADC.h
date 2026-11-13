#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNMMLLCIGOG;
class HMLBPKOFHLM;
class KMCLDIDKHBA;
class KPMAKCHCDMH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNEJKGNDADC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C4410)
#define JNEJKGNDADC_DBOFOLBNNDO_OFFSET UNITYSDK_OFFSET(0x1A0C3FC0)
#define JNEJKGNDADC_MLIAIBEMGCA_OFFSET UNITYSDK_OFFSET(0x1A0C4090)
#define JNEJKGNDADC_NMAADIFHEKK_OFFSET UNITYSDK_OFFSET(0x1A0C3F10)
#define JNEJKGNDADC_PAGKOAEOLKA_1_OFFSET UNITYSDK_OFFSET(0x1A0C4280)
#define JNEJKGNDADC_PAGKOAEOLKA_2_OFFSET UNITYSDK_OFFSET(0x1A0C4330)
#define JNEJKGNDADC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1A0C4160)

inline static constexpr unsigned int JNEJKGNDADC_TypeDefinitionIndex = 63199;

	class JNEJKGNDADC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KPMAKCHCDMH*>* CNPMNHGHKFG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEJKGNDADC_CTOR_OFFSET))(this);
		}

		::KPMAKCHCDMH* NMAADIFHEKK(::System::UInt32 a1)
		{
			return ((::KPMAKCHCDMH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNEJKGNDADC_NMAADIFHEKK_OFFSET))(this, a1);
		}

		::System::Void DBOFOLBNNDO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNEJKGNDADC_DBOFOLBNNDO_OFFSET))(this, a1);
		}

		::System::Void MLIAIBEMGCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNEJKGNDADC_MLIAIBEMGCA_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::HMLBPKOFHLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMLBPKOFHLM*))((::PBYTE)hIl2Cpp + JNEJKGNDADC_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA_1(::KMCLDIDKHBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMCLDIDKHBA*))((::PBYTE)hIl2Cpp + JNEJKGNDADC_PAGKOAEOLKA_1_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA_2(::CNMMLLCIGOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNMMLLCIGOG*))((::PBYTE)hIl2Cpp + JNEJKGNDADC_PAGKOAEOLKA_2_OFFSET))(this, a1);
		}

	};
