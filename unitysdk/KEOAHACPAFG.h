#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelChimeraPresetRow; }
namespace System { class Nullable; }

#define KEOAHACPAFG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBB7D50)
#define KEOAHACPAFG_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CBB7E40)
#define KEOAHACPAFG_CTOR_3_OFFSET UNITYSDK_OFFSET(0x1CBB7FE0)
#define KEOAHACPAFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB7D00)

	class KEOAHACPAFG : public ::System::Object
	{
	public:
		::System::UInt32 BPHEJFJENJK; // 0x10
		::System::Nullable* NJBJDEBPCLN; // 0x14
		::RPG::GameCore::ChimeraDuelTeamType JCDIEKGKCPP; // 0x1C
		::System::Int32 NJNLHLCLOJA; // 0x20
		::System::UInt32 PHFMCACHFIJ; // 0x24
		::System::Nullable* FNIAIOLFNPC; // 0x28
		::System::Int32 KEINOBNBHDO; // 0x30
		::System::UInt32 PJNNPOKJEFD; // 0x34
		::System::Int32 MGHNBDDCEKK; // 0x38
		static ::System::Int32* StaticGet_IEPCJGJDIDM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KEOAHACPAFG")->GetStaticField(0x11A50);
		}

		::System::Void _ctor(::RPG::GameCore::ChimeraDuelChimeraPresetRow* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelChimeraPresetRow*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + KEOAHACPAFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::KAKADGHNMFK* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::ChimeraDuelTeamType a4)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::System::Int32, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + KEOAHACPAFG_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + KEOAHACPAFG_CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4, ::RPG::GameCore::ChimeraDuelTeamType a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32, ::RPG::GameCore::ChimeraDuelTeamType, ::System::UInt32))((::PBYTE)hIl2Cpp + KEOAHACPAFG_CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
