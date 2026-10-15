#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBIMENNAEIE.h"
#include "unitysdk/NHHMEPILLHL.h"
class KNEJEHOOFGI;

#define IJCLKIMMDOF_CTOR_OFFSET UNITYSDK_OFFSET(0x16458FC0)
#define IJCLKIMMDOF_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0x16458FD0)

	class IJCLKIMMDOF : public ::EBIMENNAEIE
	{
	public:
		::KNEJEHOOFGI* LEEMNOCGBOJ; // 0x20
		::System::Void _ctor(::NHHMEPILLHL a1, ::KNEJEHOOFGI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::KNEJEHOOFGI*))((::PBYTE)hIl2Cpp + IJCLKIMMDOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCLKIMMDOF_JAGMPHPNAHM_OFFSET))(this);
		}

	};
