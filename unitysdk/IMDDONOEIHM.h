#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraDuelBubbleData; }

#define IMDDONOEIHM_CTOR_OFFSET UNITYSDK_OFFSET(0x164C4180)
#define IMDDONOEIHM_KAJDHKHENLI_OFFSET UNITYSDK_OFFSET(0x164C4120)

inline static constexpr unsigned int IMDDONOEIHM_TypeDefinitionIndex = 78285;

	class IMDDONOEIHM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDDONOEIHM_CTOR_OFFSET))(this);
		}

		::System::Void KAJDHKHENLI(::RPG::Client::Prop::ChimeraDuelBubbleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleData*))((::PBYTE)hIl2Cpp + IMDDONOEIHM_KAJDHKHENLI_OFFSET))(this, a1);
		}

	};
