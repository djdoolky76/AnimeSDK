#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtBattleRecordCameraRootPos; }
namespace RPG::GameCore { class TaskContext; }

#define FJJBOKBHIAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1673C030)
#define FJJBOKBHIAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1673C060)

inline static constexpr unsigned int FJJBOKBHIAI_TypeDefinitionIndex = 55318;

	class FJJBOKBHIAI
	{
	public:
		// static const ::System::String* HBNHOEKJBOL; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBattleRecordCameraRootPos* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBattleRecordCameraRootPos*))((::PBYTE)hIl2Cpp + FJJBOKBHIAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJBOKBHIAI_ONTASKBEGIN_OFFSET))(this);
		}

	};
