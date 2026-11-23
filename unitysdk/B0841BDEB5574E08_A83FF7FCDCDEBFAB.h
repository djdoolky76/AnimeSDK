#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B0841BDEB5574E08;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B0841BDEB5574E08_A83FF7FCDCDEBFAB_A4E44B2211143BDD_OFFSET UNITYSDK_OFFSET(0x393BAD0)
#define B0841BDEB5574E08_A83FF7FCDCDEBFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B0841BDEB5574E08_A83FF7FCDCDEBFAB_TypeDefinitionIndex = 12389;

class B0841BDEB5574E08_A83FF7FCDCDEBFAB : public ::System::Object
{
public:
	::B0841BDEB5574E08* A544919C800E2923; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B0841BDEB5574E08_A83FF7FCDCDEBFAB__CTOR_OFFSET))(this);
	}

	::System::Void A4E44B2211143BDD(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B0841BDEB5574E08_A83FF7FCDCDEBFAB_A4E44B2211143BDD_OFFSET))(this, A6CAE7339066B0FB);
	}
};
