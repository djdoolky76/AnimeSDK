#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraDuelBubbleData; }

#define MGMKMJDEJEF_CTOR_OFFSET UNITYSDK_OFFSET(0xB928C30)
#define MGMKMJDEJEF_KAJDHKHENLI_OFFSET UNITYSDK_OFFSET(0xB928BD0)

	class MGMKMJDEJEF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMKMJDEJEF_CTOR_OFFSET))(this);
		}

		::System::Void KAJDHKHENLI(::RPG::Client::Prop::ChimeraDuelBubbleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleData*))((::PBYTE)hIl2Cpp + MGMKMJDEJEF_KAJDHKHENLI_OFFSET))(this, a1);
		}

	};
