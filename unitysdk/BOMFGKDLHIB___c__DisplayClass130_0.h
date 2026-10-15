#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore::Match3 { class BirdPieceTypeWeightConfig; }

#define BOMFGKDLHIB___C__DISPLAYCLASS130_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8D1960)
#define BOMFGKDLHIB___C__DISPLAYCLASS130_0___GETPIECETYPEWEIGHT_B__0_OFFSET UNITYSDK_OFFSET(0x1C8DB720)

	class BOMFGKDLHIB___c__DisplayClass130_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemPackCount; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMFGKDLHIB___C__DISPLAYCLASS130_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetPieceTypeWeight_b__0(::RPG::GameCore::Match3::BirdPieceTypeWeightConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*))((::PBYTE)hIl2Cpp + BOMFGKDLHIB___C__DISPLAYCLASS130_0___GETPIECETYPEWEIGHT_B__0_OFFSET))(this, a1);
		}

	};
