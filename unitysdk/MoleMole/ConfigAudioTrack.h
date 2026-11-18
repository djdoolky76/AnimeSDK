#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGAUDIOTRACK_RUNTIMERELOAD_OFFSET UNITYSDK_OFFSET(0x1A04F330)
#define MOLEMOLE_CONFIGAUDIOTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04F4F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigAudioTrack_TypeDefinitionIndex = 79299;

	class ConfigAudioTrack : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* tracks; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGAUDIOTRACK__CTOR_OFFSET))(this);
		}

		::System::Void RuntimeReload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGAUDIOTRACK_RUNTIMERELOAD_OFFSET))(this);
		}
	};
}
