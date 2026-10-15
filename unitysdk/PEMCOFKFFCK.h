#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetComfortZoneWidthOverride; }
namespace RPG::GameCore { class TaskContext; }

#define PEMCOFKFFCK_CTOR_OFFSET UNITYSDK_OFFSET(0xC1EBF40)
#define PEMCOFKFFCK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1EBF70)

inline static constexpr unsigned int PEMCOFKFFCK_TypeDefinitionIndex = 55376;

	class PEMCOFKFFCK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetComfortZoneWidthOverride* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetComfortZoneWidthOverride*))((::PBYTE)hIl2Cpp + PEMCOFKFFCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMCOFKFFCK_ONTASKBEGIN_OFFSET))(this);
		}

	};
