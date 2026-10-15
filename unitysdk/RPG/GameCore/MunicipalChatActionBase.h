#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MunicipalChatActionBase; }
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATACTIONBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C05F0)
#define RPG_GAMECORE_MUNICIPALCHATACTIONBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8C0600)
#define RPG_GAMECORE_MUNICIPALCHATACTIONBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C02D0)

namespace RPG::GameCore
{
	class MunicipalChatActionBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::Single WaitDelayTime; // 0x18
		::System::Int32 WaitActionIndex; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatActionBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatActionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatActionBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatActionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
