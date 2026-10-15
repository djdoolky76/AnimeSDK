#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPGTools/Timeline/BindInfo.h"
#include "unitysdk/UnityEngine/PropertyName.h"
namespace RPGTools::Timeline { class BindingData; }
namespace System { class String; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define PMBJMCJCPFO_LICNJKAHNJC_1_OFFSET UNITYSDK_OFFSET(0xC314BE0)
#define PMBJMCJCPFO_LICNJKAHNJC_2_OFFSET UNITYSDK_OFFSET(0xC314CA0)
#define PMBJMCJCPFO_LICNJKAHNJC_3_OFFSET UNITYSDK_OFFSET(0xC314E80)
#define PMBJMCJCPFO_LICNJKAHNJC_4_OFFSET UNITYSDK_OFFSET(0xC314F40)
#define PMBJMCJCPFO_LICNJKAHNJC_OFFSET UNITYSDK_OFFSET(0xC3149F0)

	class PMBJMCJCPFO : public ::System::Object
	{
	public:
		static ::System::Boolean LICNJKAHNJC(::UnityEngine::Timeline::TrackAsset* a1, ::RPGTools::Timeline::BindInfo a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TrackAsset*, ::RPGTools::Timeline::BindInfo))((::PBYTE)hIl2Cpp + PMBJMCJCPFO_LICNJKAHNJC_OFFSET))(a1, a2);
		}

		static ::System::Boolean LICNJKAHNJC_1(::UnityEngine::Timeline::TimelineAsset* a1, ::System::String* a2, ::RPGTools::Timeline::BindInfo a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineAsset*, ::System::String*, ::RPGTools::Timeline::BindInfo))((::PBYTE)hIl2Cpp + PMBJMCJCPFO_LICNJKAHNJC_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean LICNJKAHNJC_2(::RPGTools::Timeline::BindingData* a1, ::System::String* a2, ::RPGTools::Timeline::BindInfo a3)
		{
			return ((::System::Boolean(*)(::RPGTools::Timeline::BindingData*, ::System::String*, ::RPGTools::Timeline::BindInfo))((::PBYTE)hIl2Cpp + PMBJMCJCPFO_LICNJKAHNJC_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean LICNJKAHNJC_3(::UnityEngine::Timeline::TimelineAsset* a1, ::UnityEngine::PropertyName a2, ::RPGTools::Timeline::BindInfo a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::PropertyName, ::RPGTools::Timeline::BindInfo))((::PBYTE)hIl2Cpp + PMBJMCJCPFO_LICNJKAHNJC_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean LICNJKAHNJC_4(::RPGTools::Timeline::BindingData* a1, ::UnityEngine::PropertyName a2, ::RPGTools::Timeline::BindInfo a3)
		{
			return ((::System::Boolean(*)(::RPGTools::Timeline::BindingData*, ::UnityEngine::PropertyName, ::RPGTools::Timeline::BindInfo))((::PBYTE)hIl2Cpp + PMBJMCJCPFO_LICNJKAHNJC_4_OFFSET))(a1, a2, a3);
		}

	};
