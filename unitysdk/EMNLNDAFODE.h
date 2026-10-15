#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNIJALGPGDD.h"
#include "unitysdk/RPG/GameCore/DiceCombatSkillPreviewInvokeType.h"
class AIMNKMEFBKE;
class GGDIMKDOIGA;
namespace RPG::GameCore { class DiceCombatNotAvatarPreviewConfig; }

#define EMNLNDAFODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C603DD0)
#define EMNLNDAFODE_PIGGBCBMFGH_OFFSET UNITYSDK_OFFSET(0x1C603DE0)

	class EMNLNDAFODE : public ::JNIJALGPGDD
	{
	public:
		::System::Void _ctor(::GGDIMKDOIGA* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGDIMKDOIGA*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + EMNLNDAFODE_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::DiceCombatNotAvatarPreviewConfig* PIGGBCBMFGH(::System::UInt32 a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2)
		{
			return ((::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType))((::PBYTE)hIl2Cpp + EMNLNDAFODE_PIGGBCBMFGH_OFFSET))(this, a1, a2);
		}

	};
