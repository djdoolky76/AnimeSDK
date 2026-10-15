#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DICEONDKEFF.h"
#include "unitysdk/System/Object.h"
class AOBICCEGAMM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OLGCACMNHIL_CTOR_OFFSET UNITYSDK_OFFSET(0xBF01C00)
#define OLGCACMNHIL_KMHHKMENOEH_OFFSET UNITYSDK_OFFSET(0xBF01C10)

inline static constexpr unsigned int OLGCACMNHIL_TypeDefinitionIndex = 67143;

	class OLGCACMNHIL : public ::System::Object
	{
	public:
		::DICEONDKEFF NOCPEIEHPNM; // 0x10
		::System::Void _ctor(::DICEONDKEFF a1)
		{
			return ((::System::Void(*)(::PVOID, ::DICEONDKEFF))((::PBYTE)hIl2Cpp + OLGCACMNHIL_CTOR_OFFSET))(this, a1);
		}

		::System::Void KMHHKMENOEH(::System::Collections::Generic::List_1<::AOBICCEGAMM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AOBICCEGAMM*>*))((::PBYTE)hIl2Cpp + OLGCACMNHIL_KMHHKMENOEH_OFFSET))(this, a1);
		}

	};
