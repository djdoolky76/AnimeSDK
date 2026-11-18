#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAJMNDHMNNO.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JIBOKDIOBNN_IDDGNGPGOPJ_OFFSET UNITYSDK_OFFSET(0x14A7DFA0)
#define JIBOKDIOBNN__CTOR_OFFSET UNITYSDK_OFFSET(0x14A7DF90)

inline static constexpr unsigned int JIBOKDIOBNN_TypeDefinitionIndex = 80641;

class JIBOKDIOBNN : public ::DAJMNDHMNNO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* _EAGKDJAPPLK_k__BackingField; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>* DCKLNFBPDKN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + JIBOKDIOBNN__CTOR_OFFSET))(this, DCKLNFBPDKN);
	}

	::System::Collections::Generic::List_1<::System::String*>* IDDGNGPGOPJ()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBOKDIOBNN_IDDGNGPGOPJ_OFFSET))(this);
	}
};
