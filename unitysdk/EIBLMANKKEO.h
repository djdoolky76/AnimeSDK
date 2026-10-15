#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AttachEntityDeparted; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define EIBLMANKKEO_CTOR_OFFSET UNITYSDK_OFFSET(0x154BBCB0)
#define EIBLMANKKEO_HKIGAJAMNFG_OFFSET UNITYSDK_OFFSET(0x154BBD90)
#define EIBLMANKKEO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154BBCE0)

	class EIBLMANKKEO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AttachEntityDeparted* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttachEntityDeparted*))((::PBYTE)hIl2Cpp + EIBLMANKKEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBLMANKKEO_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Boolean HKIGAJAMNFG(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + EIBLMANKKEO_HKIGAJAMNFG_OFFSET))(a1, a2);
		}

	};
