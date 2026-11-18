#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/Sirenix/Serialization/DataFormat.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGTIMELINECAMERA_GETFORMATTOSERIALIZEAS_OFFSET UNITYSDK_OFFSET(0x19B349E0)
#define MOLEMOLE_CONFIGTIMELINECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B34AF0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTimelineCamera_TypeDefinitionIndex = 53648;

	class ConfigTimelineCamera : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* CameraCurveDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINECAMERA__CTOR_OFFSET))(this);
		}

		::Sirenix::Serialization::DataFormat GetFormatToSerializeAs(::System::Boolean isPlayer)
		{
			return ((::Sirenix::Serialization::DataFormat(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMELINECAMERA_GETFORMATTOSERIALIZEAS_OFFSET))(this, isPlayer);
		}
	};
}
