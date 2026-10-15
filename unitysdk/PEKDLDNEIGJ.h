#pragma once
#include "unitysdk/unitysdk.h"
class HIOEAKHGILF;
class PEEDLCHFAFL;
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define PEKDLDNEIGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC1F2740)
#define PEKDLDNEIGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1F2760)
#define PEKDLDNEIGJ__SETEFFECTPARAMLITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xC1F27B0)

inline static constexpr unsigned int PEKDLDNEIGJ_TypeDefinitionIndex = 76877;

	class PEKDLDNEIGJ
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::PEEDLCHFAFL* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::PEEDLCHFAFL*, ::System::Action*))((::PBYTE)hIl2Cpp + PEKDLDNEIGJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEKDLDNEIGJ_DISPOSE_OFFSET))(this);
		}

		::System::Void _SetEffectParamLittleGameEntity(::HIOEAKHGILF* a1, ::RPG::Client::TriggerEffectParams* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + PEKDLDNEIGJ__SETEFFECTPARAMLITTLEGAMEENTITY_OFFSET))(this, a1, a2);
		}

	};
