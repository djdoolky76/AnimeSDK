#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ActiveShotCameraTemplate; }
namespace RPG::GameCore { class TaskContext; }

#define FFEIOGIBIOD_CTOR_OFFSET UNITYSDK_OFFSET(0x157339B0)
#define FFEIOGIBIOD_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15733EC0)
#define FFEIOGIBIOD_JBKBBNFJAKN_OFFSET UNITYSDK_OFFSET(0x157340A0)
#define FFEIOGIBIOD_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15733ED0)
#define FFEIOGIBIOD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157339E0)

inline static constexpr unsigned int FFEIOGIBIOD_TypeDefinitionIndex = 57850;

	class FFEIOGIBIOD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveShotCameraTemplate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveShotCameraTemplate*))((::PBYTE)hIl2Cpp + FFEIOGIBIOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEIOGIBIOD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEIOGIBIOD_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEIOGIBIOD_ONSKIP_OFFSET))(this);
		}

		::System::Void JBKBBNFJAKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEIOGIBIOD_JBKBBNFJAKN_OFFSET))(this);
		}

	};
