#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetWaypointSafeZone; }
namespace RPG::GameCore { class TaskContext; }

#define ADAGAKBMIML_CTOR_OFFSET UNITYSDK_OFFSET(0xB1321E0)
#define ADAGAKBMIML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB132210)

inline static constexpr unsigned int ADAGAKBMIML_TypeDefinitionIndex = 58592;

	class ADAGAKBMIML
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetWaypointSafeZone* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetWaypointSafeZone*))((::PBYTE)hIl2Cpp + ADAGAKBMIML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAGAKBMIML_ONTASKBEGIN_OFFSET))(this);
		}

	};
