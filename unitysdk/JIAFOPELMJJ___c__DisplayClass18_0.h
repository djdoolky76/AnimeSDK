#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AODPGPILMKK;
class BMNJKMDDACL;
class CEOABLKMPKE;
class EADIJOHAPHK;
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class OAHKEMMHANM;
class OEODAOIOGLO;
class PNFLEMCDMJD;

#define JIAFOPELMJJ___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB9F3460)
#define JIAFOPELMJJ___C__DISPLAYCLASS18_0__STARTFORDOWNLOADSIZE_B__0_OFFSET UNITYSDK_OFFSET(0xBA07F70)

inline static constexpr unsigned int JIAFOPELMJJ___c__DisplayClass18_0_TypeDefinitionIndex = 60785;

	class JIAFOPELMJJ___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::OAHKEMMHANM* videoData; // 0x10
		::BMNJKMDDACL* rawData; // 0x18
		::CEOABLKMPKE* audioHPatch; // 0x20
		::OEODAOIOGLO* audioData; // 0x28
		::PNFLEMCDMJD* blockHPatch; // 0x30
		::AODPGPILMKK* archiveData; // 0x38
		::EJLIOMPMHHI* queue; // 0x40
		::EADIJOHAPHK* blockData; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartForDownloadSize_b__0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS18_0__STARTFORDOWNLOADSIZE_B__0_OFFSET))(this, a1);
		}

	};
