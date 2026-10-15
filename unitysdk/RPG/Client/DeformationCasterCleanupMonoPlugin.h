#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPMONOPLUGIN_CLEANUPREGISTEREDCASTER_OFFSET UNITYSDK_OFFSET(0xCBEEC70)
#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCBEEE00)
#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPMONOPLUGIN_MARKREGISTERED_OFFSET UNITYSDK_OFFSET(0xCBEEDA0)
#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPMONOPLUGIN_SETCASTER_OFFSET UNITYSDK_OFFSET(0xCBEED40)

namespace RPG::Client
{
	class DeformationCasterCleanupMonoPlugin
	{
	public:
		::UnityEngine::Renderer* RegisteredRenderer; // 0x30
		::System::Int32 RegisteredInstanceId; // 0x38
		::System::Boolean IsRegistered; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void SetCaster(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPMONOPLUGIN_SETCASTER_OFFSET))(this, a1, a2);
		}

		::System::Void MarkRegistered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPMONOPLUGIN_MARKREGISTERED_OFFSET))(this);
		}

		::System::Void CleanupRegisteredCaster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPMONOPLUGIN_CLEANUPREGISTEREDCASTER_OFFSET))(this);
		}

	};
}
