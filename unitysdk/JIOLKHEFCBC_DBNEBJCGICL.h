#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define JIOLKHEFCBC_DBNEBJCGICL_KDKHJFHMGFM_OFFSET UNITYSDK_OFFSET(0x1B898D20)
#define JIOLKHEFCBC_DBNEBJCGICL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B898CE0)
#define JIOLKHEFCBC_DBNEBJCGICL__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int JIOLKHEFCBC_DBNEBJCGICL_TypeDefinitionIndex = 9592;

struct alignas(8) JIOLKHEFCBC_DBNEBJCGICL
{
	static ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>** StaticGet__GCIKDIOKPHC_k__BackingField()
	{
		return (::System::Collections::Generic::IEqualityComparer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(JIOLKHEFCBC_DBNEBJCGICL_TypeDefinitionIndex)->GetStaticField(0x7670);
	}
	::System::String* DMKBGJMJELN; // 0x10
	::System::String* PELNGLAEKEO; // 0x18

	::System::Void _ctor(::System::String* DMKBGJMJELN, ::System::String* PELNGLAEKEO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JIOLKHEFCBC_DBNEBJCGICL__CTOR_OFFSET))(this, DMKBGJMJELN, PELNGLAEKEO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIOLKHEFCBC_DBNEBJCGICL__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>* KDKHJFHMGFM()
	{
		return ((::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*(*)())((::PBYTE)hIl2Cpp + JIOLKHEFCBC_DBNEBJCGICL_KDKHJFHMGFM_OFFSET))();
	}
};
