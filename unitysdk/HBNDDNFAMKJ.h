#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HeadLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define HBNDDNFAMKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15C04870)
#define HBNDDNFAMKJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C048A0)

inline static constexpr unsigned int HBNDDNFAMKJ_TypeDefinitionIndex = 55878;

	class HBNDDNFAMKJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HeadLookAt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HeadLookAt*))((::PBYTE)hIl2Cpp + HBNDDNFAMKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNDDNFAMKJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
