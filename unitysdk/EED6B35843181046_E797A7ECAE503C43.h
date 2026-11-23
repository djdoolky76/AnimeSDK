#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class GameRoleModel; }
namespace System { class Object; }

#define EED6B35843181046_E797A7ECAE503C43_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EED6B35843181046_E797A7ECAE503C43__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

inline static constexpr unsigned int EED6B35843181046_E797A7ECAE503C43_TypeDefinitionIndex = 11981;

class EED6B35843181046_E797A7ECAE503C43 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_E797A7ECAE503C43__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::MiHoYo::SDK::GameRoleModel* AD31690EFDCF2C2D)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GameRoleModel*))((::PBYTE)hIl2Cpp + EED6B35843181046_E797A7ECAE503C43_INVOKE_OFFSET))(this, AD31690EFDCF2C2D);
	}
};
