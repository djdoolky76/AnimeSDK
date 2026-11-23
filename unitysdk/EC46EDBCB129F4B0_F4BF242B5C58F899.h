#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EC46EDBCB129F4B0;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class Action; }

#define EC46EDBCB129F4B0_F4BF242B5C58F899_F10CB9DB3539BDC3_OFFSET UNITYSDK_OFFSET(0x3A803B0)
#define EC46EDBCB129F4B0_F4BF242B5C58F899__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EC46EDBCB129F4B0_F4BF242B5C58F899_TypeDefinitionIndex = 11940;

class EC46EDBCB129F4B0_F4BF242B5C58F899 : public ::System::Object
{
public:
	::EC46EDBCB129F4B0* A544919C800E2923; // 0x10
	::System::Action* AA60159A146068DD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC46EDBCB129F4B0_F4BF242B5C58F899__CTOR_OFFSET))(this);
	}

	::System::Void F10CB9DB3539BDC3(::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + EC46EDBCB129F4B0_F4BF242B5C58F899_F10CB9DB3539BDC3_OFFSET))(this, A6CAE7339066B0FB);
	}
};
