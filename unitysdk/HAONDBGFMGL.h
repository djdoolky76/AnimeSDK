#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LoadBackgroundPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define HAONDBGFMGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C14DE80)
#define HAONDBGFMGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C14DEB0)
#define HAONDBGFMGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C14DEF0)

inline static constexpr unsigned int HAONDBGFMGL_TypeDefinitionIndex = 54139;

	class HAONDBGFMGL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoadBackgroundPlayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoadBackgroundPlayer*))((::PBYTE)hIl2Cpp + HAONDBGFMGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAONDBGFMGL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAONDBGFMGL_ONTASKBEGIN_OFFSET))(this);
		}

	};
