#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseEvent.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/E6573557A0C33D55.h"

class FFED1A18A64D3A55;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_COMMON_TIMELINE_UNITY_ABCAUDIOEVENTMARKER_B8A3A3530D99EE34_OFFSET UNITYSDK_OFFSET(0x2053920)
#define ABC_COMMON_TIMELINE_UNITY_ABCAUDIOEVENTMARKER_B90AE1FE36CD63F7_OFFSET UNITYSDK_OFFSET(0x2053870)
#define ABC_COMMON_TIMELINE_UNITY_ABCAUDIOEVENTMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E456F0)

namespace ABC::Common::Timeline::Unity
{
	inline static constexpr unsigned int ABCAudioEventMarker_TypeDefinitionIndex = 8416;

	class ABCAudioEventMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::Collections::Generic::List_1<::ABC::Config::WwiseEvent>* Events; // 0x28
		::System::Collections::Generic::List_1<::ABC::Config::WwiseEvent>* ExitEvents; // 0x30
		::System::Nullable_1<::System::Object*> A2929D38A0327C4A; // 0x38

		::FFED1A18A64D3A55* B90AE1FE36CD63F7()
		{
			return ((::FFED1A18A64D3A55*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_ABCAUDIOEVENTMARKER_B90AE1FE36CD63F7_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_ABCAUDIOEVENTMARKER__CTOR_OFFSET))(this);
		}

		::UnityEngine::E6573557A0C33D55 B8A3A3530D99EE34()
		{
			return ((::UnityEngine::E6573557A0C33D55(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_ABCAUDIOEVENTMARKER_B8A3A3530D99EE34_OFFSET))(this);
		}
	};
}
