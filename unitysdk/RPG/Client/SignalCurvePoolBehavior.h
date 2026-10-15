#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class SignalCurvePoolBehavior; }
namespace RPG::Client { class SignalCurvePoolEntry; }
namespace RPG::Client { class SignalCurvePoolMonoPlugin; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_AGMBDMMJCHK_OFFSET UNITYSDK_OFFSET(0xE0B8390)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE0B7F30)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_COLBLNDIOGN_OFFSET UNITYSDK_OFFSET(0xE0B8700)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE0B8A30)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_DJKMCNIOEKG_OFFSET UNITYSDK_OFFSET(0xE0B8970)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_DOFOPFKGAFD_OFFSET UNITYSDK_OFFSET(0xE0B84C0)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_FDLNNFAHFEL_OFFSET UNITYSDK_OFFSET(0xE0B7C10)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_FJHMMMLKOFF_OFFSET UNITYSDK_OFFSET(0xE0B7840)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_FLOJLKBNODP_OFFSET UNITYSDK_OFFSET(0xE0B8190)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xE0B8A10)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_GET__CURVES_OFFSET UNITYSDK_OFFSET(0xE0B77D0)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE0B7750)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_HBOEBCDMLPC_OFFSET UNITYSDK_OFFSET(0xE0B8660)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE0B8030)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_KOIAEJMLCGJ_OFFSET UNITYSDK_OFFSET(0xE0B8430)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE0B74E0)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE0B7ED0)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_MKCAFPIDJAB_OFFSET UNITYSDK_OFFSET(0xE0B85D0)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE0B8130)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE0B8090)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE0B7E70)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xE0B80F0)
#define RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xE0B8A20)

namespace RPG::Client
{
	inline static constexpr unsigned int SignalCurvePoolBehavior_TypeDefinitionIndex = 70960;

	class SignalCurvePoolBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::SignalCurvePoolEntry*>* _idToEntry; // 0x38
		::System::Int32 _nextId; // 0x40
		static ::RPG::Client::SignalCurvePoolBehavior** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::SignalCurvePoolBehavior**)UnitySDK::FromName("RPG.Client", "SignalCurvePoolBehavior")->GetStaticField(0x6F200);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void FDLNNFAHFEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_FDLNNFAHFEL_OFFSET))(this);
		}

		::System::Int32 FLOJLKBNODP(::System::String* a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_FLOJLKBNODP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AnimationCurve* AGMBDMMJCHK(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_AGMBDMMJCHK_OFFSET))(this, a1);
		}

		::RPG::Client::SignalCurvePoolEntry* KOIAEJMLCGJ(::System::Int32 a1)
		{
			return ((::RPG::Client::SignalCurvePoolEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_KOIAEJMLCGJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>* DOFOPFKGAFD()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_DOFOPFKGAFD_OFFSET))(this);
		}

		::System::Void MKCAFPIDJAB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_MKCAFPIDJAB_OFFSET))(this, a1);
		}

		::System::Void HBOEBCDMLPC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_HBOEBCDMLPC_OFFSET))(this, a1);
		}

		::System::Boolean COLBLNDIOGN(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_COLBLNDIOGN_OFFSET))(this, a1);
		}

		::System::Boolean DJKMCNIOEKG(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_DJKMCNIOEKG_OFFSET))(this, a1, a2);
		}

		::System::Void FJHMMMLKOFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_FJHMMMLKOFF_OFFSET))(this);
		}

		::RPG::Client::SignalCurvePoolMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::SignalCurvePoolMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>* get__Curves()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_GET__CURVES_OFFSET))(this);
		}

		static ::RPG::Client::SignalCurvePoolBehavior* get_Instance()
		{
			return ((::RPG::Client::SignalCurvePoolBehavior*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::SignalCurvePoolBehavior* a1)
		{
			return ((::System::Void(*)(::RPG::Client::SignalCurvePoolBehavior*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOLBEHAVIOR_SET_INSTANCE_OFFSET))(a1);
		}

	};
}
