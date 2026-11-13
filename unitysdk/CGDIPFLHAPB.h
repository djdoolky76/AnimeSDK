#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraDuelBubbleData; }

#define CGDIPFLHAPB_CTOR_OFFSET UNITYSDK_OFFSET(0x17859B00)
#define CGDIPFLHAPB_KAJDHKHENLI_OFFSET UNITYSDK_OFFSET(0x17859AA0)

inline static constexpr unsigned int CGDIPFLHAPB_TypeDefinitionIndex = 81025;

	class CGDIPFLHAPB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDIPFLHAPB_CTOR_OFFSET))(this);
		}

		::System::Void KAJDHKHENLI(::RPG::Client::Prop::ChimeraDuelBubbleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleData*))((::PBYTE)hIl2Cpp + CGDIPFLHAPB_KAJDHKHENLI_OFFSET))(this, a1);
		}

	};
