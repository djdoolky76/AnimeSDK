#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define BAMFDIFCIJA___C_BPDFJCNFOLA_OFFSET UNITYSDK_OFFSET(0x113CF0A0)
#define BAMFDIFCIJA___C_NBBGLDKPOGM_OFFSET UNITYSDK_OFFSET(0x113CF0B0)
#define BAMFDIFCIJA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x113CF050)
#define BAMFDIFCIJA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x113CF090)

inline static constexpr unsigned int BAMFDIFCIJA___c_TypeDefinitionIndex = 61450;

class BAMFDIFCIJA___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__67_7()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BAMFDIFCIJA___c_TypeDefinitionIndex)->GetStaticField(0x3A3A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BAMFDIFCIJA___c_TypeDefinitionIndex)->GetStaticField(0x3A3A8);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__67_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BAMFDIFCIJA___c_TypeDefinitionIndex)->GetStaticField(0x3A3B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAMFDIFCIJA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMFDIFCIJA___C__CTOR_OFFSET))(this);
	}

	::System::Boolean BPDFJCNFOLA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMFDIFCIJA___C_BPDFJCNFOLA_OFFSET))(this);
	}

	::System::String* NBBGLDKPOGM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMFDIFCIJA___C_NBBGLDKPOGM_OFFSET))(this);
	}
};
