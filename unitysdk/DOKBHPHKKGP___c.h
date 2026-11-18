#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HHDPNCNDPCF;
namespace System { template <typename T> class Action_1; }

#define DOKBHPHKKGP___C_AIKNDJKJEKN_OFFSET UNITYSDK_OFFSET(0x1587F880)
#define DOKBHPHKKGP___C_JOACMPIDKIL_OFFSET UNITYSDK_OFFSET(0x1587F840)
#define DOKBHPHKKGP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1587F7F0)
#define DOKBHPHKKGP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1587F830)

inline static constexpr unsigned int DOKBHPHKKGP___c_TypeDefinitionIndex = 49815;

class DOKBHPHKKGP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DOKBHPHKKGP___c_TypeDefinitionIndex)->GetStaticField(0x31600);
	}
	static ::System::Action_1<::HHDPNCNDPCF*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::HHDPNCNDPCF*>**)Il2CppClass::FromTypeDefinitionIndex(DOKBHPHKKGP___c_TypeDefinitionIndex)->GetStaticField(0x31608);
	}
	static ::System::Action_1<::HHDPNCNDPCF*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::HHDPNCNDPCF*>**)Il2CppClass::FromTypeDefinitionIndex(DOKBHPHKKGP___c_TypeDefinitionIndex)->GetStaticField(0x31610);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOKBHPHKKGP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKBHPHKKGP___C__CTOR_OFFSET))(this);
	}

	::System::Void JOACMPIDKIL(::HHDPNCNDPCF* IJFDCJBKCDF)
	{
		return ((::System::Void(*)(::PVOID, ::HHDPNCNDPCF*))((::PBYTE)hIl2Cpp + DOKBHPHKKGP___C_JOACMPIDKIL_OFFSET))(this, IJFDCJBKCDF);
	}

	::System::Void AIKNDJKJEKN(::HHDPNCNDPCF* IJFDCJBKCDF)
	{
		return ((::System::Void(*)(::PVOID, ::HHDPNCNDPCF*))((::PBYTE)hIl2Cpp + DOKBHPHKKGP___C_AIKNDJKJEKN_OFFSET))(this, IJFDCJBKCDF);
	}
};
