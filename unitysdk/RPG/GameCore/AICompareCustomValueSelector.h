#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AICompareCustomValueSelector; }
namespace System { class String; }

#define RPG_GAMECORE_AICOMPARECUSTOMVALUESELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D30A1B0)
#define RPG_GAMECORE_AICOMPARECUSTOMVALUESELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D30A1C0)
#define RPG_GAMECORE_AICOMPARECUSTOMVALUESELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D30A180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AICompareCustomValueSelector_TypeDefinitionIndex = 15596;

	class AICompareCustomValueSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::System::String* CustomValueKey; // 0x10
		::RPG::GameCore::CompareType CompareType; // 0x18
		::System::Int32 CompareTarget; // 0x1C
		::System::Boolean InverseResultFlag; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPARECUSTOMVALUESELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AICompareCustomValueSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AICompareCustomValueSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPARECUSTOMVALUESELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AICompareCustomValueSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AICompareCustomValueSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPARECUSTOMVALUESELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
