#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define EOFBECJKAGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x744EC0)
#define EOFBECJKAGJ_HOMJBHMIPEE_OFFSET UNITYSDK_OFFSET(0x14AB0680)
#define EOFBECJKAGJ_IIFLENEBNPP_OFFSET UNITYSDK_OFFSET(0x14AB07D0)
#define EOFBECJKAGJ_IKBLAOCAIBC_OFFSET UNITYSDK_OFFSET(0x14AB06E0)
#define EOFBECJKAGJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AB05F0)
#define EOFBECJKAGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x744EB0)

inline static constexpr unsigned int EOFBECJKAGJ_TypeDefinitionIndex = 53439;

struct alignas(4) EOFBECJKAGJ
{
	static ::System::Collections::Generic::Stack_1<::NDDGJMFPAKF>** StaticGet_IMKPPMHHALE()
	{
		return (::System::Collections::Generic::Stack_1<::NDDGJMFPAKF>**)Il2CppClass::FromTypeDefinitionIndex(EOFBECJKAGJ_TypeDefinitionIndex)->GetStaticField(0x4E3A0);
	}
	::System::Boolean KANJODNFFOI; // 0x10

	::System::Void _ctor(::NDDGJMFPAKF KADBCHCDLCB, ::System::Boolean NBLGICHAOMH)
	{
		return ((::System::Void(*)(::PVOID, ::NDDGJMFPAKF, ::System::Boolean))((::PBYTE)hIl2Cpp + EOFBECJKAGJ__CTOR_OFFSET))(this, KADBCHCDLCB, NBLGICHAOMH);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOFBECJKAGJ__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFBECJKAGJ_DISPOSE_OFFSET))(this);
	}

	static ::System::Boolean HOMJBHMIPEE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EOFBECJKAGJ_HOMJBHMIPEE_OFFSET))();
	}

	static ::System::Boolean IIFLENEBNPP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EOFBECJKAGJ_IIFLENEBNPP_OFFSET))();
	}

	static ::NDDGJMFPAKF IKBLAOCAIBC()
	{
		return ((::NDDGJMFPAKF(*)())((::PBYTE)hIl2Cpp + EOFBECJKAGJ_IKBLAOCAIBC_OFFSET))();
	}
};
