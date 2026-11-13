#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIStyle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class LACLKDPNNLH;

#define HDIEJLMEELG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7CAE30)
#define HDIEJLMEELG_MOFFKFKMAIP_OFFSET UNITYSDK_OFFSET(0x1B7CB010)

inline static constexpr unsigned int HDIEJLMEELG_TypeDefinitionIndex = 57393;

	class HDIEJLMEELG : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x10
		::RPG::GameCore::StageInvasionMonsterUIData OHNNCOCDOED; // 0x18
		::System::Void _ctor(::LACLKDPNNLH* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Il2CppArray<::RPG::GameCore::FixPoint>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::LACLKDPNNLH*, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + HDIEJLMEELG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MOFFKFKMAIP(::RPG::GameCore::StageInvasionMonsterUIStyle a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageInvasionMonsterUIStyle, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + HDIEJLMEELG_MOFFKFKMAIP_OFFSET))(this, a1, a2, a3);
		}

	};
