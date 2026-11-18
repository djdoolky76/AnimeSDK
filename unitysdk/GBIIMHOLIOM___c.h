#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
class IFLPGOKHDJI;
namespace System { template <typename T1, typename T2> class Action_2; }

#define GBIIMHOLIOM___C_NNBJLFMIBJM_OFFSET UNITYSDK_OFFSET(0x15CD0D70)
#define GBIIMHOLIOM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CD0D20)
#define GBIIMHOLIOM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD0D60)

inline static constexpr unsigned int GBIIMHOLIOM___c_TypeDefinitionIndex = 70445;

class GBIIMHOLIOM___c : public ::System::Object
{
public:
	static ::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>** StaticGet___9__0_0()
	{
		return (::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>**)Il2CppClass::FromTypeDefinitionIndex(GBIIMHOLIOM___c_TypeDefinitionIndex)->GetStaticField(0x4F4E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GBIIMHOLIOM___c_TypeDefinitionIndex)->GetStaticField(0x4F4E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBIIMHOLIOM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIIMHOLIOM___C__CTOR_OFFSET))(this);
	}

	::System::Void NNBJLFMIBJM(::IFLPGOKHDJI* MHPNGBGGMMN, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GBIIMHOLIOM___C_NNBJLFMIBJM_OFFSET))(this, MHPNGBGGMMN, FFNKDGGHBPP);
	}
};
