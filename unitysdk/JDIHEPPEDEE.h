#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMiniEmoEffect; }

#define JDIHEPPEDEE_CTOR_OFFSET UNITYSDK_OFFSET(0x165BDC60)
#define JDIHEPPEDEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165BDC90)
#define JDIHEPPEDEE_LBMACDLKEDF_OFFSET UNITYSDK_OFFSET(0x165BE2D0)
#define JDIHEPPEDEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165BDCD0)

inline static constexpr unsigned int JDIHEPPEDEE_TypeDefinitionIndex = 55744;

	class JDIHEPPEDEE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerMiniEmoEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerMiniEmoEffect*))((::PBYTE)hIl2Cpp + JDIHEPPEDEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIHEPPEDEE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIHEPPEDEE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void LBMACDLKEDF(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + JDIHEPPEDEE_LBMACDLKEDF_OFFSET))(this, a1, a2);
		}

	};
