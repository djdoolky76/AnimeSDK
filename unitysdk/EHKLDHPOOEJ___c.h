#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OGGDNMKMCCL;
namespace System { template <typename T1, typename T2> class Func_2; }

#define EHKLDHPOOEJ___C_ONLLADHLOON_OFFSET UNITYSDK_OFFSET(0x16144890)
#define EHKLDHPOOEJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16144840)
#define EHKLDHPOOEJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16144880)

inline static constexpr unsigned int EHKLDHPOOEJ___c_TypeDefinitionIndex = 62616;

class EHKLDHPOOEJ___c : public ::System::Object
{
public:
	static ::System::Func_2<::OGGDNMKMCCL*, ::System::Boolean>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::OGGDNMKMCCL*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EHKLDHPOOEJ___c_TypeDefinitionIndex)->GetStaticField(0x37570);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EHKLDHPOOEJ___c_TypeDefinitionIndex)->GetStaticField(0x37578);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHKLDHPOOEJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHKLDHPOOEJ___C__CTOR_OFFSET))(this);
	}

	::System::Boolean ONLLADHLOON(::OGGDNMKMCCL* MDLNMDJMMJP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OGGDNMKMCCL*))((::PBYTE)hIl2Cpp + EHKLDHPOOEJ___C_ONLLADHLOON_OFFSET))(this, MDLNMDJMMJP);
	}
};
