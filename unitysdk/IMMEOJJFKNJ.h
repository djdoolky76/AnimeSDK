#pragma once
#include "unitysdk/unitysdk.h"
class NIGOALBAAPN;
namespace RPG::GameCore { class TaskContext; }

#define IMMEOJJFKNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x164D12D0)
#define IMMEOJJFKNJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164D1300)

inline static constexpr unsigned int IMMEOJJFKNJ_TypeDefinitionIndex = 52843;

	class IMMEOJJFKNJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NIGOALBAAPN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NIGOALBAAPN*))((::PBYTE)hIl2Cpp + IMMEOJJFKNJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMEOJJFKNJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
