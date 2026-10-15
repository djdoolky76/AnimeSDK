#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodDetail.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TickLodDetail; }

#define RPG_GAMECORE_TICKLODDETAIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB57430)
#define RPG_GAMECORE_TICKLODDETAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB56FE0)
#define RPG_GAMECORE_TICKLODDETAIL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB57000)
#define RPG_GAMECORE_TICKLODDETAIL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB56F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TickLodDetail_TypeDefinitionIndex = 19218;

	class TickLodDetail : public ::RPG::GameCore::LodDetail
	{
	public:
		::System::UInt32 TickInterval; // 0x30
		::System::UInt32 CulledTickInterval; // 0x34
		::System::UInt32 InvisibleTickInterval; // 0x38
		::System::Int32 AnimatorTickLod; // 0x3C
		::System::Int32 AnimatorCulledTickLod; // 0x40
		::System::Int32 AnimatorInvisibleTickLod; // 0x44
		static ::RPG::GameCore::TickLodDetail** StaticGet_ForbidTickDetail()
		{
			return (::RPG::GameCore::TickLodDetail**)UnitySDK::FromName("RPG.GameCore", "TickLodDetail")->GetStaticField(0x21F30);
		}

		// static const ::System::Object LOD0_TICK_INTERVAL; // 0x0
		// static const ::System::Object LOD1_TICK_INTERVAL; // 0x0
		// static const ::System::Object LOD2_TICK_INTERVAL; // 0x0
		// static const ::System::Object LOD3_TICK_INTERVAL; // 0x0
		// static const ::System::Object LOD4_TICK_INTERVAL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODDETAIL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODDETAIL_CCTOR_OFFSET))();
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TickLodDetail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TickLodDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODDETAIL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TickLodDetail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TickLodDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODDETAIL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
