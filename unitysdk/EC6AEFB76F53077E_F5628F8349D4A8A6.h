#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EB149ED98C36D983.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define EC6AEFB76F53077E_F5628F8349D4A8A6_B76B0B9A6C0BA5ED_OFFSET UNITYSDK_OFFSET(0x2756860)
#define EC6AEFB76F53077E_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x27583C0)
#define EC6AEFB76F53077E_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EC6AEFB76F53077E_F5628F8349D4A8A6_TypeDefinitionIndex = 20704;

class EC6AEFB76F53077E_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::EC6AEFB76F53077E_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::EC6AEFB76F53077E_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(EC6AEFB76F53077E_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::EB149ED98C36D983>** StaticGet_B61CC0AF0D30B87F()
	{
		return (::System::Action_1<::EB149ED98C36D983>**)Il2CppClass::FromTypeDefinitionIndex(EC6AEFB76F53077E_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EC6AEFB76F53077E_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC6AEFB76F53077E_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void B76B0B9A6C0BA5ED(::EB149ED98C36D983 A5FB7225DA5C5A9B)
	{
		return ((::System::Void(*)(::PVOID, ::EB149ED98C36D983))((::PBYTE)hIl2Cpp + EC6AEFB76F53077E_F5628F8349D4A8A6_B76B0B9A6C0BA5ED_OFFSET))(this, A5FB7225DA5C5A9B);
	}
};
