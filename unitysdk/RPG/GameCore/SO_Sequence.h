#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOCompositeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SOTaskConfig; }
namespace RPG::GameCore { class SO_Sequence; }

#define RPG_GAMECORE_SO_SEQUENCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6EAE0)
#define RPG_GAMECORE_SO_SEQUENCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6EAF0)
#define RPG_GAMECORE_SO_SEQUENCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA70DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_Sequence_TypeDefinitionIndex = 20056;

	class SO_Sequence : public ::RPG::GameCore::SOCompositeConfig
	{
	public:
		::System::Boolean IsLoop; // 0x28
		::System::Boolean IsShuffle; // 0x29
		::System::Byte _padding0[0x6];
		::Il2CppArray<::RPG::GameCore::SOTaskConfig*>* Tasks; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_SEQUENCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_Sequence* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_Sequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_SEQUENCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_Sequence* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_Sequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_SEQUENCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
