#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckFloorCustomBoolV2; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4900C0)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D490260)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D490230)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4900D0)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D490090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckFloorCustomBoolV2_TypeDefinitionIndex = 20702;

	class ByCheckFloorCustomBoolV2 : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
