#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodDetail.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NpcLodDetail; }

#define RPG_GAMECORE_NPCLODDETAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DBCD0)
#define RPG_GAMECORE_NPCLODDETAIL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8DBCE0)
#define RPG_GAMECORE_NPCLODDETAIL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DBC90)

namespace RPG::GameCore
{
	class NpcLodDetail : public ::RPG::GameCore::LodDetail
	{
	public:
		::System::Boolean Animation; // 0x30
		::System::Boolean Render; // 0x31
		::System::Boolean Skinning; // 0x32
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODDETAIL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcLodDetail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcLodDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODDETAIL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcLodDetail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcLodDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODDETAIL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
