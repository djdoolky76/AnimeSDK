#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLoadMode.h"
#include "unitysdk/RPG/GameCore/LodDetail.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityLodDetail; }

#define RPG_GAMECORE_ENTITYLODDETAIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6469C0)
#define RPG_GAMECORE_ENTITYLODDETAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D646310)
#define RPG_GAMECORE_ENTITYLODDETAIL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D646330)
#define RPG_GAMECORE_ENTITYLODDETAIL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6462A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityLodDetail_TypeDefinitionIndex = 19209;

	class EntityLodDetail : public ::RPG::GameCore::LodDetail
	{
	public:
		::System::Boolean Render; // 0x30
		::System::Boolean Shadow; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 POSMPriority; // 0x34
		::System::Boolean Animation; // 0x38
		::System::Boolean ParticleSystem; // 0x39
		::System::Boolean Skinning; // 0x3A
		::System::SByte ArtNodeLodLevel; // 0x3B
		::System::Boolean Effect; // 0x3C
		::System::Boolean SoundEvent; // 0x3D
		::System::Boolean Puzzle; // 0x3E
		::System::Byte _padding1[0x1];
		::RPG::GameCore::FiveDimLoadMode FiveDimLoadMode; // 0x40
		static ::RPG::GameCore::EntityLodDetail** StaticGet_InvisibleLodDetail()
		{
			return (::RPG::GameCore::EntityLodDetail**)UnitySDK::FromName("RPG.GameCore", "EntityLodDetail")->GetStaticField(0x24680);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODDETAIL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODDETAIL_CCTOR_OFFSET))();
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityLodDetail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODDETAIL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityLodDetail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODDETAIL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
