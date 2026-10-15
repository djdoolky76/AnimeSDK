#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicValueRoundToInt; }
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICVALUEROUNDTOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FF2A0)
#define RPG_GAMECORE_DYNAMICVALUEROUNDTOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FF2B0)
#define RPG_GAMECORE_DYNAMICVALUEROUNDTOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FF270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicValueRoundToInt_TypeDefinitionIndex = 22955;

	class DynamicValueRoundToInt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUEROUNDTOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicValueRoundToInt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicValueRoundToInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUEROUNDTOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DynamicValueRoundToInt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DynamicValueRoundToInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUEROUNDTOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
