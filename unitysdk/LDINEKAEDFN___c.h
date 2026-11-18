#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define LDINEKAEDFN___C_GPPKNNHFHJJ_OFFSET UNITYSDK_OFFSET(0x1255B5C0)
#define LDINEKAEDFN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1255B570)
#define LDINEKAEDFN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1255B5B0)

inline static constexpr unsigned int LDINEKAEDFN___c_TypeDefinitionIndex = 66732;

class LDINEKAEDFN___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Boolean>** StaticGet___9__47_0()
	{
		return (::System::Comparison_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LDINEKAEDFN___c_TypeDefinitionIndex)->GetStaticField(0x38410);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LDINEKAEDFN___c_TypeDefinitionIndex)->GetStaticField(0x38418);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDINEKAEDFN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDINEKAEDFN___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GPPKNNHFHJJ(::System::Boolean EJCBEJMGFAJ, ::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LDINEKAEDFN___C_GPPKNNHFHJJ_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
