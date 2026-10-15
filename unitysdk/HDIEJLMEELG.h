#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
#include "unitysdk/System/Object.h"
class LACLKDPNNLH;
namespace RPG::GameCore { class StageMonsterInvasionParamRow; }

#define HDIEJLMEELG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C37200)

	class HDIEJLMEELG : public ::System::Object
	{
	public:
		::RPG::GameCore::StageMonsterInvasionParamRow* LEPBGJHDPLM; // 0x10
		::RPG::GameCore::StageInvasionMonsterUIData OHNNCOCDOED; // 0x18
		::System::Void _ctor(::LACLKDPNNLH* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::LACLKDPNNLH*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HDIEJLMEELG_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
