#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtSummonCharacterExtraDataBase; }

#define RPG_GAMECORE_RTSUMMONCHARACTEREXTRADATABASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA38B40)
#define RPG_GAMECORE_RTSUMMONCHARACTEREXTRADATABASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA38AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSummonCharacterExtraDataBase_TypeDefinitionIndex = 24123;

	class RtSummonCharacterExtraDataBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSUMMONCHARACTEREXTRADATABASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSummonCharacterExtraDataBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSummonCharacterExtraDataBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSUMMONCHARACTEREXTRADATABASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
