#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCurrentAudioLanguage; }
namespace RPG::GameCore { class TaskContext; }

#define HENKNGAHMNO_CTOR_OFFSET UNITYSDK_OFFSET(0x15C5E320)
#define HENKNGAHMNO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C5E350)

	class HENKNGAHMNO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentAudioLanguage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentAudioLanguage*))((::PBYTE)hIl2Cpp + HENKNGAHMNO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HENKNGAHMNO_EVALUATE_OFFSET))(this);
		}

	};
