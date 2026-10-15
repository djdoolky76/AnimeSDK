#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateValueChangeInfo; }

#define RPG_GAMECORE_FATEVALUECHANGEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69F530)
#define RPG_GAMECORE_FATEVALUECHANGEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69F4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateValueChangeInfo_TypeDefinitionIndex = 19259;

	class FateValueChangeInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEVALUECHANGEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateValueChangeInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateValueChangeInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEVALUECHANGEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
