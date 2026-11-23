#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AE02E8F41E452C48;
class F8B11FF5D1DF1B0F;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define AE02E8F41E452C48_A4527139DA6D0D52_EACCFF97B6A7E630_OFFSET UNITYSDK_OFFSET(0x3AB1060)
#define AE02E8F41E452C48_A4527139DA6D0D52__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AE02E8F41E452C48_A4527139DA6D0D52_TypeDefinitionIndex = 12094;

class AE02E8F41E452C48_A4527139DA6D0D52 : public ::System::Object
{
public:
	::AE02E8F41E452C48* A544919C800E2923; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18
	::F8B11FF5D1DF1B0F* B304504237E804FD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE02E8F41E452C48_A4527139DA6D0D52__CTOR_OFFSET))(this);
	}

	::System::Void EACCFF97B6A7E630(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + AE02E8F41E452C48_A4527139DA6D0D52_EACCFF97B6A7E630_OFFSET))(this, A6CAE7339066B0FB);
	}
};
