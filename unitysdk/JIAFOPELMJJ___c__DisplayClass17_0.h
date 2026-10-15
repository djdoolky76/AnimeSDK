#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AODPGPILMKK;
class CCKEHNGDJJF;
class CEOABLKMPKE;
class EBGMOALCIEA;
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class HPLHOPDDJCM;
class JIAFOPELMJJ;
class NICDGKAKNJJ;
class PNFLEMCDMJD;

#define JIAFOPELMJJ___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1D1250)
#define JIAFOPELMJJ___C__DISPLAYCLASS17_0__STARTFORPREDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0xB1E5F50)
#define JIAFOPELMJJ___C__DISPLAYCLASS17_0__STARTFORPREDOWNLOAD_B__1_OFFSET UNITYSDK_OFFSET(0xB1E6010)

	class JIAFOPELMJJ___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::AODPGPILMKK* archiveData; // 0x10
		::CEOABLKMPKE* audioHPatch; // 0x18
		::JIAFOPELMJJ* __4__this; // 0x20
		::HPLHOPDDJCM* blockData; // 0x28
		::NICDGKAKNJJ* videoData; // 0x30
		::EJLIOMPMHHI* queue; // 0x38
		::CCKEHNGDJJF* audioData; // 0x40
		::EBGMOALCIEA* rawData; // 0x48
		::PNFLEMCDMJD* blockHPatch; // 0x50
		::RPG::Client::TextID progressDescText; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartForPreDownload_b__0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS17_0__STARTFORPREDOWNLOAD_B__0_OFFSET))(this, a1);
		}

		::System::Void _StartForPreDownload_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS17_0__STARTFORPREDOWNLOAD_B__1_OFFSET))(this);
		}

	};
