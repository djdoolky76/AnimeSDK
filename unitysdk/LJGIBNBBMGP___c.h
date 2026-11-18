#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
class IFLPGOKHDJI;
class MDLKEKANMHL;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define LJGIBNBBMGP___C_FADKGLEBHLE_OFFSET UNITYSDK_OFFSET(0x158EDA90)
#define LJGIBNBBMGP___C_KFADOABELOB_OFFSET UNITYSDK_OFFSET(0x158EDB40)
#define LJGIBNBBMGP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x158EDA40)
#define LJGIBNBBMGP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x158EDA80)

inline static constexpr unsigned int LJGIBNBBMGP___c_TypeDefinitionIndex = 89666;

class LJGIBNBBMGP___c : public ::System::Object
{
public:
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(LJGIBNBBMGP___c_TypeDefinitionIndex)->GetStaticField(0x384E0);
	}
	static ::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>**)Il2CppClass::FromTypeDefinitionIndex(LJGIBNBBMGP___c_TypeDefinitionIndex)->GetStaticField(0x384E8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LJGIBNBBMGP___c_TypeDefinitionIndex)->GetStaticField(0x384F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJGIBNBBMGP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGIBNBBMGP___C__CTOR_OFFSET))(this);
	}

	::System::Void FADKGLEBHLE(::IFLPGOKHDJI* MHPNGBGGMMN, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LJGIBNBBMGP___C_FADKGLEBHLE_OFFSET))(this, MHPNGBGGMMN, FFNKDGGHBPP);
	}

	::System::Void KFADOABELOB(::MDLKEKANMHL* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + LJGIBNBBMGP___C_KFADOABELOB_OFFSET))(this, MNDIBLLFAJI);
	}
};
