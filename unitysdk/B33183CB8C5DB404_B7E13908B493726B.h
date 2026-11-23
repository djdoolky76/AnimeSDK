#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class AD3C66B368BBC67E; }

#define B33183CB8C5DB404_B7E13908B493726B_B1FE7F585764DE22_OFFSET UNITYSDK_OFFSET(0x3E7B0C0)
#define B33183CB8C5DB404_B7E13908B493726B__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E7B170)
#define B33183CB8C5DB404_B7E13908B493726B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B33183CB8C5DB404_B7E13908B493726B_TypeDefinitionIndex = 14882;

class B33183CB8C5DB404_B7E13908B493726B : public ::System::Object
{
public:
	static ::B33183CB8C5DB404_B7E13908B493726B** StaticGet_FB0A7EB463FA294A()
	{
		return (::B33183CB8C5DB404_B7E13908B493726B**)Il2CppClass::FromTypeDefinitionIndex(B33183CB8C5DB404_B7E13908B493726B_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Threading::AD3C66B368BBC67E** StaticGet_F7EE3CBD264E2622()
	{
		return (::System::Threading::AD3C66B368BBC67E**)Il2CppClass::FromTypeDefinitionIndex(B33183CB8C5DB404_B7E13908B493726B_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B33183CB8C5DB404_B7E13908B493726B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B33183CB8C5DB404_B7E13908B493726B__CTOR_OFFSET))(this);
	}

	::System::Void B1FE7F585764DE22(::System::Object* B9AEC57275825552)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + B33183CB8C5DB404_B7E13908B493726B_B1FE7F585764DE22_OFFSET))(this, B9AEC57275825552);
	}
};
