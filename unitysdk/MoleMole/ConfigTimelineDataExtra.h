#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class TimelineDataExtra; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGTIMELINEDATAEXTRA_ENSURETIMELINEEXTRADATASDEFAULTTYPES_OFFSET UNITYSDK_OFFSET(0x1B8C1340)
#define MOLEMOLE_CONFIGTIMELINEDATAEXTRA_ONTIMELINEEXTRADATASCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1B8C12F0)
#define MOLEMOLE_CONFIGTIMELINEDATAEXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C1760)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTimelineDataExtra_TypeDefinitionIndex = 57977;

	class ConfigTimelineDataExtra : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Int32 prorityOrder; // 0x58
		::System::Int32 timelineType; // 0x5C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TimelineDataExtra*>* timelineExtraDatas; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINEDATAEXTRA__CTOR_OFFSET))(this);
		}

		::System::Void OnTimelineExtraDatasCollectionChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINEDATAEXTRA_ONTIMELINEEXTRADATASCOLLECTIONCHANGED_OFFSET))(this);
		}

		::System::Void EnsureTimelineExtraDatasDefaultTypes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINEDATAEXTRA_ENSURETIMELINEEXTRADATASDEFAULTTYPES_OFFSET))(this);
		}
	};
}
