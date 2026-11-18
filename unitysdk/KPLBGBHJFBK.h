#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCMOCJIKOBE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPLBGBHJFBK_PENDMLPCMKB_OFFSET UNITYSDK_OFFSET(0x168301C0)
#define KPLBGBHJFBK__CTOR_OFFSET UNITYSDK_OFFSET(0x168301B0)

inline static constexpr unsigned int KPLBGBHJFBK_TypeDefinitionIndex = 65506;

class KPLBGBHJFBK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::KCMOCJIKOBE*>* _NIIOHJPLBJF_k__BackingField; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::KCMOCJIKOBE*>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KCMOCJIKOBE*>*))((::PBYTE)hIl2Cpp + KPLBGBHJFBK__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::List_1<::KCMOCJIKOBE*>* PENDMLPCMKB()
	{
		return ((::System::Collections::Generic::List_1<::KCMOCJIKOBE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLBGBHJFBK_PENDMLPCMKB_OFFSET))(this);
	}
};
