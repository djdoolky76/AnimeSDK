#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/ReferencePool_AutoReleaseReferenceObjectDatas.h"
#include "unitysdk/System/Object.h"

namespace RPG
{
	template <typename T>
	class ReferencePool_AutoReleaseReferenceObjectCollector_1 : public ::System::Object
	{
	public:
		static ::RPG::ReferencePool_AutoReleaseReferenceObjectDatas* StaticGet_Data()
		{
			return (::RPG::ReferencePool_AutoReleaseReferenceObjectDatas*)UnitySDK::FromName("RPG", "AutoReleaseReferenceObjectCollector`1")->GetStaticField(0x0);
		}

	};
}
