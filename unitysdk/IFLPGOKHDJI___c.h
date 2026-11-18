#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KHCFEFMDDJB;
namespace System { template <typename T> class Action_1; }

#define IFLPGOKHDJI___C_AKMOLDIEDBO_OFFSET UNITYSDK_OFFSET(0x1A39D5C0)
#define IFLPGOKHDJI___C_NHIMBGBPELO_OFFSET UNITYSDK_OFFSET(0x1A39D530)
#define IFLPGOKHDJI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A39D4E0)
#define IFLPGOKHDJI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39D520)

inline static constexpr unsigned int IFLPGOKHDJI___c_TypeDefinitionIndex = 62559;

class IFLPGOKHDJI___c : public ::System::Object
{
public:
	static ::System::Action_1<::KHCFEFMDDJB*>** StaticGet___9__12_0()
	{
		return (::System::Action_1<::KHCFEFMDDJB*>**)Il2CppClass::FromTypeDefinitionIndex(IFLPGOKHDJI___c_TypeDefinitionIndex)->GetStaticField(0x46540);
	}
	static ::System::Action_1<::KHCFEFMDDJB*>** StaticGet___9__13_0()
	{
		return (::System::Action_1<::KHCFEFMDDJB*>**)Il2CppClass::FromTypeDefinitionIndex(IFLPGOKHDJI___c_TypeDefinitionIndex)->GetStaticField(0x46548);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IFLPGOKHDJI___c_TypeDefinitionIndex)->GetStaticField(0x46550);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFLPGOKHDJI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLPGOKHDJI___C__CTOR_OFFSET))(this);
	}

	::System::Void NHIMBGBPELO(::KHCFEFMDDJB* MHPNGBGGMMN)
	{
		return ((::System::Void(*)(::PVOID, ::KHCFEFMDDJB*))((::PBYTE)hIl2Cpp + IFLPGOKHDJI___C_NHIMBGBPELO_OFFSET))(this, MHPNGBGGMMN);
	}

	::System::Void AKMOLDIEDBO(::KHCFEFMDDJB* MHPNGBGGMMN)
	{
		return ((::System::Void(*)(::PVOID, ::KHCFEFMDDJB*))((::PBYTE)hIl2Cpp + IFLPGOKHDJI___C_AKMOLDIEDBO_OFFSET))(this, MHPNGBGGMMN);
	}
};
