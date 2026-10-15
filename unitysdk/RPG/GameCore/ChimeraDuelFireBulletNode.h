#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelFireBulletNode; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELFIREBULLETNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A10E0)
#define RPG_GAMECORE_CHIMERADUELFIREBULLETNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A1140)
#define RPG_GAMECORE_CHIMERADUELFIREBULLETNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A1040)

namespace RPG::GameCore
{
	class ChimeraDuelFireBulletNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* CasterSelector; // 0x10
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x18
		::System::String* BulletEffectPath; // 0x20
		::System::String* HitEffectPath; // 0x28
		::System::String* StartAnchorName; // 0x30
		::System::String* EndAnchorName; // 0x38
		::System::Boolean IsRotate; // 0x40
		::System::Byte _padding0[0x3];
		::RPG::MVector3 Scale; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREBULLETNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelFireBulletNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelFireBulletNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREBULLETNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelFireBulletNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelFireBulletNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREBULLETNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
