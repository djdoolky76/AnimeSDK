#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }

#define IGJPLPAALGG_CTOR_OFFSET UNITYSDK_OFFSET(0x16402AB0)
#define IGJPLPAALGG_GET_MIRACLE_OFFSET UNITYSDK_OFFSET(0x16402BB0)
#define IGJPLPAALGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16402AC0)
#define IGJPLPAALGG_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x16402B60)

inline static constexpr unsigned int IGJPLPAALGG_TypeDefinitionIndex = 67022;

	class IGJPLPAALGG : public ::System::Object
	{
	public:
		::RPG::Client::IRogueMiracle* _Miracle_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::IRogueMiracle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueMiracle*))((::PBYTE)hIl2Cpp + IGJPLPAALGG_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJPLPAALGG_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJPLPAALGG_TRIGGERACTION_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracle* get_Miracle()
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJPLPAALGG_GET_MIRACLE_OFFSET))(this);
		}

	};
