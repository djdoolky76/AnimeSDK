#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0xF381CF0)
#define RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_EHKCMGMICAI_OFFSET UNITYSDK_OFFSET(0xF381C90)
#define RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_GET_FIRSTSEGMENTISOPEN_OFFSET UNITYSDK_OFFSET(0xF381C80)
#define RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_GET_SAMPLES_OFFSET UNITYSDK_OFFSET(0xF381C70)
#define RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_ISOPENAFTERCROSSING_OFFSET UNITYSDK_OFFSET(0xF3800B0)
#define RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_ISOPENATDISTANCE_OFFSET UNITYSDK_OFFSET(0xF37F790)
#define RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_RESETEVENTPOINTTRIGGEREDFLAGS_OFFSET UNITYSDK_OFFSET(0xF37A440)

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int TrackSamplePointDetector_TypeDefinitionIndex = 49922;

	class TrackSamplePointDetector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _samples; // 0x18
		::System::Boolean _firstSegmentIsOpen; // 0x20
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* SpeedPoints; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* EventPoints; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* get_Samples()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_GET_SAMPLES_OFFSET))(this);
		}

		::System::Boolean get_FirstSegmentIsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_GET_FIRSTSEGMENTISOPEN_OFFSET))(this);
		}

		::System::Boolean IsOpenAtDistance(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_ISOPENATDISTANCE_OFFSET))(this, a1);
		}

		::System::Boolean IsOpenAfterCrossing(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_ISOPENAFTERCROSSING_OFFSET))(this, a1, a2);
		}

		::System::Boolean EHKCMGMICAI(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_EHKCMGMICAI_OFFSET))(this, a1);
		}

		::System::Void ResetEventPointTriggeredFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_ROADGENERATOR_TRACKSAMPLEPOINTDETECTOR_RESETEVENTPOINTTRIGGEREDFLAGS_OFFSET))(this);
		}

	};
}
