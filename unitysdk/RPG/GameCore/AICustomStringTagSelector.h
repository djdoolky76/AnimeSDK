#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AICustomStringTagSelector; }
namespace System { class String; }

#define RPG_GAMECORE_AICUSTOMSTRINGTAGSELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D338670)
#define RPG_GAMECORE_AICUSTOMSTRINGTAGSELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D338680)
#define RPG_GAMECORE_AICUSTOMSTRINGTAGSELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D338640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AICustomStringTagSelector_TypeDefinitionIndex = 15595;

	class AICustomStringTagSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::System::String* CustomStringTag; // 0x10
		::System::Boolean InverseResultFlag; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICUSTOMSTRINGTAGSELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AICustomStringTagSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AICustomStringTagSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICUSTOMSTRINGTAGSELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AICustomStringTagSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AICustomStringTagSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICUSTOMSTRINGTAGSELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
