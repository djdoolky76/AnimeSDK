#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodDetail.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropLodDetail; }

#define RPG_GAMECORE_PROPLODDETAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94EAE0)
#define RPG_GAMECORE_PROPLODDETAIL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D94EB00)
#define RPG_GAMECORE_PROPLODDETAIL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D94EAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropLodDetail_TypeDefinitionIndex = 19113;

	class PropLodDetail : public ::RPG::GameCore::LodDetail
	{
	public:
		::System::Boolean Animation; // 0x30
		::System::Boolean Render; // 0x31
		::System::Boolean Shadow; // 0x32
		::System::Boolean Effect; // 0x33
		::System::Boolean Puzzle; // 0x34
		::System::Boolean SoundEvent; // 0x35
		::System::Boolean ParticleSystem; // 0x36
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLODDETAIL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropLodDetail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropLodDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLODDETAIL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropLodDetail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropLodDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLODDETAIL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
