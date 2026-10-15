#pragma once
#include "unitysdk/unitysdk.h"
class HIOEAKHGILF;
class PEEDLCHFAFL;
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PEKDLDNEIGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC1EB170)
#define PEKDLDNEIGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1EB190)
#define PEKDLDNEIGJ__SETEFFECTPARAMLITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xC1EB1E0)

inline static constexpr unsigned int PEKDLDNEIGJ_TypeDefinitionIndex = 76876;

	class PEKDLDNEIGJ
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::PEEDLCHFAFL* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::PEEDLCHFAFL*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + PEKDLDNEIGJ_CTOR_OFFSET))(this, a1, a2, a3);
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
