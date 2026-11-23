#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BE3B94DC192EE3F0;
class E679C740DCE72F58;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }

#define BE3B94DC192EE3F0_B326891D8A360FA9_BE4FD8DD5B115FDD_OFFSET UNITYSDK_OFFSET(0x3AC9410)
#define BE3B94DC192EE3F0_B326891D8A360FA9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BE3B94DC192EE3F0_B326891D8A360FA9_TypeDefinitionIndex = 12100;

class BE3B94DC192EE3F0_B326891D8A360FA9 : public ::System::Object
{
public:
	::BE3B94DC192EE3F0* A544919C800E2923; // 0x10
	::E679C740DCE72F58* F9ADA718944F49ED; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE3B94DC192EE3F0_B326891D8A360FA9__CTOR_OFFSET))(this);
	}

	::System::Void BE4FD8DD5B115FDD(::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + BE3B94DC192EE3F0_B326891D8A360FA9_BE4FD8DD5B115FDD_OFFSET))(this, A6CAE7339066B0FB);
	}
};
