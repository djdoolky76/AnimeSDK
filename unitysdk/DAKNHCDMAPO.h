#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
class DAKNHCDMAPO;
class FCOEMCEDLNL;

#define DAKNHCDMAPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9D560)
#define DAKNHCDMAPO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9D320)

inline static constexpr unsigned int DAKNHCDMAPO_TypeDefinitionIndex = 14948;

	class DAKNHCDMAPO : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournAreaGroupID JFMBIOOCPIL; // 0x10
		::RPG::GameCore::RogueTournMode HILINOJPLGA; // 0x14
		::RPG::Client::TextID OENAMINOLLF; // 0x18
		::RPG::Client::TextID ANBDGFJDBPF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKNHCDMAPO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DAKNHCDMAPO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DAKNHCDMAPO*))((::PBYTE)hIl2Cpp + DAKNHCDMAPO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
