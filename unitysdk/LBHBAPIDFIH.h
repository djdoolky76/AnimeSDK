#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraDuelBubbleData; }

#define LBHBAPIDFIH_CTOR_OFFSET UNITYSDK_OFFSET(0xB5FB050)
#define LBHBAPIDFIH_KAJDHKHENLI_OFFSET UNITYSDK_OFFSET(0xB5FAFF0)

inline static constexpr unsigned int LBHBAPIDFIH_TypeDefinitionIndex = 78292;

	class LBHBAPIDFIH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBHBAPIDFIH_CTOR_OFFSET))(this);
		}

		::System::Void KAJDHKHENLI(::RPG::Client::Prop::ChimeraDuelBubbleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleData*))((::PBYTE)hIl2Cpp + LBHBAPIDFIH_KAJDHKHENLI_OFFSET))(this, a1);
		}

	};
