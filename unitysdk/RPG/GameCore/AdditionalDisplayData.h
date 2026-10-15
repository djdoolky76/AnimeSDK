#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdditionalDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADDITIONALDISPLAYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D35FC40)
#define RPG_GAMECORE_ADDITIONALDISPLAYDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D35FA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdditionalDisplayData_TypeDefinitionIndex = 22576;

	class AdditionalDisplayData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* UIMessageHeight; // 0x10
		::RPG::GameCore::DynamicFloat* DitherRangeX; // 0x18
		::RPG::GameCore::DynamicFloat* DitherRangeY; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDITIONALDISPLAYDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdditionalDisplayData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdditionalDisplayData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDITIONALDISPLAYDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
