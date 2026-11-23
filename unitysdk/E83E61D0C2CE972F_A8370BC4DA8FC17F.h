#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E83E61D0C2CE972F;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define E83E61D0C2CE972F_A8370BC4DA8FC17F_A28595C1AD48B89A_OFFSET UNITYSDK_OFFSET(0x3A2ADA0)
#define E83E61D0C2CE972F_A8370BC4DA8FC17F_B7E166C27C202873_OFFSET UNITYSDK_OFFSET(0x3A2B1D0)
#define E83E61D0C2CE972F_A8370BC4DA8FC17F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E83E61D0C2CE972F_A8370BC4DA8FC17F_TypeDefinitionIndex = 12865;

class E83E61D0C2CE972F_A8370BC4DA8FC17F : public ::System::Object
{
public:
	::E83E61D0C2CE972F* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* ABC587902F5F29C7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E83E61D0C2CE972F_A8370BC4DA8FC17F__CTOR_OFFSET))(this);
	}

	::System::Void A28595C1AD48B89A(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + E83E61D0C2CE972F_A8370BC4DA8FC17F_A28595C1AD48B89A_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void B7E166C27C202873(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + E83E61D0C2CE972F_A8370BC4DA8FC17F_B7E166C27C202873_OFFSET))(this, A6CAE7339066B0FB);
	}
};
