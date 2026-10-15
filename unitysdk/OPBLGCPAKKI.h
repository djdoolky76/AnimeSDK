#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OPBLGCPAKKI;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define OPBLGCPAKKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BB6C0)
#define OPBLGCPAKKI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2BB700)
#define OPBLGCPAKKI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2BB660)

	class OPBLGCPAKKI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::String* HPLBJMDGFGJ; // 0x20
		::System::String* MPBNJEOANHL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBLGCPAKKI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OPBLGCPAKKI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OPBLGCPAKKI*))((::PBYTE)hIl2Cpp + OPBLGCPAKKI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OPBLGCPAKKI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OPBLGCPAKKI*))((::PBYTE)hIl2Cpp + OPBLGCPAKKI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
