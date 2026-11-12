#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PetMarbleTitleCondition.h"
#include "unitysdk/RPG/GameCore/PetMarbleTitleValue.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IEPCGBKKCHB;

#define IEPCGBKKCHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E0480)
#define IEPCGBKKCHB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E0E0060)

inline static constexpr unsigned int IEPCGBKKCHB_TypeDefinitionIndex = 14602;

	class IEPCGBKKCHB : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* NNACKOBKFGE; // 0x10
		::RPG::GameCore::PetMarbleTitleValue ACBKMOPHPLE; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x1C
		::System::Int32 NALMBOOCCIN; // 0x20
		::System::Int32 DPICNGBHFAC; // 0x24
		::RPG::Client::TextID NMAHGFAPENI; // 0x28
		::System::Int32 JAADBJBIBPH; // 0x38
		::RPG::GameCore::PetMarbleTitleCondition EKIJFPIPCKF; // 0x3C
		::RPG::Client::TextID OENAMINOLLF; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPCGBKKCHB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IEPCGBKKCHB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IEPCGBKKCHB*))((::PBYTE)hIl2Cpp + IEPCGBKKCHB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
