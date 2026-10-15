#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetIgnoreSendEnlightSection; }

#define RPG_GAMECORE_SETIGNORESENDENLIGHTSECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB6610)
#define RPG_GAMECORE_SETIGNORESENDENLIGHTSECTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB6620)
#define RPG_GAMECORE_SETIGNORESENDENLIGHTSECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB65E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetIgnoreSendEnlightSection_TypeDefinitionIndex = 21926;

	class SetIgnoreSendEnlightSection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIGNORESENDENLIGHTSECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetIgnoreSendEnlightSection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetIgnoreSendEnlightSection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIGNORESENDENLIGHTSECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetIgnoreSendEnlightSection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetIgnoreSendEnlightSection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIGNORESENDENLIGHTSECTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
