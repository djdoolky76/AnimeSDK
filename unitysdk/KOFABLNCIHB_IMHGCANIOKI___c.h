#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define KOFABLNCIHB_IMHGCANIOKI___C_BGNJHMKJMJM_OFFSET UNITYSDK_OFFSET(0x1A2DE980)
#define KOFABLNCIHB_IMHGCANIOKI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2DE930)
#define KOFABLNCIHB_IMHGCANIOKI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2DE970)

inline static constexpr unsigned int KOFABLNCIHB_IMHGCANIOKI___c_TypeDefinitionIndex = 74191;

class KOFABLNCIHB_IMHGCANIOKI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KOFABLNCIHB_IMHGCANIOKI___c_TypeDefinitionIndex)->GetStaticField(0x414A0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KOFABLNCIHB_IMHGCANIOKI___c_TypeDefinitionIndex)->GetStaticField(0x414A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOFABLNCIHB_IMHGCANIOKI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFABLNCIHB_IMHGCANIOKI___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BGNJHMKJMJM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFABLNCIHB_IMHGCANIOKI___C_BGNJHMKJMJM_OFFSET))(this);
	}
};
