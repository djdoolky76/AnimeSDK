#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHNOOPNDEA.h"
#include "unitysdk/System/Object.h"
class IEIEAAJCDNP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KBKPHGAKHOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70AF80)

	class KBKPHGAKHOG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* JDHKCBMBHAA; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* CHHDAKCOACO; // 0x18
		::System::Collections::Generic::List_1<::NHHNOOPNDEA>* KFOPKEIOBKJ; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* BIGFAFBHOCM; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GECAOEOAAMF; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AIOEFELJHDI; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IEIEAAJCDNP*>* INJIHCJALNJ; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GBJEBDADKNJ; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKPHGAKHOG_CTOR_OFFSET))(this);
		}

	};
