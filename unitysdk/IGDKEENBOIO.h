#pragma once
#include "unitysdk/unitysdk.h"
class JKFJEFGAFNF;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define IGDKEENBOIO_CTOR_OFFSET UNITYSDK_OFFSET(0x173B9F00)
#define IGDKEENBOIO_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x173BA210)
#define IGDKEENBOIO__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x173BA090)
#define IGDKEENBOIO__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x173BA150)

inline static constexpr unsigned int IGDKEENBOIO_TypeDefinitionIndex = 54177;

	class IGDKEENBOIO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JKFJEFGAFNF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JKFJEFGAFNF*))((::PBYTE)hIl2Cpp + IGDKEENBOIO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDKEENBOIO__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDKEENBOIO__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGDKEENBOIO_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
