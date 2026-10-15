#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckFightFinish; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKFIGHTFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D461BB0)
#define RPG_GAMECORE_BYCHECKFIGHTFINISH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D461D30)
#define RPG_GAMECORE_BYCHECKFIGHTFINISH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D461D00)
#define RPG_GAMECORE_BYCHECKFIGHTFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D461BC0)
#define RPG_GAMECORE_BYCHECKFIGHTFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D461B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckFightFinish_TypeDefinitionIndex = 23444;

	class ByCheckFightFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFIGHTFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckFightFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckFightFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFIGHTFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckFightFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckFightFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFIGHTFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFightFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFightFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFIGHTFINISH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFightFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFightFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFIGHTFINISH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
