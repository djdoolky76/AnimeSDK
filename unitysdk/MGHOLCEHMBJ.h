#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGDGOMKKEJI;
class IFNMPBPNBIF;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }

#define MGHOLCEHMBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C74AF60)
#define MGHOLCEHMBJ_KDNJPGOCAED_OFFSET UNITYSDK_OFFSET(0x1C70FBB0)

	class MGHOLCEHMBJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHOLCEHMBJ_CTOR_OFFSET))(this);
		}

		static ::IFNMPBPNBIF* KDNJPGOCAED(::RPG::GameCore::DiceCombatDiceSelectorConfig* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::IFNMPBPNBIF*(*)(::RPG::GameCore::DiceCombatDiceSelectorConfig*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + MGHOLCEHMBJ_KDNJPGOCAED_OFFSET))(a1, a2);
		}

	};
