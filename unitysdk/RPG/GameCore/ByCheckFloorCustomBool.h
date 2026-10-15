#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckFloorCustomBool; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D462070)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D462210)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4621E0)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D462080)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D462040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckFloorCustomBool_TypeDefinitionIndex = 20695;

	class ByCheckFloorCustomBool : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckFloorCustomBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckFloorCustomBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
