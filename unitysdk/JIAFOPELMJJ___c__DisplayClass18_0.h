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

#define JIAFOPELMJJ___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0x173F9D20)
#define JIAFOPELMJJ___C__DISPLAYCLASS18_0__STARTFORDOWNLOADSIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1740E860)

inline static constexpr unsigned int JIAFOPELMJJ___c__DisplayClass18_0_TypeDefinitionIndex = 60785;

	class JIAFOPELMJJ___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::BMNJKMDDACL* rawData; // 0x10
		::PNFLEMCDMJD* blockHPatch; // 0x18
		::CEOABLKMPKE* audioHPatch; // 0x20
		::AODPGPILMKK* archiveData; // 0x28
		::OEODAOIOGLO* audioData; // 0x30
		::EADIJOHAPHK* blockData; // 0x38
		::EJLIOMPMHHI* queue; // 0x40
		::OAHKEMMHANM* videoData; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartForDownloadSize_b__0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS18_0__STARTFORDOWNLOADSIZE_B__0_OFFSET))(this, a1);
		}

	};
