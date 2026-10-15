#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtDamageExtraDataBase; }

#define RPG_GAMECORE_RTDAMAGEEXTRADATABASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4DEB0)
#define RPG_GAMECORE_RTDAMAGEEXTRADATABASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA5A410)
#define RPG_GAMECORE_RTDAMAGEEXTRADATABASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4B220)

namespace RPG::GameCore
{
	class RtDamageExtraDataBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDAMAGEEXTRADATABASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtDamageExtraDataBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtDamageExtraDataBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDAMAGEEXTRADATABASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtDamageExtraDataBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtDamageExtraDataBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDAMAGEEXTRADATABASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
