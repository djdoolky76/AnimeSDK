#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class LockTargetParam; }

#define RPG_CLIENT_LOCKTARGETPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D328A40)
#define RPG_CLIENT_LOCKTARGETPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D328A50)
#define RPG_CLIENT_LOCKTARGETPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3288D0)

namespace RPG::Client
{
	inline static constexpr unsigned int LockTargetParam_TypeDefinitionIndex = 10180;

	class LockTargetParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LockTargetParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LockTargetParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LockTargetParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LockTargetParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCKTARGETPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
