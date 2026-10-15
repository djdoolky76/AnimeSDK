#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELECTRICCHAINV2_RANDOMUPDATER_BMOMBCHEEEI_OFFSET UNITYSDK_OFFSET(0xCD81E50)
#define RPG_CLIENT_ELECTRICCHAINV2_RANDOMUPDATER_CTOR_OFFSET UNITYSDK_OFFSET(0xCD82AF0)
#define RPG_CLIENT_ELECTRICCHAINV2_RANDOMUPDATER_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xCD7EDD0)

namespace RPG::Client::ElectricChainV2
{
	class RandomUpdater : public ::System::Object
	{
	public:
		::System::Single interval; // 0x10
		::System::Single _accumulatedTime; // 0x14
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _randomGroup; // 0x18
		::System::Int32 _index; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_RANDOMUPDATER_CTOR_OFFSET))(this);
		}

		::System::Boolean OINBDMGFFJL(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_RANDOMUPDATER_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 BMOMBCHEEEI()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_RANDOMUPDATER_BMOMBCHEEEI_OFFSET))(this);
		}

	};
}
