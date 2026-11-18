#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define PPNLDPMJEFA___C_DKPBHIKKMCO_OFFSET UNITYSDK_OFFSET(0x1BF3B470)
#define PPNLDPMJEFA___C_GJDDOBOJOFF_OFFSET UNITYSDK_OFFSET(0x1BF3B430)
#define PPNLDPMJEFA___C_LBBJOAMNPEE_OFFSET UNITYSDK_OFFSET(0x1BF3B3F0)
#define PPNLDPMJEFA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF3B3A0)
#define PPNLDPMJEFA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF3B3E0)

inline static constexpr unsigned int PPNLDPMJEFA___c_TypeDefinitionIndex = 57154;

class PPNLDPMJEFA___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__2_4()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PPNLDPMJEFA___c_TypeDefinitionIndex)->GetStaticField(0x39EC0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PPNLDPMJEFA___c_TypeDefinitionIndex)->GetStaticField(0x39EC8);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PPNLDPMJEFA___c_TypeDefinitionIndex)->GetStaticField(0x39ED0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PPNLDPMJEFA___c_TypeDefinitionIndex)->GetStaticField(0x39ED8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPNLDPMJEFA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNLDPMJEFA___C__CTOR_OFFSET))(this);
	}

	::System::String* LBBJOAMNPEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNLDPMJEFA___C_LBBJOAMNPEE_OFFSET))(this);
	}

	::System::String* GJDDOBOJOFF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNLDPMJEFA___C_GJDDOBOJOFF_OFFSET))(this);
	}

	::System::String* DKPBHIKKMCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNLDPMJEFA___C_DKPBHIKKMCO_OFFSET))(this);
	}
};
