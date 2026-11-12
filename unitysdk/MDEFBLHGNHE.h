#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }

#define MDEFBLHGNHE_CTOR_OFFSET UNITYSDK_OFFSET(0xC14FB50)
#define MDEFBLHGNHE_KJHBJNJEHHN_OFFSET UNITYSDK_OFFSET(0xC14FA50)

inline static constexpr unsigned int MDEFBLHGNHE_TypeDefinitionIndex = 81018;

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
