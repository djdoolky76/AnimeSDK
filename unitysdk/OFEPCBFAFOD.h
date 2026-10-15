#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace System { class String; }

#define OFEPCBFAFOD_BJLICDCHIAD_1_OFFSET UNITYSDK_OFFSET(0xBE3F590)
#define OFEPCBFAFOD_BJLICDCHIAD_OFFSET UNITYSDK_OFFSET(0xBE3F510)
#define OFEPCBFAFOD_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3F6D0)
#define OFEPCBFAFOD_OADNJCJGKHD_1_OFFSET UNITYSDK_OFFSET(0xBE3F670)
#define OFEPCBFAFOD_OADNJCJGKHD_OFFSET UNITYSDK_OFFSET(0xBE3F5F0)

inline static constexpr unsigned int OFEPCBFAFOD_TypeDefinitionIndex = 81060;

	class OFEPCBFAFOD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPCBFAFOD_CTOR_OFFSET))(this);
		}

		::System::Void BJLICDCHIAD(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + OFEPCBFAFOD_BJLICDCHIAD_OFFSET))(this, a1);
		}

		::System::Void BJLICDCHIAD_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OFEPCBFAFOD_BJLICDCHIAD_1_OFFSET))(this, a1);
		}

		::System::Void OADNJCJGKHD(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + OFEPCBFAFOD_OADNJCJGKHD_OFFSET))(this, a1);
		}

		::System::Void OADNJCJGKHD_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OFEPCBFAFOD_OADNJCJGKHD_1_OFFSET))(this, a1);
		}

	};
