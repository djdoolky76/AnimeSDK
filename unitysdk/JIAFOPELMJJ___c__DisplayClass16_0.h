#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AODPGPILMKK;
class CCKEHNGDJJF;
class CEOABLKMPKE;
class EBGMOALCIEA;
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class HPLHOPDDJCM;
class NICDGKAKNJJ;
class PNFLEMCDMJD;

#define JIAFOPELMJJ___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1D0E50)
#define JIAFOPELMJJ___C__DISPLAYCLASS16_0__STARTFORPREDOWNLOADSIZE_B__0_OFFSET UNITYSDK_OFFSET(0xB1E54A0)

inline static constexpr unsigned int JIAFOPELMJJ___c__DisplayClass16_0_TypeDefinitionIndex = 59506;

	class JIAFOPELMJJ___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::NICDGKAKNJJ* videoData; // 0x10
		::CCKEHNGDJJF* audioData; // 0x18
		::EBGMOALCIEA* rawData; // 0x20
		::EJLIOMPMHHI* queue; // 0x28
		::HPLHOPDDJCM* blockData; // 0x30
		::PNFLEMCDMJD* blockHPatch; // 0x38
		::CEOABLKMPKE* audioHPatch; // 0x40
		::AODPGPILMKK* archiveData; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartForPreDownloadSize_b__0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS16_0__STARTFORPREDOWNLOADSIZE_B__0_OFFSET))(this, a1);
		}

	};
