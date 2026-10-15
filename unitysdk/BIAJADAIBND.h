#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BIAJADAIBND;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define BIAJADAIBND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D805C10)
#define BIAJADAIBND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D805C20)
#define BIAJADAIBND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D805BD0)

	class BIAJADAIBND : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* OENAMINOLLF; // 0x18
		::System::String* IPKCFNKIDMB; // 0x20
		::System::Boolean DFDMNILBBNH; // 0x28
		::System::Boolean JBGAMCKONFK; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAJADAIBND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BIAJADAIBND* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BIAJADAIBND*))((::PBYTE)hIl2Cpp + BIAJADAIBND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BIAJADAIBND* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BIAJADAIBND*))((::PBYTE)hIl2Cpp + BIAJADAIBND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
