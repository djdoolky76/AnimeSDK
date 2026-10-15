#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueBuffData; }
namespace System { class String; }

#define HCOCIAMDBDO_CTOR_OFFSET UNITYSDK_OFFSET(0x15C1DA20)
#define HCOCIAMDBDO_GET_BUFF_OFFSET UNITYSDK_OFFSET(0x15C1DB40)
#define HCOCIAMDBDO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15C1DA30)
#define HCOCIAMDBDO_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x15C1DAD0)

inline static constexpr unsigned int HCOCIAMDBDO_TypeDefinitionIndex = 66983;

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
