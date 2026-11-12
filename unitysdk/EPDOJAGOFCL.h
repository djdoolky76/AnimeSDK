#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraDuelBubbleData; }

#define EPDOJAGOFCL_CTOR_OFFSET UNITYSDK_OFFSET(0x164E47D0)
#define EPDOJAGOFCL_KAJDHKHENLI_OFFSET UNITYSDK_OFFSET(0x164E4770)

inline static constexpr unsigned int EPDOJAGOFCL_TypeDefinitionIndex = 81023;

	class EPDOJAGOFCL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDOJAGOFCL_CTOR_OFFSET))(this);
		}

		::System::Void KAJDHKHENLI(::RPG::Client::Prop::ChimeraDuelBubbleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleData*))((::PBYTE)hIl2Cpp + EPDOJAGOFCL_KAJDHKHENLI_OFFSET))(this, a1);
		}

	};
