#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConvincePlayOptionTalk; }
namespace RPG::GameCore { class OptionTalkInfo; }

#define RPG_GAMECORE_CONVINCEPLAYOPTIONTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DF4C0)
#define RPG_GAMECORE_CONVINCEPLAYOPTIONTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5DF4D0)
#define RPG_GAMECORE_CONVINCEPLAYOPTIONTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5DF490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvincePlayOptionTalk_TypeDefinitionIndex = 21845;

	class ConvincePlayOptionTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* OptionList; // 0x18
		::Il2CppArray<::System::UInt32>* CorrectOptionIndex; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEPLAYOPTIONTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvincePlayOptionTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvincePlayOptionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEPLAYOPTIONTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvincePlayOptionTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvincePlayOptionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEPLAYOPTIONTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
