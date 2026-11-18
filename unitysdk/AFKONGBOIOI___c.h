#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
class IFLPGOKHDJI;
class MDLKEKANMHL;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define AFKONGBOIOI___C_FADKGLEBHLE_OFFSET UNITYSDK_OFFSET(0x1264BF00)
#define AFKONGBOIOI___C_KFADOABELOB_OFFSET UNITYSDK_OFFSET(0x1264BF10)
#define AFKONGBOIOI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1264BEB0)
#define AFKONGBOIOI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1264BEF0)

inline static constexpr unsigned int AFKONGBOIOI___c_TypeDefinitionIndex = 74899;

class AFKONGBOIOI___c : public ::System::Object
{
public:
	static ::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>**)Il2CppClass::FromTypeDefinitionIndex(AFKONGBOIOI___c_TypeDefinitionIndex)->GetStaticField(0x2FDA0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AFKONGBOIOI___c_TypeDefinitionIndex)->GetStaticField(0x2FDA8);
	}
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(AFKONGBOIOI___c_TypeDefinitionIndex)->GetStaticField(0x2FDB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFKONGBOIOI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKONGBOIOI___C__CTOR_OFFSET))(this);
	}

	::System::Void FADKGLEBHLE(::IFLPGOKHDJI* MHPNGBGGMMN, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + AFKONGBOIOI___C_FADKGLEBHLE_OFFSET))(this, MHPNGBGGMMN, FFNKDGGHBPP);
	}

	::System::Void KFADOABELOB(::MDLKEKANMHL* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + AFKONGBOIOI___C_KFADOABELOB_OFFSET))(this, MNDIBLLFAJI);
	}
};
