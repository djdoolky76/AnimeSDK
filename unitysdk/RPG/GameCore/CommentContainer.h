#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CommentContainer; }

#define RPG_GAMECORE_COMMENTCONTAINER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CAFB0)
#define RPG_GAMECORE_COMMENTCONTAINER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CAFD0)
#define RPG_GAMECORE_COMMENTCONTAINER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CAF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CommentContainer_TypeDefinitionIndex = 22259;

	class CommentContainer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 Width; // 0x18
		::System::Int32 Height; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMENTCONTAINER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CommentContainer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CommentContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMENTCONTAINER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CommentContainer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CommentContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMENTCONTAINER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
