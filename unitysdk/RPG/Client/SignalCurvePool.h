#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPG::Client { class SignalCurvePool; }
namespace RPG::Client { class SignalCurvePoolEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_SIGNALCURVEPOOL_AGMBDMMJCHK_OFFSET UNITYSDK_OFFSET(0xEB2AFF0)
#define RPG_CLIENT_SIGNALCURVEPOOL_COLBLNDIOGN_OFFSET UNITYSDK_OFFSET(0xEB2B2E0)
#define RPG_CLIENT_SIGNALCURVEPOOL_CTOR_OFFSET UNITYSDK_OFFSET(0xEB2B570)
#define RPG_CLIENT_SIGNALCURVEPOOL_DJKMCNIOEKG_OFFSET UNITYSDK_OFFSET(0xEB2B4D0)
#define RPG_CLIENT_SIGNALCURVEPOOL_DOFOPFKGAFD_OFFSET UNITYSDK_OFFSET(0xEB2B120)
#define RPG_CLIENT_SIGNALCURVEPOOL_FDLNNFAHFEL_OFFSET UNITYSDK_OFFSET(0xEB2A860)
#define RPG_CLIENT_SIGNALCURVEPOOL_FJHMMMLKOFF_OFFSET UNITYSDK_OFFSET(0xEB2AA70)
#define RPG_CLIENT_SIGNALCURVEPOOL_FLOJLKBNODP_OFFSET UNITYSDK_OFFSET(0xEB2AE40)
#define RPG_CLIENT_SIGNALCURVEPOOL_GET_CURRENTSCENEPOOL_OFFSET UNITYSDK_OFFSET(0xEB2A7E0)
#define RPG_CLIENT_SIGNALCURVEPOOL_HBOEBCDMLPC_OFFSET UNITYSDK_OFFSET(0xEB2B240)
#define RPG_CLIENT_SIGNALCURVEPOOL_KOIAEJMLCGJ_OFFSET UNITYSDK_OFFSET(0xEB2B090)
#define RPG_CLIENT_SIGNALCURVEPOOL_MJFGGPECBFH_OFFSET UNITYSDK_OFFSET(0xEB2A800)
#define RPG_CLIENT_SIGNALCURVEPOOL_MKCAFPIDJAB_OFFSET UNITYSDK_OFFSET(0xEB2B1B0)
#define RPG_CLIENT_SIGNALCURVEPOOL_SET_CURRENTSCENEPOOL_OFFSET UNITYSDK_OFFSET(0xEB2A7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int SignalCurvePool_TypeDefinitionIndex = 72938;

	class SignalCurvePool : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>* _curves; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::SignalCurvePoolEntry*>* _idToEntry; // 0x20
		::System::Int32 _nextId; // 0x28
		static ::RPG::Client::SignalCurvePool** StaticGet__currentScenePool()
		{
			return (::RPG::Client::SignalCurvePool**)UnitySDK::FromName("RPG.Client", "SignalCurvePool")->GetStaticField(0x73800);
		}

		static ::RPG::Client::SignalCurvePool** StaticGet__instance()
		{
			return (::RPG::Client::SignalCurvePool**)UnitySDK::FromName("RPG.Client", "SignalCurvePool")->GetStaticField(0x73808);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SignalCurvePool* get_CurrentScenePool()
		{
			return ((::RPG::Client::SignalCurvePool*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_GET_CURRENTSCENEPOOL_OFFSET))();
		}

		static ::System::Void set_CurrentScenePool(::RPG::Client::SignalCurvePool* a1)
		{
			return ((::System::Void(*)(::RPG::Client::SignalCurvePool*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_SET_CURRENTSCENEPOOL_OFFSET))(a1);
		}

		::System::Void MJFGGPECBFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_MJFGGPECBFH_OFFSET))(this);
		}

		::System::Void FDLNNFAHFEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_FDLNNFAHFEL_OFFSET))(this);
		}

		::System::Int32 FLOJLKBNODP(::System::String* a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_FLOJLKBNODP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AnimationCurve* AGMBDMMJCHK(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_AGMBDMMJCHK_OFFSET))(this, a1);
		}

		::RPG::Client::SignalCurvePoolEntry* KOIAEJMLCGJ(::System::Int32 a1)
		{
			return ((::RPG::Client::SignalCurvePoolEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_KOIAEJMLCGJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>* DOFOPFKGAFD()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SignalCurvePoolEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_DOFOPFKGAFD_OFFSET))(this);
		}

		::System::Void MKCAFPIDJAB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_MKCAFPIDJAB_OFFSET))(this, a1);
		}

		::System::Void HBOEBCDMLPC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_HBOEBCDMLPC_OFFSET))(this, a1);
		}

		::System::Boolean COLBLNDIOGN(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_COLBLNDIOGN_OFFSET))(this, a1);
		}

		::System::Boolean DJKMCNIOEKG(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_DJKMCNIOEKG_OFFSET))(this, a1, a2);
		}

		::System::Void FJHMMMLKOFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALCURVEPOOL_FJHMMMLKOFF_OFFSET))(this);
		}

	};
}
