#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsWorkRecordType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JEKBLCLLKMG;

#define JEKBLCLLKMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D01F510)
#define JEKBLCLLKMG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D01F2C0)

inline static constexpr unsigned int JEKBLCLLKMG_TypeDefinitionIndex = 13970;

	class JEKBLCLLKMG : public ::System::Object
	{
	public:
		::RPG::GameCore::LimaoNewsWorkRecordType MNLAMKJIAOC; // 0x10
		::System::UInt32 OOCPKIGPEHP; // 0x14
		::System::UInt32 OGLGIADFFML; // 0x18
		::System::UInt32 GKENNBPKDDA; // 0x1C
		::RPG::Client::TextID MMFOONHFAEB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKBLCLLKMG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JEKBLCLLKMG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JEKBLCLLKMG*))((::PBYTE)hIl2Cpp + JEKBLCLLKMG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
