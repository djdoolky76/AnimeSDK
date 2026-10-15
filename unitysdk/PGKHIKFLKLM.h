#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLOHDPOEMDK;
namespace RPG::Client::FateRin { class CardStateChangeContext; }

#define PGKHIKFLKLM_CTOR_OFFSET UNITYSDK_OFFSET(0xC21C8D0)

inline static constexpr unsigned int PGKHIKFLKLM_TypeDefinitionIndex = 80544;

	class PGKHIKFLKLM : public ::System::Object
	{
	public:
		::HLOHDPOEMDK* HNEOOKPBCNK; // 0x10
		::RPG::Client::FateRin::CardStateChangeContext* BFIFDHMLIAD; // 0x18
		::System::Void _ctor(::HLOHDPOEMDK* a1, ::RPG::Client::FateRin::CardStateChangeContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HLOHDPOEMDK*, ::RPG::Client::FateRin::CardStateChangeContext*))((::PBYTE)hIl2Cpp + PGKHIKFLKLM_CTOR_OFFSET))(this, a1, a2);
		}

	};
