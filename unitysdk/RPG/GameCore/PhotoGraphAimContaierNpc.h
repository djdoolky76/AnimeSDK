#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerTargetBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PhotoGraphAimContaierNpc; }

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERNPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DFB20)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERNPC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8DFB60)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERNPC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DFAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimContaierNpc_TypeDefinitionIndex = 17515;

	class PhotoGraphAimContaierNpc : public ::RPG::GameCore::PhotoGraphAimContainerTargetBase
	{
	public:
		::RPG::GameCore::DynamicFloat* AimNpcID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERNPC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimContaierNpc* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimContaierNpc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERNPC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimContaierNpc* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimContaierNpc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERNPC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
