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

#define JIAFOPELMJJ___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0x173F9A70)
#define JIAFOPELMJJ___C__DISPLAYCLASS17_0__STARTFORPREDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x1740E770)
#define JIAFOPELMJJ___C__DISPLAYCLASS17_0__STARTFORPREDOWNLOAD_B__1_OFFSET UNITYSDK_OFFSET(0x1740E830)

inline static constexpr unsigned int JIAFOPELMJJ___c__DisplayClass17_0_TypeDefinitionIndex = 60784;

	class JIAFOPELMJJ___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::JIAFOPELMJJ* __4__this; // 0x10
		::CCKEHNGDJJF* audioData; // 0x18
		::CEOABLKMPKE* audioHPatch; // 0x20
		::EJLIOMPMHHI* queue; // 0x28
		::NICDGKAKNJJ* videoData; // 0x30
		::AODPGPILMKK* archiveData; // 0x38
		::HPLHOPDDJCM* blockData; // 0x40
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
