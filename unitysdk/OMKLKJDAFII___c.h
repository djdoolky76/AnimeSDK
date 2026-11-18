#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
class IFLPGOKHDJI;
namespace System { template <typename T1, typename T2> class Action_2; }

#define OMKLKJDAFII___C_NNBJLFMIBJM_OFFSET UNITYSDK_OFFSET(0x1B7AB2A0)
#define OMKLKJDAFII___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7AB250)
#define OMKLKJDAFII___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7AB290)

inline static constexpr unsigned int OMKLKJDAFII___c_TypeDefinitionIndex = 90235;

class OMKLKJDAFII___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OMKLKJDAFII___c_TypeDefinitionIndex)->GetStaticField(0x39D20);
	}
	static ::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>** StaticGet___9__0_0()
	{
		return (::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>**)Il2CppClass::FromTypeDefinitionIndex(OMKLKJDAFII___c_TypeDefinitionIndex)->GetStaticField(0x39D28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMKLKJDAFII___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKLKJDAFII___C__CTOR_OFFSET))(this);
	}

	::System::Void NNBJLFMIBJM(::IFLPGOKHDJI* MHPNGBGGMMN, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OMKLKJDAFII___C_NNBJLFMIBJM_OFFSET))(this, MHPNGBGGMMN, FFNKDGGHBPP);
	}
};
