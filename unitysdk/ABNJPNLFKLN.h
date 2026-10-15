#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MechCraftTraitType.h"
#include "unitysdk/System/Object.h"
class ABNJPNLFKLN;
class FCOEMCEDLNL;

#define ABNJPNLFKLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA1160)
#define ABNJPNLFKLN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCA0F70)

	class ABNJPNLFKLN : public ::System::Object
	{
	public:
		::RPG::GameCore::MechCraftTraitType GMPGDEINODK; // 0x10
		::System::Int32 FLBGELFEBCK; // 0x14
		::RPG::Client::TextID OENAMINOLLF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNJPNLFKLN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ABNJPNLFKLN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ABNJPNLFKLN*))((::PBYTE)hIl2Cpp + ABNJPNLFKLN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
