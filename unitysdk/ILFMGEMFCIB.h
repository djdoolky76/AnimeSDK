#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StopAnimatorLayerEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define ILFMGEMFCIB_CTOR_OFFSET UNITYSDK_OFFSET(0x164B0B80)
#define ILFMGEMFCIB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164B0BB0)

	class ILFMGEMFCIB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopAnimatorLayerEmotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopAnimatorLayerEmotion*))((::PBYTE)hIl2Cpp + ILFMGEMFCIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFMGEMFCIB_ONTASKBEGIN_OFFSET))(this);
		}

	};
