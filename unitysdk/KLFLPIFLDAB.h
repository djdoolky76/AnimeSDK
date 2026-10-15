#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KLFLPIFLDAB_CTOR_OFFSET UNITYSDK_OFFSET(0xB51F940)
#define KLFLPIFLDAB_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB51F900)
#define KLFLPIFLDAB_GET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0xB51F920)
#define KLFLPIFLDAB_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB51F910)
#define KLFLPIFLDAB_SET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0xB51F930)

inline static constexpr unsigned int KLFLPIFLDAB_TypeDefinitionIndex = 79744;

	class KLFLPIFLDAB : public ::System::Object
	{
	public:
		::System::String* _PortraitPath_k__BackingField; // 0x10
		::RPG::Client::TextID _Name_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFLPIFLDAB_CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFLPIFLDAB_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KLFLPIFLDAB_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_PortraitPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFLPIFLDAB_GET_PORTRAITPATH_OFFSET))(this);
		}

		::System::Void set_PortraitPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KLFLPIFLDAB_SET_PORTRAITPATH_OFFSET))(this, a1);
		}

	};
