#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPG::Client { class CameraModuleConfigBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAMERAMODULECONFIGCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xC938C10)
#define RPG_CLIENT_CAMERAMODULECONFIGCOLLECTION_IHKBEFMPDGI_OFFSET UNITYSDK_OFFSET(0xC938A80)

namespace RPG::Client
{
	class CameraModuleConfigCollection : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CameraModuleConfigBase*>* ModuleConfigList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMODULECONFIGCOLLECTION_CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleConfigBase* IHKBEFMPDGI(::RPG::Client::CameraModuleType a1)
		{
			return ((::RPG::Client::CameraModuleConfigBase*(*)(::PVOID, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMODULECONFIGCOLLECTION_IHKBEFMPDGI_OFFSET))(this, a1);
		}

	};
}
