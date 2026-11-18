#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LBBKENNIIPI;
namespace System { template <typename T> class Action_1; }

#define HLENDGABNDE___C_AIKNDJKJEKN_OFFSET UNITYSDK_OFFSET(0x1011BF80)
#define HLENDGABNDE___C_ENIOFHLABCG_OFFSET UNITYSDK_OFFSET(0x1011BF60)
#define HLENDGABNDE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1011BF10)
#define HLENDGABNDE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1011BF50)

inline static constexpr unsigned int HLENDGABNDE___c_TypeDefinitionIndex = 46798;

class HLENDGABNDE___c : public ::System::Object
{
public:
	static ::System::Action_1<::LBBKENNIIPI*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::LBBKENNIIPI*>**)Il2CppClass::FromTypeDefinitionIndex(HLENDGABNDE___c_TypeDefinitionIndex)->GetStaticField(0x32250);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HLENDGABNDE___c_TypeDefinitionIndex)->GetStaticField(0x32258);
	}
	static ::System::Action_1<::LBBKENNIIPI*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::LBBKENNIIPI*>**)Il2CppClass::FromTypeDefinitionIndex(HLENDGABNDE___c_TypeDefinitionIndex)->GetStaticField(0x32260);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLENDGABNDE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLENDGABNDE___C__CTOR_OFFSET))(this);
	}

	::System::Void ENIOFHLABCG(::LBBKENNIIPI* APLLCLAMBJK)
	{
		return ((::System::Void(*)(::PVOID, ::LBBKENNIIPI*))((::PBYTE)hIl2Cpp + HLENDGABNDE___C_ENIOFHLABCG_OFFSET))(this, APLLCLAMBJK);
	}

	::System::Void AIKNDJKJEKN(::LBBKENNIIPI* APLLCLAMBJK)
	{
		return ((::System::Void(*)(::PVOID, ::LBBKENNIIPI*))((::PBYTE)hIl2Cpp + HLENDGABNDE___C_AIKNDJKJEKN_OFFSET))(this, APLLCLAMBJK);
	}
};
