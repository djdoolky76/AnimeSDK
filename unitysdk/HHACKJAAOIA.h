#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFDNGOHNPC.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DFGDEHAHLHC;

#define HHACKJAAOIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CACAEE0)
#define HHACKJAAOIA_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1CACB0D0)
#define HHACKJAAOIA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1CACB830)

	class HHACKJAAOIA : public ::CKFDNGOHNPC
	{
	public:
		::DFGDEHAHLHC* GALAHGAJODG; // 0x18
		::DFGDEHAHLHC* CFKHNPGEAJA; // 0x20
		::UnityEngine::Vector3 GCOPFADMJAH; // 0x28
		::System::Single HBDJCFFDGDD; // 0x34
		::System::Single PGMIOKKLHIE; // 0x38
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HHACKJAAOIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHACKJAAOIA_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HHACKJAAOIA_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
