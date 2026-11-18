#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAJMNDHMNNO.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EINCNIDEKPA_IDDGNGPGOPJ_OFFSET UNITYSDK_OFFSET(0x14159920)
#define EINCNIDEKPA__CTOR_OFFSET UNITYSDK_OFFSET(0x14159910)

inline static constexpr unsigned int EINCNIDEKPA_TypeDefinitionIndex = 61759;

class EINCNIDEKPA : public ::DAJMNDHMNNO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* _EAGKDJAPPLK_k__BackingField; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>* DCKLNFBPDKN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + EINCNIDEKPA__CTOR_OFFSET))(this, DCKLNFBPDKN);
	}

	::System::Collections::Generic::List_1<::System::String*>* IDDGNGPGOPJ()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EINCNIDEKPA_IDDGNGPGOPJ_OFFSET))(this);
	}
};
