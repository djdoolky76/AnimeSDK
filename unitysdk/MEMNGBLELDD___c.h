#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBJCLLBMALO;
namespace System { template <typename T> class Action_1; }

#define MEMNGBLELDD___C_HNHKHAGNNEI_OFFSET UNITYSDK_OFFSET(0x15E297C0)
#define MEMNGBLELDD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E29770)
#define MEMNGBLELDD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E297B0)

inline static constexpr unsigned int MEMNGBLELDD___c_TypeDefinitionIndex = 72456;

class MEMNGBLELDD___c : public ::System::Object
{
public:
	static ::System::Action_1<::MBJCLLBMALO*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::MBJCLLBMALO*>**)Il2CppClass::FromTypeDefinitionIndex(MEMNGBLELDD___c_TypeDefinitionIndex)->GetStaticField(0x4E7C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MEMNGBLELDD___c_TypeDefinitionIndex)->GetStaticField(0x4E7C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEMNGBLELDD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMNGBLELDD___C__CTOR_OFFSET))(this);
	}

	::System::Void HNHKHAGNNEI(::MBJCLLBMALO* EFEBFFCEJEF)
	{
		return ((::System::Void(*)(::PVOID, ::MBJCLLBMALO*))((::PBYTE)hIl2Cpp + MEMNGBLELDD___C_HNHKHAGNNEI_OFFSET))(this, EFEBFFCEJEF);
	}
};
