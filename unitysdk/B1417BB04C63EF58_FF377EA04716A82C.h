#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B1417BB04C63EF58;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define B1417BB04C63EF58_FF377EA04716A82C_ABC2814B570150BB_OFFSET UNITYSDK_OFFSET(0x3974F60)
#define B1417BB04C63EF58_FF377EA04716A82C_B4DF91E2497732B1_OFFSET UNITYSDK_OFFSET(0x3974D70)
#define B1417BB04C63EF58_FF377EA04716A82C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B1417BB04C63EF58_FF377EA04716A82C_TypeDefinitionIndex = 12479;

class B1417BB04C63EF58_FF377EA04716A82C : public ::System::Object
{
public:
	::B1417BB04C63EF58* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* B7950A1927C7A5E6; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1417BB04C63EF58_FF377EA04716A82C__CTOR_OFFSET))(this);
	}

	::System::Void B4DF91E2497732B1(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B1417BB04C63EF58_FF377EA04716A82C_B4DF91E2497732B1_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void ABC2814B570150BB(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B1417BB04C63EF58_FF377EA04716A82C_ABC2814B570150BB_OFFSET))(this, A6CAE7339066B0FB);
	}
};
