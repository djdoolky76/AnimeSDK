#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MunicipalChatActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MunicipalChatActionFreeStyleGraph; }
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLEGRAPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C0EB0)
#define RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLEGRAPH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8C0C40)
#define RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLEGRAPH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C0E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatActionFreeStyleGraph_TypeDefinitionIndex = 16929;

	class MunicipalChatActionFreeStyleGraph : public ::RPG::GameCore::MunicipalChatActionBase
	{
	public:
		::System::String* GraphName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLEGRAPH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatActionFreeStyleGraph* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatActionFreeStyleGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLEGRAPH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatActionFreeStyleGraph* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatActionFreeStyleGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONFREESTYLEGRAPH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
