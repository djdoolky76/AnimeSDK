#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_SWITCHSCENECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F7BC0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int SwitchSceneConfig_TypeDefinitionIndex = 72193;

	class SwitchSceneConfig : public ::System::Object
	{
	public:
		::System::String* dialogueKey; // 0x10
		::System::String* voiceKey; // 0x18
		::System::String* audioKey; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioEventItems; // 0x28
		::System::Boolean isTypeWriter; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SWITCHSCENECONFIG__CTOR_OFFSET))(this);
		}
	};
}
