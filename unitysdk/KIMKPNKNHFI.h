#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TalkDialogDecorationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KIMKPNKNHFI;

#define KIMKPNKNHFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D096AD0)
#define KIMKPNKNHFI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D096AE0)
#define KIMKPNKNHFI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D096AA0)

inline static constexpr unsigned int KIMKPNKNHFI_TypeDefinitionIndex = 21074;

	class KIMKPNKNHFI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TalkDialogDecorationType KGCENAJNDMO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIMKPNKNHFI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KIMKPNKNHFI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KIMKPNKNHFI*))((::PBYTE)hIl2Cpp + KIMKPNKNHFI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KIMKPNKNHFI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KIMKPNKNHFI*))((::PBYTE)hIl2Cpp + KIMKPNKNHFI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
