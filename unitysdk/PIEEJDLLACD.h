#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class SetAdvEffectTowardAnchor; }
namespace RPG::GameCore { class TaskContext; }

#define PIEEJDLLACD_CTOR_OFFSET UNITYSDK_OFFSET(0xC255E40)
#define PIEEJDLLACD_NPILIHHBAFA_OFFSET UNITYSDK_OFFSET(0xC2560E0)
#define PIEEJDLLACD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC255E70)

inline static constexpr unsigned int PIEEJDLLACD_TypeDefinitionIndex = 53220;

	class PIEEJDLLACD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAdvEffectTowardAnchor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAdvEffectTowardAnchor*))((::PBYTE)hIl2Cpp + PIEEJDLLACD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIEEJDLLACD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void NPILIHHBAFA(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectParams* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + PIEEJDLLACD_NPILIHHBAFA_OFFSET))(this, a1, a2);
		}

	};
