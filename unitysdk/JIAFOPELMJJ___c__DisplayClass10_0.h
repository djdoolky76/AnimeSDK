#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class JIAFOPELMJJ;
class OEODAOIOGLO;

#define JIAFOPELMJJ___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1C8740)
#define JIAFOPELMJJ___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__0_OFFSET UNITYSDK_OFFSET(0xB1DEB60)
#define JIAFOPELMJJ___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__1_OFFSET UNITYSDK_OFFSET(0xB1DEBE0)

inline static constexpr unsigned int JIAFOPELMJJ___c__DisplayClass10_0_TypeDefinitionIndex = 59500;

	class JIAFOPELMJJ___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::EJLIOMPMHHI* queue; // 0x10
		::JIAFOPELMJJ* __4__this; // 0x18
		::OEODAOIOGLO* audioData; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartForAudioPackV2_b__0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__0_OFFSET))(this, a1);
		}

		::System::Void _StartForAudioPackV2_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__1_OFFSET))(this);
		}

	};
