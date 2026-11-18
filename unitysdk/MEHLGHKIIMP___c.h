#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
class IFLPGOKHDJI;
namespace System { template <typename T1, typename T2> class Action_2; }

#define MEHLGHKIIMP___C_NNBJLFMIBJM_OFFSET UNITYSDK_OFFSET(0x13D1F550)
#define MEHLGHKIIMP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D1F500)
#define MEHLGHKIIMP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D1F540)

inline static constexpr unsigned int MEHLGHKIIMP___c_TypeDefinitionIndex = 74598;

class MEHLGHKIIMP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MEHLGHKIIMP___c_TypeDefinitionIndex)->GetStaticField(0x46A60);
	}
	static ::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>** StaticGet___9__0_0()
	{
		return (::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>**)Il2CppClass::FromTypeDefinitionIndex(MEHLGHKIIMP___c_TypeDefinitionIndex)->GetStaticField(0x46A68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEHLGHKIIMP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHLGHKIIMP___C__CTOR_OFFSET))(this);
	}

	::System::Void NNBJLFMIBJM(::IFLPGOKHDJI* MHPNGBGGMMN, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MEHLGHKIIMP___C_NNBJLFMIBJM_OFFSET))(this, MHPNGBGGMMN, FFNKDGGHBPP);
	}
};
