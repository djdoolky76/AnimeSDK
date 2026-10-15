#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleMainsubKillSealScore; }

#define RPG_GAMECORE_MARBLEMAINSUBKILLSEALSCORE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D812650)
#define RPG_GAMECORE_MARBLEMAINSUBKILLSEALSCORE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8124F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMainsubKillSealScore_TypeDefinitionIndex = 18930;

	class MarbleMainsubKillSealScore : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SealID; // 0x10
		::System::Boolean IsMain; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 Score; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMAINSUBKILLSEALSCORE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleMainsubKillSealScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleMainsubKillSealScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMAINSUBKILLSEALSCORE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
