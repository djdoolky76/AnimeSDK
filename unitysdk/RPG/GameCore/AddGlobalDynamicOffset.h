#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddGlobalDynamicOffset; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D387D50)
#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D387D60)
#define RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D387D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddGlobalDynamicOffset_TypeDefinitionIndex = 22509;

	class AddGlobalDynamicOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicString* ConfigName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddGlobalDynamicOffset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddGlobalDynamicOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddGlobalDynamicOffset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddGlobalDynamicOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGLOBALDYNAMICOFFSET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
