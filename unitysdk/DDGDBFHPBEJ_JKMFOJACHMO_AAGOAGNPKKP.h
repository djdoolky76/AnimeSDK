#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DDGDBFHPBEJ_DBAGONDHCML.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define DDGDBFHPBEJ_JKMFOJACHMO_AAGOAGNPKKP_COMPARE_OFFSET UNITYSDK_OFFSET(0x7DFF80)
#define DDGDBFHPBEJ_JKMFOJACHMO_AAGOAGNPKKP__CCTOR_OFFSET UNITYSDK_OFFSET(0x193F9FC0)

inline static constexpr unsigned int DDGDBFHPBEJ_JKMFOJACHMO_AAGOAGNPKKP_TypeDefinitionIndex = 66483;

struct alignas(4) DDGDBFHPBEJ_JKMFOJACHMO_AAGOAGNPKKP
{
	static ::System::Collections::Generic::IComparer_1<::System::Object*>** StaticGet_NJLLMPCDOEB()
	{
		return (::System::Collections::Generic::IComparer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(DDGDBFHPBEJ_JKMFOJACHMO_AAGOAGNPKKP_TypeDefinitionIndex)->GetStaticField(0x4CD80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_JKMFOJACHMO_AAGOAGNPKKP__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::DDGDBFHPBEJ_DBAGONDHCML HAAEBCOBKFF, ::DDGDBFHPBEJ_DBAGONDHCML BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::DDGDBFHPBEJ_DBAGONDHCML, ::DDGDBFHPBEJ_DBAGONDHCML))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_JKMFOJACHMO_AAGOAGNPKKP_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
