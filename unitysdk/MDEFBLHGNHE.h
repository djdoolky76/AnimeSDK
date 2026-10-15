#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }

#define MDEFBLHGNHE_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A29B0)
#define MDEFBLHGNHE_KJHBJNJEHHN_OFFSET UNITYSDK_OFFSET(0xB8A28B0)

	class MDEFBLHGNHE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEFBLHGNHE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelBubbleEventType KJHBJNJEHHN(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1)
		{
			return ((::RPG::GameCore::ChimeraDuelBubbleEventType(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*))((::PBYTE)hIl2Cpp + MDEFBLHGNHE_KJHBJNJEHHN_OFFSET))(this, a1);
		}

	};
