#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E19F70DCB9D21BB3;
namespace System { template <typename T1, typename T2> class Func_2; }

#define BADE6AE33C3BFA5E_F5628F8349D4A8A6_E8309FFF95C75520_OFFSET UNITYSDK_OFFSET(0x3DB88B0)
#define BADE6AE33C3BFA5E_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3DB8BA0)
#define BADE6AE33C3BFA5E_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BADE6AE33C3BFA5E_F5628F8349D4A8A6_TypeDefinitionIndex = 18900;

class BADE6AE33C3BFA5E_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::BADE6AE33C3BFA5E_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::BADE6AE33C3BFA5E_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(BADE6AE33C3BFA5E_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::E19F70DCB9D21BB3*, ::System::Single>** StaticGet_F4EB4229F3368E16()
	{
		return (::System::Func_2<::E19F70DCB9D21BB3*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(BADE6AE33C3BFA5E_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BADE6AE33C3BFA5E_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADE6AE33C3BFA5E_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Single E8309FFF95C75520(::E19F70DCB9D21BB3* BC2F8928C819023B)
	{
		return ((::System::Single(*)(::PVOID, ::E19F70DCB9D21BB3*))((::PBYTE)hIl2Cpp + BADE6AE33C3BFA5E_F5628F8349D4A8A6_E8309FFF95C75520_OFFSET))(this, BC2F8928C819023B);
	}
};
