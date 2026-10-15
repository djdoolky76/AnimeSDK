#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChangeFaceDir; }
namespace RPG::GameCore { class TaskContext; }

#define JCJGJJDMDHI_CTOR_OFFSET UNITYSDK_OFFSET(0x16596680)
#define JCJGJJDMDHI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165966B0)

inline static constexpr unsigned int JCJGJJDMDHI_TypeDefinitionIndex = 54920;

	class JCJGJJDMDHI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeFaceDir* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeFaceDir*))((::PBYTE)hIl2Cpp + JCJGJJDMDHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJGJJDMDHI_ONTASKBEGIN_OFFSET))(this);
		}

	};
