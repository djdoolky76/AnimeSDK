#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AODPGPILMKK;
class CEOABLKMPKE;
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class OEODAOIOGLO;

#define JIAFOPELMJJ___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1C9E60)
#define JIAFOPELMJJ___C__DISPLAYCLASS13_0__STARTFORAUDIOPACKSIZE_B__0_OFFSET UNITYSDK_OFFSET(0xB1DECE0)

inline static constexpr unsigned int JIAFOPELMJJ___c__DisplayClass13_0_TypeDefinitionIndex = 59503;

	class JIAFOPELMJJ___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::EJLIOMPMHHI* queue; // 0x10
		::OEODAOIOGLO* audioData; // 0x18
		::AODPGPILMKK* resArchiveData; // 0x20
		::CEOABLKMPKE* audioHPatch; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartForAudioPackSize_b__0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS13_0__STARTFORAUDIOPACKSIZE_B__0_OFFSET))(this, a1);
		}

	};
