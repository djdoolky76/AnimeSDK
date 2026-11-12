#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/TABehaviorTickMode.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_TABEHAVIORBASE_BIDDPPEHBEC_OFFSET UNITYSDK_OFFSET(0xEC36EE0)
#define RPG_CLIENT_TABEHAVIORBASE_CFANGKKCBJD_OFFSET UNITYSDK_OFFSET(0xEC36F60)
#define RPG_CLIENT_TABEHAVIORBASE_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xEC372E0)
#define RPG_CLIENT_TABEHAVIORBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xEC37600)
#define RPG_CLIENT_TABEHAVIORBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEC36D10)
#define RPG_CLIENT_TABEHAVIORBASE_DMFEAEDIJMN_OFFSET UNITYSDK_OFFSET(0xEC36FE0)
#define RPG_CLIENT_TABEHAVIORBASE_DMNOEFIMGHC_OFFSET UNITYSDK_OFFSET(0xEC36FA0)
#define RPG_CLIENT_TABEHAVIORBASE_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xEC374E0)
#define RPG_CLIENT_TABEHAVIORBASE_GCIDKJICFMF_OFFSET UNITYSDK_OFFSET(0xEC36CC0)
#define RPG_CLIENT_TABEHAVIORBASE_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xEC375B0)
#define RPG_CLIENT_TABEHAVIORBASE_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xEC375D0)
#define RPG_CLIENT_TABEHAVIORBASE_GET_TICKMODE_OFFSET UNITYSDK_OFFSET(0xEC375F0)
#define RPG_CLIENT_TABEHAVIORBASE_IIDCMBJEJKO_OFFSET UNITYSDK_OFFSET(0xEC37540)
#define RPG_CLIENT_TABEHAVIORBASE_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xEC37320)
#define RPG_CLIENT_TABEHAVIORBASE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xEC37220)
#define RPG_CLIENT_TABEHAVIORBASE_LATETICK_OFFSET UNITYSDK_OFFSET(0xEC37480)
#define RPG_CLIENT_TABEHAVIORBASE_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xEC372A0)
#define RPG_CLIENT_TABEHAVIORBASE_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xEC373E0)
#define RPG_CLIENT_TABEHAVIORBASE_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xEC373A0)
#define RPG_CLIENT_TABEHAVIORBASE_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xEC37360)
#define RPG_CLIENT_TABEHAVIORBASE_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xEC37260)
#define RPG_CLIENT_TABEHAVIORBASE_PFDAKMMNAMP_OFFSET UNITYSDK_OFFSET(0xEC36C70)
#define RPG_CLIENT_TABEHAVIORBASE_PJPNKHDIPNG_OFFSET UNITYSDK_OFFSET(0xEC36F20)
#define RPG_CLIENT_TABEHAVIORBASE_PMFKAGMJKMD_OFFSET UNITYSDK_OFFSET(0xEC36E00)
#define RPG_CLIENT_TABEHAVIORBASE_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xEC36EA0)
#define RPG_CLIENT_TABEHAVIORBASE_SET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xEC375A0)
#define RPG_CLIENT_TABEHAVIORBASE_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xEC375C0)
#define RPG_CLIENT_TABEHAVIORBASE_SET_TICKMODE_OFFSET UNITYSDK_OFFSET(0xEC375E0)
#define RPG_CLIENT_TABEHAVIORBASE_TICK_OFFSET UNITYSDK_OFFSET(0xEC37420)

namespace RPG::Client
{
	inline static constexpr unsigned int TABehaviorBase_TypeDefinitionIndex = 72746;

	class TABehaviorBase : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Boolean IsExecuteInEditMode; // 0x18
		::System::Boolean IsNeedTick; // 0x19
		::System::Boolean IsNeedLateTick; // 0x1A
		::System::Boolean IsNeedEndOfLateTick; // 0x1B
		::System::Boolean IsNeedRenderTick; // 0x1C
		::System::Boolean IsPreloading; // 0x1D
		::System::Boolean _IsEnabled_k__BackingField; // 0x1E
		::System::Boolean _IsVisible_k__BackingField; // 0x1F
		::RPG::Client::TABehaviorTickMode _TickMode_k__BackingField; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::GameEntity* _OwnerEntity; // 0x28
		::Il2CppArray<::System::String*>* _DependentAssets; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_CTOR_OFFSET))(this);
		}

		::System::Void PFDAKMMNAMP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_PFDAKMMNAMP_OFFSET))(this, a1);
		}

		::System::Void GCIDKJICFMF(::RPG::Client::TABehaviorTickMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TABehaviorTickMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_GCIDKJICFMF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void BIDDPPEHBEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_BIDDPPEHBEC_OFFSET))(this);
		}

		::System::Void PJPNKHDIPNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_PJPNKHDIPNG_OFFSET))(this);
		}

		::System::Void CFANGKKCBJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_CFANGKKCBJD_OFFSET))(this);
		}

		::System::Void DMNOEFIMGHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_DMNOEFIMGHC_OFFSET))(this);
		}

		::System::Void DMFEAEDIJMN(::Il2CppArray<::System::String*>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_DMFEAEDIJMN_OFFSET))(this, a1, a2);
		}

		::System::Void PMFKAGMJKMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_PMFKAGMJKMD_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_LATETICK_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void IIDCMBJEJKO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_IIDCMBJEJKO_OFFSET))(this, a1);
		}

		::System::Void set_IsEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_SET_ISENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_GET_ISENABLED_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_SET_ISVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_TickMode(::RPG::Client::TABehaviorTickMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TABehaviorTickMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_SET_TICKMODE_OFFSET))(this, a1);
		}

		::RPG::Client::TABehaviorTickMode get_TickMode()
		{
			return ((::RPG::Client::TABehaviorTickMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_GET_TICKMODE_OFFSET))(this);
		}

	};
}
