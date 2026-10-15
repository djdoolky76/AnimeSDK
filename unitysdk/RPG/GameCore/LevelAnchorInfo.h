#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelAnchorUsage.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelAnchorInfo; }
namespace RPG::GameCore { class LevelAnchorParameter; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELANCHORINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A4ED0)
#define RPG_GAMECORE_LEVELANCHORINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7A4EE0)
#define RPG_GAMECORE_LEVELANCHORINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A4EA0)

namespace RPG::GameCore
{
	class LevelAnchorInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::System::Single RotX; // 0x38
		::System::Single RotZ; // 0x3C
		::RPG::GameCore::LevelAnchorUsage Usage; // 0x40
		::System::Byte _padding0[0x4];
		::System::String* LookAtCameraTemplate; // 0x48
		::RPG::GameCore::LevelAnchorParameter* CustomParameter; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAnchorInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAnchorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAnchorInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAnchorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
