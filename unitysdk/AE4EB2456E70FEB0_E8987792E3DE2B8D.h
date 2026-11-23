#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F8B11FF5D1DF1B0F;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define AE4EB2456E70FEB0_E8987792E3DE2B8D_A39F5647125F0AC7_OFFSET UNITYSDK_OFFSET(0x39546C0)
#define AE4EB2456E70FEB0_E8987792E3DE2B8D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AE4EB2456E70FEB0_E8987792E3DE2B8D_TypeDefinitionIndex = 12443;

class AE4EB2456E70FEB0_E8987792E3DE2B8D : public ::System::Object
{
public:
	::System::Action_3<::System::Int32, ::System::String*, ::F8B11FF5D1DF1B0F*>* E04D2BE64FCE9814; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE4EB2456E70FEB0_E8987792E3DE2B8D__CTOR_OFFSET))(this);
	}

	::System::Void A39F5647125F0AC7(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + AE4EB2456E70FEB0_E8987792E3DE2B8D_A39F5647125F0AC7_OFFSET))(this, A6CAE7339066B0FB);
	}
};
