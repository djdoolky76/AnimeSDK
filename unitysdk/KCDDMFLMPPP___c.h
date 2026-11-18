#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPBMMDAFKB.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define KCDDMFLMPPP___C_AAKOPAHLGNA_OFFSET UNITYSDK_OFFSET(0x13C531D0)
#define KCDDMFLMPPP___C_GPJIMMDNKHM_OFFSET UNITYSDK_OFFSET(0x13C53180)
#define KCDDMFLMPPP___C_PHFEPHAKFNO_OFFSET UNITYSDK_OFFSET(0x13C53190)
#define KCDDMFLMPPP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C53130)
#define KCDDMFLMPPP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C53170)

inline static constexpr unsigned int KCDDMFLMPPP___c_TypeDefinitionIndex = 43432;

class KCDDMFLMPPP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KCDDMFLMPPP___c_TypeDefinitionIndex)->GetStaticField(0x4A080);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__6_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(KCDDMFLMPPP___c_TypeDefinitionIndex)->GetStaticField(0x4A088);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__6_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KCDDMFLMPPP___c_TypeDefinitionIndex)->GetStaticField(0x4A090);
	}
	static ::System::Func_1<::DJPBMMDAFKB>** StaticGet___9__6_3()
	{
		return (::System::Func_1<::DJPBMMDAFKB>**)Il2CppClass::FromTypeDefinitionIndex(KCDDMFLMPPP___c_TypeDefinitionIndex)->GetStaticField(0x4A098);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCDDMFLMPPP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDDMFLMPPP___C__CTOR_OFFSET))(this);
	}

	::DJPBMMDAFKB GPJIMMDNKHM()
	{
		return ((::DJPBMMDAFKB(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDDMFLMPPP___C_GPJIMMDNKHM_OFFSET))(this);
	}

	::System::String* PHFEPHAKFNO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDDMFLMPPP___C_PHFEPHAKFNO_OFFSET))(this);
	}

	::System::Void AAKOPAHLGNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDDMFLMPPP___C_AAKOPAHLGNA_OFFSET))(this);
	}
};
