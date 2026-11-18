#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define AKINGMCDLHO___C_EOIPINKBDBB_OFFSET UNITYSDK_OFFSET(0x1648AD90)
#define AKINGMCDLHO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1648AD40)
#define AKINGMCDLHO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1648AD80)

inline static constexpr unsigned int AKINGMCDLHO___c_TypeDefinitionIndex = 61721;

class AKINGMCDLHO___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::System::Int64>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(AKINGMCDLHO___c_TypeDefinitionIndex)->GetStaticField(0x36BB0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AKINGMCDLHO___c_TypeDefinitionIndex)->GetStaticField(0x36BB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKINGMCDLHO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINGMCDLHO___C__CTOR_OFFSET))(this);
	}

	::System::Int64 EOIPINKBDBB(::System::UInt32 IMLLDOHDCNC)
	{
		return ((::System::Int64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKINGMCDLHO___C_EOIPINKBDBB_OFFSET))(this, IMLLDOHDCNC);
	}
};
