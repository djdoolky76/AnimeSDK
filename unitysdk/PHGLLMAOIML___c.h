#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
class IFLPGOKHDJI;
class MDLKEKANMHL;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define PHGLLMAOIML___C_GBMPLNOPHMI_OFFSET UNITYSDK_OFFSET(0x1197C8D0)
#define PHGLLMAOIML___C_GHNCFDBJBKL_OFFSET UNITYSDK_OFFSET(0x1197C8C0)
#define PHGLLMAOIML___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1197C870)
#define PHGLLMAOIML___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1197C8B0)

inline static constexpr unsigned int PHGLLMAOIML___c_TypeDefinitionIndex = 40729;

class PHGLLMAOIML___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PHGLLMAOIML___c_TypeDefinitionIndex)->GetStaticField(0x42990);
	}
	static ::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>**)Il2CppClass::FromTypeDefinitionIndex(PHGLLMAOIML___c_TypeDefinitionIndex)->GetStaticField(0x42998);
	}
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(PHGLLMAOIML___c_TypeDefinitionIndex)->GetStaticField(0x429A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHGLLMAOIML___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGLLMAOIML___C__CTOR_OFFSET))(this);
	}

	::System::Void GHNCFDBJBKL(::IFLPGOKHDJI* MHPNGBGGMMN, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PHGLLMAOIML___C_GHNCFDBJBKL_OFFSET))(this, MHPNGBGGMMN, FFNKDGGHBPP);
	}

	::System::Void GBMPLNOPHMI(::MDLKEKANMHL* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + PHGLLMAOIML___C_GBMPLNOPHMI_OFFSET))(this, MNDIBLLFAJI);
	}
};
