#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleConvertBuff; }

#define RPG_GAMECORE_MARBLECONVERTBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83C150)
#define RPG_GAMECORE_MARBLECONVERTBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D83C160)
#define RPG_GAMECORE_MARBLECONVERTBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83C100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleConvertBuff_TypeDefinitionIndex = 16833;

	class MarbleConvertBuff : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::UInt32 SourceBuff; // 0x10
		::System::UInt32 TargetBuff; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECONVERTBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleConvertBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleConvertBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECONVERTBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleConvertBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleConvertBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECONVERTBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
