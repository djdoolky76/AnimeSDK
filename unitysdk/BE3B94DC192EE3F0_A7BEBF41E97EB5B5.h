#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B7AEA2525AE9E3EB;
class BE3B94DC192EE3F0;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }

#define BE3B94DC192EE3F0_A7BEBF41E97EB5B5_B9DFA6FD1FD0B3B1_OFFSET UNITYSDK_OFFSET(0x3AC9B00)
#define BE3B94DC192EE3F0_A7BEBF41E97EB5B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BE3B94DC192EE3F0_A7BEBF41E97EB5B5_TypeDefinitionIndex = 12102;

class BE3B94DC192EE3F0_A7BEBF41E97EB5B5 : public ::System::Object
{
public:
	::B7AEA2525AE9E3EB* F9ADA718944F49ED; // 0x10
	::BE3B94DC192EE3F0* A544919C800E2923; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE3B94DC192EE3F0_A7BEBF41E97EB5B5__CTOR_OFFSET))(this);
	}

	::System::Void B9DFA6FD1FD0B3B1(::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + BE3B94DC192EE3F0_A7BEBF41E97EB5B5_B9DFA6FD1FD0B3B1_OFFSET))(this, A6CAE7339066B0FB);
	}
};
