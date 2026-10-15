#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByInTrackCameraByPathID; }
namespace RPG::GameCore { class TaskContext; }

#define EKOACLKELOF_CTOR_OFFSET UNITYSDK_OFFSET(0x15505300)
#define EKOACLKELOF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15505330)

inline static constexpr unsigned int EKOACLKELOF_TypeDefinitionIndex = 53146;

	class EKOACLKELOF
	{
	public:
		// static const ::System::Object LHPIKEBIPEF; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInTrackCameraByPathID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInTrackCameraByPathID*))((::PBYTE)hIl2Cpp + EKOACLKELOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOACLKELOF_EVALUATE_OFFSET))(this);
		}

	};
