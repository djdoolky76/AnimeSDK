#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGBFEOMHILK.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define HANOLCOBGLP___C_FJKOAMOHNKM_OFFSET UNITYSDK_OFFSET(0x11006BE0)
#define HANOLCOBGLP___C_JAOAELIJBJO_OFFSET UNITYSDK_OFFSET(0x11006BD0)
#define HANOLCOBGLP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11006B80)
#define HANOLCOBGLP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11006BC0)

inline static constexpr unsigned int HANOLCOBGLP___c_TypeDefinitionIndex = 40897;

class HANOLCOBGLP___c : public ::System::Object
{
public:
	static ::System::Action_2<::EGBFEOMHILK, ::EGBFEOMHILK>** StaticGet___9__0_0()
	{
		return (::System::Action_2<::EGBFEOMHILK, ::EGBFEOMHILK>**)Il2CppClass::FromTypeDefinitionIndex(HANOLCOBGLP___c_TypeDefinitionIndex)->GetStaticField(0x4CFD0);
	}
	static ::System::Action_2<::System::Int32, ::System::Int32>** StaticGet___9__0_1()
	{
		return (::System::Action_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HANOLCOBGLP___c_TypeDefinitionIndex)->GetStaticField(0x4CFD8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HANOLCOBGLP___c_TypeDefinitionIndex)->GetStaticField(0x4CFE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HANOLCOBGLP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANOLCOBGLP___C__CTOR_OFFSET))(this);
	}

	::System::Void JAOAELIJBJO(::EGBFEOMHILK KDEHMPGOCEP, ::EGBFEOMHILK PADJNMGMGHO)
	{
		return ((::System::Void(*)(::PVOID, ::EGBFEOMHILK, ::EGBFEOMHILK))((::PBYTE)hIl2Cpp + HANOLCOBGLP___C_JAOAELIJBJO_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO);
	}

	::System::Void FJKOAMOHNKM(::System::Int32 KDEHMPGOCEP, ::System::Int32 PADJNMGMGHO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HANOLCOBGLP___C_FJKOAMOHNKM_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO);
	}
};
