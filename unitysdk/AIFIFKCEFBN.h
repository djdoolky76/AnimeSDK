#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGKOFMFKNNO.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AIFIFKCEFBN_GHBKLFCFICI_OFFSET UNITYSDK_OFFSET(0x16D7EBE0)
#define AIFIFKCEFBN_HKKIAKGKFKM_OFFSET UNITYSDK_OFFSET(0x16D7EBF0)
#define AIFIFKCEFBN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16D7EC00)
#define AIFIFKCEFBN__CTOR_OFFSET UNITYSDK_OFFSET(0x16D7EB60)

inline static constexpr unsigned int AIFIFKCEFBN_TypeDefinitionIndex = 78433;

class AIFIFKCEFBN : public ::IGKOFMFKNNO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* _EGJHAIELDDE_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFIFKCEFBN__CTOR_OFFSET))(this);
	}

	::System::Void GHBKLFCFICI(::System::Collections::Generic::List_1<::System::String*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + AIFIFKCEFBN_GHBKLFCFICI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::String*>* HKKIAKGKFKM()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFIFKCEFBN_HKKIAKGKFKM_OFFSET))(this);
	}

	static ::AIFIFKCEFBN* JFDOOELFAOA()
	{
		return ((::AIFIFKCEFBN*(*)())((::PBYTE)hIl2Cpp + AIFIFKCEFBN_JFDOOELFAOA_OFFSET))();
	}
};
