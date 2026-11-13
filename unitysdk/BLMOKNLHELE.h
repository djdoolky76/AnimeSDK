#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }

#define BLMOKNLHELE_CTOR_OFFSET UNITYSDK_OFFSET(0x18B55EC0)
#define BLMOKNLHELE_GET_MIRACLE_OFFSET UNITYSDK_OFFSET(0x18B55FE0)
#define BLMOKNLHELE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18B55ED0)
#define BLMOKNLHELE_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x18B55F70)

inline static constexpr unsigned int BLMOKNLHELE_TypeDefinitionIndex = 68969;

	class BLMOKNLHELE : public ::System::Object
	{
	public:
		::RPG::Client::IRogueMiracle* _Miracle_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::IRogueMiracle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueMiracle*))((::PBYTE)hIl2Cpp + BLMOKNLHELE_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMOKNLHELE_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMOKNLHELE_TRIGGERACTION_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracle* get_Miracle()
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMOKNLHELE_GET_MIRACLE_OFFSET))(this);
		}

	};
