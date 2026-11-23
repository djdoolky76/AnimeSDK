#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define E556ADE460671672_B52CB8F5EC43B8D7_BE9C6AEB9C865D39_OFFSET UNITYSDK_OFFSET(0x3A10A90)
#define E556ADE460671672_B52CB8F5EC43B8D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E556ADE460671672_B52CB8F5EC43B8D7_TypeDefinitionIndex = 12730;

class E556ADE460671672_B52CB8F5EC43B8D7 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E556ADE460671672_B52CB8F5EC43B8D7__CTOR_OFFSET))(this);
	}

	::System::Void BE9C6AEB9C865D39(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + E556ADE460671672_B52CB8F5EC43B8D7_BE9C6AEB9C865D39_OFFSET))(this, A6CAE7339066B0FB);
	}
};
