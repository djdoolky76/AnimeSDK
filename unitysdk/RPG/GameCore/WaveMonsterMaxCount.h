#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaveMonsterMaxCount; }
namespace System { class String; }

#define RPG_GAMECORE_WAVEMONSTERMAXCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC782B0)
#define RPG_GAMECORE_WAVEMONSTERMAXCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC782C0)
#define RPG_GAMECORE_WAVEMONSTERMAXCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC78280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaveMonsterMaxCount_TypeDefinitionIndex = 23398;

	class WaveMonsterMaxCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 Count; // 0x18
		::System::Boolean ReadFromTable; // 0x1C
		::System::Byte _padding0[0x3];
		::System::String* DynamicKey; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERMAXCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaveMonsterMaxCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaveMonsterMaxCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERMAXCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaveMonsterMaxCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaveMonsterMaxCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERMAXCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
