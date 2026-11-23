#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F00D975466190277;
class F8B11FF5D1DF1B0F;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define AE4EB2456E70FEB0_AC8A39E4D5F5EE8A_AC86919080332767_OFFSET UNITYSDK_OFFSET(0x3954440)
#define AE4EB2456E70FEB0_AC8A39E4D5F5EE8A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AE4EB2456E70FEB0_AC8A39E4D5F5EE8A_TypeDefinitionIndex = 12442;

class AE4EB2456E70FEB0_AC8A39E4D5F5EE8A : public ::System::Object
{
public:
	::F00D975466190277* F19E59B9731CD70D; // 0x10
	::System::Action_3<::System::Int32, ::System::String*, ::F8B11FF5D1DF1B0F*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE4EB2456E70FEB0_AC8A39E4D5F5EE8A__CTOR_OFFSET))(this);
	}

	::System::Void AC86919080332767(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + AE4EB2456E70FEB0_AC8A39E4D5F5EE8A_AC86919080332767_OFFSET))(this, A6CAE7339066B0FB);
	}
};
