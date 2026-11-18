#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BLDBJNCDPKA_COMLMFJIMDG.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define JJDPALMNNHM___C_MLMBBHPGHEB_OFFSET UNITYSDK_OFFSET(0x1E4D9A20)
#define JJDPALMNNHM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D99D0)
#define JJDPALMNNHM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D9A10)

inline static constexpr unsigned int JJDPALMNNHM___c_TypeDefinitionIndex = 93866;

class JJDPALMNNHM___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__28_0()
	{
		return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JJDPALMNNHM___c_TypeDefinitionIndex)->GetStaticField(0x52750);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JJDPALMNNHM___c_TypeDefinitionIndex)->GetStaticField(0x52758);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJDPALMNNHM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDPALMNNHM___C__CTOR_OFFSET))(this);
	}

	::System::Boolean MLMBBHPGHEB(::BLDBJNCDPKA_COMLMFJIMDG DHJFLLEPJBM)
	{
		return ((::System::Boolean(*)(::PVOID, ::BLDBJNCDPKA_COMLMFJIMDG))((::PBYTE)hIl2Cpp + JJDPALMNNHM___C_MLMBBHPGHEB_OFFSET))(this, DHJFLLEPJBM);
	}
};
