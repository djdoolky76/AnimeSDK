#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EC46EDBCB129F4B0;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class Action; }

#define EC46EDBCB129F4B0_F813F3A7FD32320B_AA49BB3114556007_OFFSET UNITYSDK_OFFSET(0x3A80500)
#define EC46EDBCB129F4B0_F813F3A7FD32320B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EC46EDBCB129F4B0_F813F3A7FD32320B_TypeDefinitionIndex = 11941;

class EC46EDBCB129F4B0_F813F3A7FD32320B : public ::System::Object
{
public:
	::EC46EDBCB129F4B0* A544919C800E2923; // 0x10
	::System::Action* AA60159A146068DD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC46EDBCB129F4B0_F813F3A7FD32320B__CTOR_OFFSET))(this);
	}

	::System::Void AA49BB3114556007(::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + EC46EDBCB129F4B0_F813F3A7FD32320B_AA49BB3114556007_OFFSET))(this, A6CAE7339066B0FB);
	}
};
