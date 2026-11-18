#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowInteractEffectImpBase.h"

class PJGJHHPJEKD;

#define MOLEMOLE_CONFIG_SENDMOVEEVENT_ONINTERACTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B8B6BA0)
#define MOLEMOLE_CONFIG_SENDMOVEEVENT_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1B8B6B50)
#define MOLEMOLE_CONFIG_SENDMOVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B6C20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SendMoveEvent_TypeDefinitionIndex = 75126;

	class SendMoveEvent : public ::MoleMole::Config::HollowInteractEffectImpBase
	{
	public:
		::System::Boolean SendOnlyOnce; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENDMOVEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnStop(::PJGJHHPJEKD* context)
		{
			return ((::System::Void(*)(::PVOID, ::PJGJHHPJEKD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENDMOVEEVENT_ONSTOP_OFFSET))(this, context);
		}

		::System::Void OnInteractInternal(::PJGJHHPJEKD* context)
		{
			return ((::System::Void(*)(::PVOID, ::PJGJHHPJEKD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENDMOVEEVENT_ONINTERACTINTERNAL_OFFSET))(this, context);
		}
	};
}
