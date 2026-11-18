#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace System { template <typename T> class Action_1; }

#define AMJIOCDAIJO___C_DCBBAJNCLHO_OFFSET UNITYSDK_OFFSET(0x1550B9F0)
#define AMJIOCDAIJO___C_KIONDIGKOCL_OFFSET UNITYSDK_OFFSET(0x1550BA00)
#define AMJIOCDAIJO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1550B9A0)
#define AMJIOCDAIJO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1550B9E0)

inline static constexpr unsigned int AMJIOCDAIJO___c_TypeDefinitionIndex = 83690;

class AMJIOCDAIJO___c : public ::System::Object
{
public:
	static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__21_0()
	{
		return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(AMJIOCDAIJO___c_TypeDefinitionIndex)->GetStaticField(0x36BC0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AMJIOCDAIJO___c_TypeDefinitionIndex)->GetStaticField(0x36BC8);
	}
	static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__21_1()
	{
		return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(AMJIOCDAIJO___c_TypeDefinitionIndex)->GetStaticField(0x36BD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMJIOCDAIJO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJIOCDAIJO___C__CTOR_OFFSET))(this);
	}

	::System::Void DCBBAJNCLHO(::DGDNKBFMHME* JGPIGFLIDOJ)
	{
		return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + AMJIOCDAIJO___C_DCBBAJNCLHO_OFFSET))(this, JGPIGFLIDOJ);
	}

	::System::Void KIONDIGKOCL(::DGDNKBFMHME* HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + AMJIOCDAIJO___C_KIONDIGKOCL_OFFSET))(this, HFMHOELKCAJ);
	}
};
