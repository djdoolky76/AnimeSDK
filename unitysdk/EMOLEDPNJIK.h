#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMOLEDPNJIK_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x1724BC90)
#define EMOLEDPNJIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1724BB30)

inline static constexpr unsigned int EMOLEDPNJIK_TypeDefinitionIndex = 86123;

class EMOLEDPNJIK : public ::KBGGKIJMICI
{
public:
	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + EMOLEDPNJIK__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void DIEPHAJCGOE(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + EMOLEDPNJIK_DIEPHAJCGOE_OFFSET))(this, MNDIBLLFAJI);
	}
};
