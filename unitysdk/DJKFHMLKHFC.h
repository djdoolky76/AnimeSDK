#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDPACGAFJAN.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournPersonaStyle; }
namespace System { class Object; }

#define DJKFHMLKHFC_CTOR_OFFSET UNITYSDK_OFFSET(0xF239840)
#define DJKFHMLKHFC_IJOONKNIDKI_OFFSET UNITYSDK_OFFSET(0xF239850)
#define DJKFHMLKHFC_PJGLJFOHJCH_OFFSET UNITYSDK_OFFSET(0xF2398E0)

inline static constexpr unsigned int DJKFHMLKHFC_TypeDefinitionIndex = 67257;

	class DJKFHMLKHFC : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournPersonaStyle* LIGEJDMLPEP; // 0x10
		::DDPACGAFJAN LNPLJMDCPEP; // 0x18
		::System::Void _ctor(::DDPACGAFJAN a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDPACGAFJAN))((::PBYTE)hIl2Cpp + DJKFHMLKHFC_CTOR_OFFSET))(this, a1);
		}

		::System::Object* IJOONKNIDKI()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKFHMLKHFC_IJOONKNIDKI_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaStyle* PJGLJFOHJCH()
		{
			return ((::RPG::Client::IRogueTournPersonaStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKFHMLKHFC_PJGLJFOHJCH_OFFSET))(this);
		}

	};
