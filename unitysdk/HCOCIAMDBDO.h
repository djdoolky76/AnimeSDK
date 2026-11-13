#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueBuffData; }
namespace System { class String; }

#define HCOCIAMDBDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7BDC20)
#define HCOCIAMDBDO_GET_BUFF_OFFSET UNITYSDK_OFFSET(0x1B7BDD40)
#define HCOCIAMDBDO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B7BDC30)
#define HCOCIAMDBDO_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1B7BDCD0)

inline static constexpr unsigned int HCOCIAMDBDO_TypeDefinitionIndex = 68927;

	class HCOCIAMDBDO : public ::System::Object
	{
	public:
		::RPG::Client::RogueBuffData* _Buff_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::RogueBuffData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + HCOCIAMDBDO_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOCIAMDBDO_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOCIAMDBDO_TRIGGERACTION_OFFSET))(this);
		}

		::RPG::Client::RogueBuffData* get_Buff()
		{
			return ((::RPG::Client::RogueBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOCIAMDBDO_GET_BUFF_OFFSET))(this);
		}

	};
