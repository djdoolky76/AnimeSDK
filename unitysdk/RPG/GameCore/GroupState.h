#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupState; }
namespace System { class String; }

#define RPG_GAMECORE_GROUPSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9604A0)
#define RPG_GAMECORE_GROUPSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E960360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupState_TypeDefinitionIndex = 17500;

	class GroupState : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Comment; // 0x10
		::System::UInt32 SrcState; // 0x18
		::System::UInt32 DstState; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
