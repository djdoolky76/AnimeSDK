#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraDuelBubbleData; }

#define NOKMHLGGKFK_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF34D0)
#define NOKMHLGGKFK_KAJDHKHENLI_OFFSET UNITYSDK_OFFSET(0xBCF3470)

	class NOKMHLGGKFK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKMHLGGKFK_CTOR_OFFSET))(this);
		}

		::System::Void KAJDHKHENLI(::RPG::Client::Prop::ChimeraDuelBubbleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleData*))((::PBYTE)hIl2Cpp + NOKMHLGGKFK_KAJDHKHENLI_OFFSET))(this, a1);
		}

	};
