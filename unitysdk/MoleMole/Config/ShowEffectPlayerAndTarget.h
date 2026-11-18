#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowInteractEffectImpBase.h"

class AIKGHHJKNCE;
class PJGJHHPJEKD;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET_GETENTITYRAWPIECE_OFFSET UNITYSDK_OFFSET(0xFFEC530)
#define MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET_ONINTERACTINTERNAL_OFFSET UNITYSDK_OFFSET(0xFFEC1F0)
#define MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET_ONSTOP_OFFSET UNITYSDK_OFFSET(0xFFEC650)
#define MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xFFEC6A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShowEffectPlayerAndTarget_TypeDefinitionIndex = 78751;

	class ShowEffectPlayerAndTarget : public ::MoleMole::Config::HollowInteractEffectImpBase
	{
	public:
		::System::String* PlayerEffect; // 0x20
		::System::String* TargetEffect; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnInteractInternal(::PJGJHHPJEKD* context)
		{
			return ((::System::Void(*)(::PVOID, ::PJGJHHPJEKD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET_ONINTERACTINTERNAL_OFFSET))(this, context);
		}

		::System::Void OnStop(::PJGJHHPJEKD* context)
		{
			return ((::System::Void(*)(::PVOID, ::PJGJHHPJEKD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET_ONSTOP_OFFSET))(this, context);
		}

		::AIKGHHJKNCE* GetEntityRawPiece(::MoleMole::HollowChessboard::HollowEntity* entity)
		{
			return ((::AIKGHHJKNCE*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET_GETENTITYRAWPIECE_OFFSET))(this, entity);
		}
	};
}
