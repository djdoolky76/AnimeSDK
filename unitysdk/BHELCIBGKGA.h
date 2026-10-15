#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/OrbitTargetPosType.h"
class BHELCIBGKGA;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define BHELCIBGKGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D802B20)
#define BHELCIBGKGA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D802730)

	class BHELCIBGKGA : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* IDKONBFPBLH; // 0x10
		::RPG::GameCore::DynamicFloat* IKMMBBLANIC; // 0x18
		::RPG::GameCore::DynamicFloat* NEMDKBKDFDN; // 0x20
		::RPG::GameCore::DynamicFloat* DBFCBDAFGAP; // 0x28
		::RPG::GameCore::DynamicFloat* HBAMPJPOOLM; // 0x30
		::RPG::GameCore::DynamicFloat* NHJNGNINNIL; // 0x38
		::RPG::GameCore::OrbitTargetPosType ILCCOJAOAFO; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHELCIBGKGA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BHELCIBGKGA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BHELCIBGKGA*))((::PBYTE)hIl2Cpp + BHELCIBGKGA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
