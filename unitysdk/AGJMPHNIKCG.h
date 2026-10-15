#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropSetEntityLodOffset; }
namespace RPG::GameCore { class TaskContext; }

#define AGJMPHNIKCG_CTOR_OFFSET UNITYSDK_OFFSET(0xCF2EF00)
#define AGJMPHNIKCG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF2EF30)

inline static constexpr unsigned int AGJMPHNIKCG_TypeDefinitionIndex = 58346;

	class AGJMPHNIKCG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetEntityLodOffset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetEntityLodOffset*))((::PBYTE)hIl2Cpp + AGJMPHNIKCG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJMPHNIKCG_ONTASKBEGIN_OFFSET))(this);
		}

	};
