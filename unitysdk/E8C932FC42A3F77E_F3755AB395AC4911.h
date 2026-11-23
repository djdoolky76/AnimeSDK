#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E8C932FC42A3F77E;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define E8C932FC42A3F77E_F3755AB395AC4911_BE4511D9AD2B8679_OFFSET UNITYSDK_OFFSET(0x39764A0)
#define E8C932FC42A3F77E_F3755AB395AC4911_ED3D965305E5616A_OFFSET UNITYSDK_OFFSET(0x3976450)
#define E8C932FC42A3F77E_F3755AB395AC4911__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E8C932FC42A3F77E_F3755AB395AC4911_TypeDefinitionIndex = 12468;

class E8C932FC42A3F77E_F3755AB395AC4911 : public ::System::Object
{
public:
	::E8C932FC42A3F77E* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_F3755AB395AC4911__CTOR_OFFSET))(this);
	}

	::System::Void ED3D965305E5616A(::System::String* A9B0E744486424C1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_F3755AB395AC4911_ED3D965305E5616A_OFFSET))(this, A9B0E744486424C1);
	}

	::System::Void BE4511D9AD2B8679()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_F3755AB395AC4911_BE4511D9AD2B8679_OFFSET))(this);
	}
};
