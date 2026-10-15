#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }

#define LFLFBJGMJCF_CTOR_OFFSET UNITYSDK_OFFSET(0xB6829D0)
#define LFLFBJGMJCF_GET_MIRACLE_OFFSET UNITYSDK_OFFSET(0xB682AF0)
#define LFLFBJGMJCF_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB6829E0)
#define LFLFBJGMJCF_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xB682A80)

inline static constexpr unsigned int LFLFBJGMJCF_TypeDefinitionIndex = 67028;

	class LFLFBJGMJCF : public ::System::Object
	{
	public:
		::RPG::Client::IRogueMiracle* _Miracle_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::IRogueMiracle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueMiracle*))((::PBYTE)hIl2Cpp + LFLFBJGMJCF_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLFBJGMJCF_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLFBJGMJCF_TRIGGERACTION_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracle* get_Miracle()
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLFBJGMJCF_GET_MIRACLE_OFFSET))(this);
		}

	};
