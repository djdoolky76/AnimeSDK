#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace System { template <typename T> class Action_1; }

#define IDDCGJELPAB___C_NAJCOFOPIIK_OFFSET UNITYSDK_OFFSET(0x15EA61F0)
#define IDDCGJELPAB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EA61A0)
#define IDDCGJELPAB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA61E0)

inline static constexpr unsigned int IDDCGJELPAB___c_TypeDefinitionIndex = 53204;

class IDDCGJELPAB___c : public ::System::Object
{
public:
	static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__11_1()
	{
		return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(IDDCGJELPAB___c_TypeDefinitionIndex)->GetStaticField(0x37C80);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IDDCGJELPAB___c_TypeDefinitionIndex)->GetStaticField(0x37C88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDDCGJELPAB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDCGJELPAB___C__CTOR_OFFSET))(this);
	}

	::System::Void NAJCOFOPIIK(::DGDNKBFMHME* JGPIGFLIDOJ)
	{
		return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + IDDCGJELPAB___C_NAJCOFOPIIK_OFFSET))(this, JGPIGFLIDOJ);
	}
};
