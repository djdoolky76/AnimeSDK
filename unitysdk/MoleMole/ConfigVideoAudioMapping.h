#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGVIDEOAUDIOMAPPING_BUILDMAP_OFFSET UNITYSDK_OFFSET(0x118F70E0)
#define MOLEMOLE_CONFIGVIDEOAUDIOMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x118F7300)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigVideoAudioMapping_TypeDefinitionIndex = 85604;

	class ConfigVideoAudioMapping : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* entries; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGVIDEOAUDIOMAPPING__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* BuildMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGVIDEOAUDIOMAPPING_BUILDMAP_OFFSET))(this);
		}
	};
}
