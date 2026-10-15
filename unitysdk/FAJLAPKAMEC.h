#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetFaceDirectionLocked; }
namespace RPG::GameCore { class TaskContext; }

#define FAJLAPKAMEC_CTOR_OFFSET UNITYSDK_OFFSET(0x15682620)
#define FAJLAPKAMEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15682650)

inline static constexpr unsigned int FAJLAPKAMEC_TypeDefinitionIndex = 55509;

	class FAJLAPKAMEC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFaceDirectionLocked* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFaceDirectionLocked*))((::PBYTE)hIl2Cpp + FAJLAPKAMEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJLAPKAMEC_ONTASKBEGIN_OFFSET))(this);
		}

	};
