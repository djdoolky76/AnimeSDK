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

#define JIAFOPELMJJ___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1CB190)
#define JIAFOPELMJJ___C__DISPLAYCLASS18_0__STARTFORDOWNLOADSIZE_B__0_OFFSET UNITYSDK_OFFSET(0xB1DFCB0)

inline static constexpr unsigned int JIAFOPELMJJ___c__DisplayClass18_0_TypeDefinitionIndex = 59508;

	class JIAFOPELMJJ___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::OEODAOIOGLO* audioData; // 0x10
		::OAHKEMMHANM* videoData; // 0x18
		::BMNJKMDDACL* rawData; // 0x20
		::CEOABLKMPKE* audioHPatch; // 0x28
		::EJLIOMPMHHI* queue; // 0x30
		::EADIJOHAPHK* blockData; // 0x38
		::PNFLEMCDMJD* blockHPatch; // 0x40
		::AODPGPILMKK* archiveData; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartForDownloadSize_b__0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS18_0__STARTFORDOWNLOADSIZE_B__0_OFFSET))(this, a1);
		}

	};
