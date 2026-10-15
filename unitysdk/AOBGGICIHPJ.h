#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }

#define AOBGGICIHPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x158A6500)
#define AOBGGICIHPJ_KJHBJNJEHHN_OFFSET UNITYSDK_OFFSET(0x158A6410)

inline static constexpr unsigned int AOBGGICIHPJ_TypeDefinitionIndex = 78282;

	class AOBGGICIHPJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOBGGICIHPJ_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelBubbleEventType KJHBJNJEHHN(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1)
		{
			return ((::RPG::GameCore::ChimeraDuelBubbleEventType(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*))((::PBYTE)hIl2Cpp + AOBGGICIHPJ_KJHBJNJEHHN_OFFSET))(this, a1);
		}

	};
