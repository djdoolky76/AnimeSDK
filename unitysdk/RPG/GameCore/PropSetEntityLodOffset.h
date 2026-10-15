#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropSetEntityLodOffset; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSETENTITYLODOFFSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D926060)
#define RPG_GAMECORE_PROPSETENTITYLODOFFSET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D926090)
#define RPG_GAMECORE_PROPSETENTITYLODOFFSET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D926010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetEntityLodOffset_TypeDefinitionIndex = 21962;

	class PropSetEntityLodOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::MVector3 LocalOffset; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETENTITYLODOFFSET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetEntityLodOffset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetEntityLodOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETENTITYLODOFFSET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetEntityLodOffset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetEntityLodOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETENTITYLODOFFSET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
