#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGEFFECTSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x192682F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigEffectSound_TypeDefinitionIndex = 54589;

	class ConfigEffectSound : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* screenEffectConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGEFFECTSOUND__CTOR_OFFSET))(this);
		}
	};
}
