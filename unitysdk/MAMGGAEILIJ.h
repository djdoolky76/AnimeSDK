#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }

#define MAMGGAEILIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC0B45F0)
#define MAMGGAEILIJ_KJHBJNJEHHN_OFFSET UNITYSDK_OFFSET(0xC0B4590)

inline static constexpr unsigned int MAMGGAEILIJ_TypeDefinitionIndex = 81019;

	class MAMGGAEILIJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMGGAEILIJ_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelBubbleEventType KJHBJNJEHHN(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1)
		{
			return ((::RPG::GameCore::ChimeraDuelBubbleEventType(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*))((::PBYTE)hIl2Cpp + MAMGGAEILIJ_KJHBJNJEHHN_OFFSET))(this, a1);
		}

	};
