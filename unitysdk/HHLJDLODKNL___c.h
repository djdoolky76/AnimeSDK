#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MDLKEKANMHL;
namespace System { template <typename T> class Action_1; }

#define HHLJDLODKNL___C_GBMPLNOPHMI_OFFSET UNITYSDK_OFFSET(0x1494DDF0)
#define HHLJDLODKNL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1494DDA0)
#define HHLJDLODKNL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1494DDE0)

inline static constexpr unsigned int HHLJDLODKNL___c_TypeDefinitionIndex = 43098;

class HHLJDLODKNL___c : public ::System::Object
{
public:
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(HHLJDLODKNL___c_TypeDefinitionIndex)->GetStaticField(0x44320);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HHLJDLODKNL___c_TypeDefinitionIndex)->GetStaticField(0x44328);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHLJDLODKNL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLJDLODKNL___C__CTOR_OFFSET))(this);
	}

	::System::Void GBMPLNOPHMI(::MDLKEKANMHL* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + HHLJDLODKNL___C_GBMPLNOPHMI_OFFSET))(this, MNDIBLLFAJI);
	}
};
