#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateRinCaseBoardHouguInfo; }

#define RPG_GAMECORE_FATERINCASEBOARDHOUGUINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D670850)
#define RPG_GAMECORE_FATERINCASEBOARDHOUGUINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6704D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardHouguInfo_TypeDefinitionIndex = 16227;

	class FateRinCaseBoardHouguInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Boolean IsShow; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDHOUGUINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateRinCaseBoardHouguInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateRinCaseBoardHouguInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDHOUGUINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
