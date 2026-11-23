#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A9B862F1BE3A8547_A80763CC369525F5_OFFSET UNITYSDK_OFFSET(0x3AE3650)
#define A9B862F1BE3A8547_BC011B66BC65F91E_OFFSET UNITYSDK_OFFSET(0x3AE32C0)
#define A9B862F1BE3A8547_E992C39FD4BE23C3_OFFSET UNITYSDK_OFFSET(0x3AE3390)
#define A9B862F1BE3A8547_F69DBCC94F221289_OFFSET UNITYSDK_OFFSET(0x3AE3400)
#define A9B862F1BE3A8547__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AE37D0)
#define A9B862F1BE3A8547__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A9B862F1BE3A8547_TypeDefinitionIndex = 12205;

class A9B862F1BE3A8547 : public ::System::Object
{
public:
	static ::A9B862F1BE3A8547** StaticGet_EE999965A1D2099B()
	{
		return (::A9B862F1BE3A8547**)Il2CppClass::FromTypeDefinitionIndex(A9B862F1BE3A8547_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void F69DBCC94F221289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9B862F1BE3A8547_F69DBCC94F221289_OFFSET))(this);
	}

	::System::Void A80763CC369525F5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9B862F1BE3A8547_A80763CC369525F5_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9B862F1BE3A8547__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A9B862F1BE3A8547__CCTOR_OFFSET))();
	}

	::System::Void E992C39FD4BE23C3(::System::String* F1BF0FE85E9DD584, ::System::String* B35A88DA398D528E)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A9B862F1BE3A8547_E992C39FD4BE23C3_OFFSET))(this, F1BF0FE85E9DD584, B35A88DA398D528E);
	}

	::System::Boolean BC011B66BC65F91E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A9B862F1BE3A8547_BC011B66BC65F91E_OFFSET))(this);
	}
};
