#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetAdvEffectToAnchor; }
namespace RPG::GameCore { class TaskContext; }

#define GPNIOOIJNHP_CTOR_OFFSET UNITYSDK_OFFSET(0x15B55DA0)
#define GPNIOOIJNHP_DHFGLMBEIEA_OFFSET UNITYSDK_OFFSET(0x15B56100)
#define GPNIOOIJNHP_OJHKJLNONDF_OFFSET UNITYSDK_OFFSET(0x15B56310)
#define GPNIOOIJNHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B55DD0)

inline static constexpr unsigned int GPNIOOIJNHP_TypeDefinitionIndex = 53219;

	class GPNIOOIJNHP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAdvEffectToAnchor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAdvEffectToAnchor*))((::PBYTE)hIl2Cpp + GPNIOOIJNHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNIOOIJNHP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OJHKJLNONDF(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectParams* a2, ::RPG::GameCore::AnchorInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectParams*, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + GPNIOOIJNHP_OJHKJLNONDF_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::AnchorInfo* DHFGLMBEIEA(::RPG::GameCore::DynamicString* a1)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + GPNIOOIJNHP_DHFGLMBEIEA_OFFSET))(this, a1);
		}

	};
