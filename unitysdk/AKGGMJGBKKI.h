#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DICEONDKEFF.h"
#include "unitysdk/System/Object.h"
class AOBICCEGAMM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKGGMJGBKKI_CTOR_OFFSET UNITYSDK_OFFSET(0x12CCF0B0)
#define AKGGMJGBKKI_KMHHKMENOEH_OFFSET UNITYSDK_OFFSET(0x12CCF0C0)

	class AKGGMJGBKKI : public ::System::Object
	{
	public:
		::DICEONDKEFF NOCPEIEHPNM; // 0x10
		::System::Void _ctor(::DICEONDKEFF a1)
		{
			return ((::System::Void(*)(::PVOID, ::DICEONDKEFF))((::PBYTE)hIl2Cpp + AKGGMJGBKKI_CTOR_OFFSET))(this, a1);
		}

		::System::Void KMHHKMENOEH(::System::Collections::Generic::List_1<::AOBICCEGAMM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AOBICCEGAMM*>*))((::PBYTE)hIl2Cpp + AKGGMJGBKKI_KMHHKMENOEH_OFFSET))(this, a1);
		}

	};
