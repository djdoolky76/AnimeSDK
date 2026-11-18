#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NJJPBAEPPCJ;
namespace System { template <typename T> class Action_1; }

#define OFLMAMJLJFI___C_AIKNDJKJEKN_OFFSET UNITYSDK_OFFSET(0x15FDC2C0)
#define OFLMAMJLJFI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FDC270)
#define OFLMAMJLJFI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDC2B0)

inline static constexpr unsigned int OFLMAMJLJFI___c_TypeDefinitionIndex = 77358;

class OFLMAMJLJFI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OFLMAMJLJFI___c_TypeDefinitionIndex)->GetStaticField(0x39CF0);
	}
	static ::System::Action_1<::NJJPBAEPPCJ*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::NJJPBAEPPCJ*>**)Il2CppClass::FromTypeDefinitionIndex(OFLMAMJLJFI___c_TypeDefinitionIndex)->GetStaticField(0x39CF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFLMAMJLJFI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLMAMJLJFI___C__CTOR_OFFSET))(this);
	}

	::System::Void AIKNDJKJEKN(::NJJPBAEPPCJ* BIDAFGLDNAO)
	{
		return ((::System::Void(*)(::PVOID, ::NJJPBAEPPCJ*))((::PBYTE)hIl2Cpp + OFLMAMJLJFI___C_AIKNDJKJEKN_OFFSET))(this, BIDAFGLDNAO);
	}
};
