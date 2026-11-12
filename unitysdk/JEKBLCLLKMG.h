#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsWorkRecordType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JEKBLCLLKMG;

#define JEKBLCLLKMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E20C840)
#define JEKBLCLLKMG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E20C5F0)

inline static constexpr unsigned int JEKBLCLLKMG_TypeDefinitionIndex = 14127;

	class JEKBLCLLKMG : public ::System::Object
	{
	public:
		::RPG::Client::TextID MMFOONHFAEB; // 0x10
		::RPG::GameCore::LimaoNewsWorkRecordType MNLAMKJIAOC; // 0x20
		::System::UInt32 OGLGIADFFML; // 0x24
		::System::UInt32 GKENNBPKDDA; // 0x28
		::System::UInt32 OOCPKIGPEHP; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKBLCLLKMG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JEKBLCLLKMG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JEKBLCLLKMG*))((::PBYTE)hIl2Cpp + JEKBLCLLKMG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
