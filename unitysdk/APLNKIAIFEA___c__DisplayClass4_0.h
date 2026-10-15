#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APLNKIAIFEA_MOODJBCCCPC.h"
#include "unitysdk/System/Object.h"
class APLNKIAIFEA;

#define APLNKIAIFEA___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15BB4400)
#define APLNKIAIFEA___C__DISPLAYCLASS4_0__SELECTDEVELOPPARTASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x15BB47B0)

inline static constexpr unsigned int APLNKIAIFEA___c__DisplayClass4_0_TypeDefinitionIndex = 81814;

	class APLNKIAIFEA___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::APLNKIAIFEA_MOODJBCCCPC syncResult; // 0x10
		::APLNKIAIFEA* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLNKIAIFEA___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _SelectDevelopPartAsync_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLNKIAIFEA___C__DISPLAYCLASS4_0__SELECTDEVELOPPARTASYNC_B__1_OFFSET))(this);
		}

	};
