#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEAMAMLDKFC.h"
#include "unitysdk/HGBCMFANCOE.h"

#define HCODNLKAGHK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C2AEC0)
#define HCODNLKAGHK_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0x15C2AE70)
#define HCODNLKAGHK_GJEJEEAOFID_OFFSET UNITYSDK_OFFSET(0x15C2AAA0)
#define HCODNLKAGHK_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0x15C2ADC0)
#define HCODNLKAGHK_IOBMAEKOCLG_OFFSET UNITYSDK_OFFSET(0x15C2A8A0)
#define HCODNLKAGHK_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0x15C2A960)
#define HCODNLKAGHK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15C2A9F0)

	class HCODNLKAGHK : public ::OEAMAMLDKFC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCODNLKAGHK_CTOR_OFFSET))(this);
		}

		::System::Void IOBMAEKOCLG(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + HCODNLKAGHK_IOBMAEKOCLG_OFFSET))(this, a1, a2);
		}

		::System::Void LFIFIEGFMOM(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + HCODNLKAGHK_LFIFIEGFMOM_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + HCODNLKAGHK_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void GJEJEEAOFID(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + HCODNLKAGHK_GJEJEEAOFID_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + HCODNLKAGHK_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void GBCHFFLMIIC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + HCODNLKAGHK_GBCHFFLMIIC_OFFSET))(this, a1);
		}

	};
