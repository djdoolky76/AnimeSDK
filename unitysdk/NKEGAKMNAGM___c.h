#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NKEGAKMNAGM___C_IJECJOIOOJN_OFFSET UNITYSDK_OFFSET(0x17294150)
#define NKEGAKMNAGM___C_LLBEMBLMBMN_OFFSET UNITYSDK_OFFSET(0x17294160)
#define NKEGAKMNAGM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17294100)
#define NKEGAKMNAGM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17294140)

inline static constexpr unsigned int NKEGAKMNAGM___c_TypeDefinitionIndex = 82163;

class NKEGAKMNAGM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NKEGAKMNAGM___c_TypeDefinitionIndex)->GetStaticField(0x4DBA0);
	}
	static ::System::Action** StaticGet___9__69_4()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NKEGAKMNAGM___c_TypeDefinitionIndex)->GetStaticField(0x4DBA8);
	}
	static ::System::Action** StaticGet___9__68_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NKEGAKMNAGM___c_TypeDefinitionIndex)->GetStaticField(0x4DBB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKEGAKMNAGM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM___C__CTOR_OFFSET))(this);
	}

	::System::Void IJECJOIOOJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM___C_IJECJOIOOJN_OFFSET))(this);
	}

	::System::Void LLBEMBLMBMN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM___C_LLBEMBLMBMN_OFFSET))(this);
	}
};
