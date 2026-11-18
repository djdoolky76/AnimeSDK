#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/System/ValueTuple_3.h"

class BNLDMFJMKGE;
namespace System::Collections::Generic { template <typename T> class Queue_1; }
template <typename T> class DFDEIDBBGHG_1;
template <typename T> class KLIOMMIOFDC_1;
template <typename T> class LGFJMNEABJP_1;

#define HJJGDAIDMBA_ADNEKGKLBDB_OFFSET UNITYSDK_OFFSET(0x14701790)
#define HJJGDAIDMBA_APPDJEMBIFJ_OFFSET UNITYSDK_OFFSET(0x14701450)
#define HJJGDAIDMBA_EJFLKDALGCD_OFFSET UNITYSDK_OFFSET(0x14700F20)
#define HJJGDAIDMBA_HKGGICICBFB_OFFSET UNITYSDK_OFFSET(0x14701040)
#define HJJGDAIDMBA_KBOABFJPHGL_OFFSET UNITYSDK_OFFSET(0x14701700)
#define HJJGDAIDMBA_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x14700E30)
#define HJJGDAIDMBA__CTOR_OFFSET UNITYSDK_OFFSET(0x14701030)

inline static constexpr unsigned int HJJGDAIDMBA_TypeDefinitionIndex = 44899;

class HJJGDAIDMBA : public ::JJEJBPGJPJN
{
public:
	::KLIOMMIOFDC_1<::System::Boolean>* HFLPPBEHCPC; // 0x88
	::LGFJMNEABJP_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>* KOBDEEJKBHD; // 0x90
	::System::Collections::Generic::Queue_1<::Il2CppArray<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>*>* OKJLDFDMOCN; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJGDAIDMBA__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJGDAIDMBA_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void EJFLKDALGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJGDAIDMBA_EJFLKDALGCD_OFFSET))(this);
	}

	::System::Void HKGGICICBFB(::DFDEIDBBGHG_1<::BNLDMFJMKGE*>* MAINFHBDABE)
	{
		return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::BNLDMFJMKGE*>*))((::PBYTE)hIl2Cpp + HJJGDAIDMBA_HKGGICICBFB_OFFSET))(this, MAINFHBDABE);
	}

	::System::Void KBOABFJPHGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJGDAIDMBA_KBOABFJPHGL_OFFSET))(this);
	}

	::System::Void ADNEKGKLBDB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJGDAIDMBA_ADNEKGKLBDB_OFFSET))(this);
	}

	::System::Void APPDJEMBIFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJGDAIDMBA_APPDJEMBIFJ_OFFSET))(this);
	}
};
