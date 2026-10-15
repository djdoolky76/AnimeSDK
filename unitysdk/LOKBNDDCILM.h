#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropReplaceTVTexture; }
namespace RPG::GameCore { class TaskContext; }

#define LOKBNDDCILM_CTOR_OFFSET UNITYSDK_OFFSET(0xB806190)
#define LOKBNDDCILM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8061C0)

inline static constexpr unsigned int LOKBNDDCILM_TypeDefinitionIndex = 53179;

	class LOKBNDDCILM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropReplaceTVTexture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropReplaceTVTexture*))((::PBYTE)hIl2Cpp + LOKBNDDCILM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKBNDDCILM_ONTASKBEGIN_OFFSET))(this);
		}

	};
