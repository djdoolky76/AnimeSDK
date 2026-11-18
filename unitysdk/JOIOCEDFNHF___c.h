#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace System { template <typename T> class Action_1; }

#define JOIOCEDFNHF___C_FBOKIDMBNKJ_OFFSET UNITYSDK_OFFSET(0x152B46F0)
#define JOIOCEDFNHF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152B46A0)
#define JOIOCEDFNHF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x152B46E0)

inline static constexpr unsigned int JOIOCEDFNHF___c_TypeDefinitionIndex = 40880;

class JOIOCEDFNHF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JOIOCEDFNHF___c_TypeDefinitionIndex)->GetStaticField(0x467C0);
	}
	static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(JOIOCEDFNHF___c_TypeDefinitionIndex)->GetStaticField(0x467C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOIOCEDFNHF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIOCEDFNHF___C__CTOR_OFFSET))(this);
	}

	::System::Void FBOKIDMBNKJ(::DGDNKBFMHME* JGPIGFLIDOJ)
	{
		return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + JOIOCEDFNHF___C_FBOKIDMBNKJ_OFFSET))(this, JGPIGFLIDOJ);
	}
};
