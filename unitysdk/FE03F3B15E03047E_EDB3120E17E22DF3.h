#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F8B11FF5D1DF1B0F;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define FE03F3B15E03047E_EDB3120E17E22DF3_AC86919080332767_OFFSET UNITYSDK_OFFSET(0x3A2B460)
#define FE03F3B15E03047E_EDB3120E17E22DF3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FE03F3B15E03047E_EDB3120E17E22DF3_TypeDefinitionIndex = 12859;

class FE03F3B15E03047E_EDB3120E17E22DF3 : public ::System::Object
{
public:
	::System::Action_3<::System::Int32, ::System::String*, ::F8B11FF5D1DF1B0F*>* E04D2BE64FCE9814; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE03F3B15E03047E_EDB3120E17E22DF3__CTOR_OFFSET))(this);
	}

	::System::Void AC86919080332767(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + FE03F3B15E03047E_EDB3120E17E22DF3_AC86919080332767_OFFSET))(this, A6CAE7339066B0FB);
	}
};
