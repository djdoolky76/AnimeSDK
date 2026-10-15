#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraDuelBubbleData; }

#define BBAJKCAIBBO_CTOR_OFFSET UNITYSDK_OFFSET(0x15E80EE0)
#define BBAJKCAIBBO_KAJDHKHENLI_OFFSET UNITYSDK_OFFSET(0x15E80E80)

inline static constexpr unsigned int BBAJKCAIBBO_TypeDefinitionIndex = 78293;

	class BBAJKCAIBBO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBAJKCAIBBO_CTOR_OFFSET))(this);
		}

		::System::Void KAJDHKHENLI(::RPG::Client::Prop::ChimeraDuelBubbleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleData*))((::PBYTE)hIl2Cpp + BBAJKCAIBBO_KAJDHKHENLI_OFFSET))(this, a1);
		}

	};
