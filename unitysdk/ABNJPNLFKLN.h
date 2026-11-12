#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MechCraftTraitType.h"
#include "unitysdk/System/Object.h"
class ABNJPNLFKLN;
class FCOEMCEDLNL;

#define ABNJPNLFKLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE49020)
#define ABNJPNLFKLN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DE48E30)

inline static constexpr unsigned int ABNJPNLFKLN_TypeDefinitionIndex = 12029;

	class ABNJPNLFKLN : public ::System::Object
	{
	public:
		::RPG::Client::TextID OENAMINOLLF; // 0x10
		::RPG::GameCore::MechCraftTraitType GMPGDEINODK; // 0x20
		::System::Int32 FLBGELFEBCK; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNJPNLFKLN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ABNJPNLFKLN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ABNJPNLFKLN*))((::PBYTE)hIl2Cpp + ABNJPNLFKLN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
