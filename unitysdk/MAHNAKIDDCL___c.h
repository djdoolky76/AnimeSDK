#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJMLMNBPAAD;
namespace System { template <typename T> class Comparison_1; }

#define MAHNAKIDDCL___C_DLBJPPFCPGG_OFFSET UNITYSDK_OFFSET(0x19103880)
#define MAHNAKIDDCL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19103830)
#define MAHNAKIDDCL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19103870)

inline static constexpr unsigned int MAHNAKIDDCL___c_TypeDefinitionIndex = 15254;

class MAHNAKIDDCL___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::DJMLMNBPAAD*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::DJMLMNBPAAD*>**)Il2CppClass::FromTypeDefinitionIndex(MAHNAKIDDCL___c_TypeDefinitionIndex)->GetStaticField(0x78D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MAHNAKIDDCL___c_TypeDefinitionIndex)->GetStaticField(0x78D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAHNAKIDDCL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAHNAKIDDCL___C__CTOR_OFFSET))(this);
	}

	::System::Int32 DLBJPPFCPGG(::DJMLMNBPAAD* EJCBEJMGFAJ, ::DJMLMNBPAAD* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::DJMLMNBPAAD*, ::DJMLMNBPAAD*))((::PBYTE)hIl2Cpp + MAHNAKIDDCL___C_DLBJPPFCPGG_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
