#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BindInfo_Type.h"
namespace System { class String; }
namespace UnityEngine::Timeline { class TrackAsset; }

namespace RPGTools::Timeline
{
	struct alignas(8) BindInfo_BindReference
	{
		::RPGTools::Timeline::BindInfo_Type Type; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Timeline::TrackAsset* Track; // 0x18
		::System::String* ExposedKey; // 0x20
	};
}
