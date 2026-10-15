#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraDuelBubbleData; }

#define CLJKFDBEHOK_CTOR_OFFSET UNITYSDK_OFFSET(0xD78E9B0)
#define CLJKFDBEHOK_KAJDHKHENLI_OFFSET UNITYSDK_OFFSET(0xD78E950)

	class CLJKFDBEHOK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLJKFDBEHOK_CTOR_OFFSET))(this);
		}

		::System::Void KAJDHKHENLI(::RPG::Client::Prop::ChimeraDuelBubbleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleData*))((::PBYTE)hIl2Cpp + CLJKFDBEHOK_KAJDHKHENLI_OFFSET))(this, a1);
		}

	};
