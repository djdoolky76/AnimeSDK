#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ERAFLIPPERMANAGERDEBUG_CTOR_OFFSET UNITYSDK_OFFSET(0xCE1AE90)
#define RPG_CLIENT_ERAFLIPPERMANAGERDEBUG_HDPMELCDAMA_OFFSET UNITYSDK_OFFSET(0xCE1AE80)
#define RPG_CLIENT_ERAFLIPPERMANAGERDEBUG_NBBEMNGKEFD_OFFSET UNITYSDK_OFFSET(0xCE1AE00)

namespace RPG::Client
{
	class EraFlipperManagerDebug : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::EraStateType CurrentState; // 0x18
		::System::Int32 CurrentRegionId; // 0x1C
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Devices; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* TaIndex; // 0x28
		::System::Boolean InRegion; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGERDEBUG_CTOR_OFFSET))(this);
		}

		::System::Void NBBEMNGKEFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGERDEBUG_NBBEMNGKEFD_OFFSET))(this);
		}

		::System::Boolean HDPMELCDAMA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGERDEBUG_HDPMELCDAMA_OFFSET))(this);
		}

	};
}
