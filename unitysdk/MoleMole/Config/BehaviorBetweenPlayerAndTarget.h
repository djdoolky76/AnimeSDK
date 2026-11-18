#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMBCLKDGGPO.h"
#include "unitysdk/MoleMole/Config/HollowInteractEffectImpBase.h"

class BCHOANCLADD;
class PJGJHHPJEKD;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_CHECK_OFFSET UNITYSDK_OFFSET(0x1652B660)
#define MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_FINISH_OFFSET UNITYSDK_OFFSET(0x1652BB90)
#define MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_ONINTERACTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1652B160)
#define MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1652B760)
#define MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_PLAYBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1652B200)
#define MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1652BBE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BehaviorBetweenPlayerAndTarget_TypeDefinitionIndex = 51162;

	class BehaviorBetweenPlayerAndTarget : public ::MoleMole::Config::HollowInteractEffectImpBase
	{
	public:
		::System::Collections::Generic::List_1<::BCHOANCLADD*>* workingDatas; // 0x20
		::System::String* PlayerBehavior; // 0x28
		::System::Collections::Generic::List_1<::MMBCLKDGGPO>* handles; // 0x30
		::System::String* TargetBehavior; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnInteractInternal(::PJGJHHPJEKD* context)
		{
			return ((::System::Void(*)(::PVOID, ::PJGJHHPJEKD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_ONINTERACTINTERNAL_OFFSET))(this, context);
		}

		::System::Void Check()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_CHECK_OFFSET))(this);
		}

		::System::Void PlayBehavior(::MoleMole::HollowChessboard::HollowEntity* entity, ::PJGJHHPJEKD* context, ::System::String* behavior, ::System::Boolean isPlayer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::PJGJHHPJEKD*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_PLAYBEHAVIOR_OFFSET))(this, entity, context, behavior, isPlayer);
		}

		::System::Void OnStop(::PJGJHHPJEKD* context)
		{
			return ((::System::Void(*)(::PVOID, ::PJGJHHPJEKD*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_ONSTOP_OFFSET))(this, context);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_FINISH_OFFSET))(this);
		}
	};
}
