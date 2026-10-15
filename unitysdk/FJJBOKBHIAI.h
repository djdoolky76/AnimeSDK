#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtBattleRecordCameraRootPos; }
namespace RPG::GameCore { class TaskContext; }

#define FJJBOKBHIAI_CTOR_OFFSET UNITYSDK_OFFSET(0x157D1BA0)
#define FJJBOKBHIAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157D1BD0)

inline static constexpr unsigned int FJJBOKBHIAI_TypeDefinitionIndex = 54154;

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
