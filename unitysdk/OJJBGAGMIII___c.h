#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GDJAILOIBIM;
namespace System { template <typename T> class Comparison_1; }

#define OJJBGAGMIII___C_BIGBKOJDCBA_OFFSET UNITYSDK_OFFSET(0x18448390)
#define OJJBGAGMIII___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18448340)
#define OJJBGAGMIII___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18448380)

inline static constexpr unsigned int OJJBGAGMIII___c_TypeDefinitionIndex = 79812;

class OJJBGAGMIII___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OJJBGAGMIII___c_TypeDefinitionIndex)->GetStaticField(0x45890);
	}
	static ::System::Comparison_1<::GDJAILOIBIM*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::GDJAILOIBIM*>**)Il2CppClass::FromTypeDefinitionIndex(OJJBGAGMIII___c_TypeDefinitionIndex)->GetStaticField(0x45898);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJJBGAGMIII___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJJBGAGMIII___C__CTOR_OFFSET))(this);
	}

	::System::Int32 BIGBKOJDCBA(::GDJAILOIBIM* EJCBEJMGFAJ, ::GDJAILOIBIM* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::GDJAILOIBIM*, ::GDJAILOIBIM*))((::PBYTE)hIl2Cpp + OJJBGAGMIII___C_BIGBKOJDCBA_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
