#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_BHLLOFHOLIK_OFFSET UNITYSDK_OFFSET(0xDA0CF20)
#define RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_CTOR_OFFSET UNITYSDK_OFFSET(0xDA0CFF0)
#define RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_GPNAIGGBKMG_OFFSET UNITYSDK_OFFSET(0xDA0CD50)
#define RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_ODJOCEHDAEH_OFFSET UNITYSDK_OFFSET(0xDA0C9E0)
#define RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_PACLCOMMALB_OFFSET UNITYSDK_OFFSET(0xDA0CB70)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingLayerSetting_TypeDefinitionIndex = 73763;

	class StreamingLayerSetting : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* _CachePersistentLayerName; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingLayerDetail*>* LayerSettings; // 0x20
		::System::Single VisionDistanceFactor; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_CTOR_OFFSET))(this);
		}

		::RPG::Client::OpenWorld::StreamingLayerDetail* ODJOCEHDAEH(::System::String* a1)
		{
			return ((::RPG::Client::OpenWorld::StreamingLayerDetail*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_ODJOCEHDAEH_OFFSET))(this, a1);
		}

		::System::String* PACLCOMMALB(::UnityEngine::Bounds a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_PACLCOMMALB_OFFSET))(this, a1);
		}

		::System::String* GPNAIGGBKMG(::System::Single a1, ::RPG::GameCore::StreamingLayerType a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single, ::RPG::GameCore::StreamingLayerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_GPNAIGGBKMG_OFFSET))(this, a1, a2);
		}

		::System::String* BHLLOFHOLIK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_BHLLOFHOLIK_OFFSET))(this);
		}

	};
}
