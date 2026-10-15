#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockTargetParam.h"
class FCOEMCEDLNL;
namespace RPG::Client { class PropInteractMuteInputActionParam; }
namespace System { class String; }

#define RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FAFE0)
#define RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2FAFF0)
#define RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2FBF60)

namespace RPG::Client
{
	inline static constexpr unsigned int PropInteractMuteInputActionParam_TypeDefinitionIndex = 10181;

	class PropInteractMuteInputActionParam : public ::RPG::Client::LockTargetParam
	{
	public:
		::Il2CppArray<::System::String*>* MuteInputActionList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::PropInteractMuteInputActionParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::PropInteractMuteInputActionParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::PropInteractMuteInputActionParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::PropInteractMuteInputActionParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINTERACTMUTEINPUTACTIONPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
