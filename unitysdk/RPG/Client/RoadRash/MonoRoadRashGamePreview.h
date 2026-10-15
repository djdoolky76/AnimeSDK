#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::RoadRash { class MonoRoadRashGamePreview_NFHNMENNOOA; }
namespace RPG::Client::RoadRash { class MonoRoadRashGamePreview_PreviewCar; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameSettings; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDEDEFB0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_DOOALIHBPGG_OFFSET UNITYSDK_OFFSET(0xDEDD6A0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_EMGOIGLBPEC_OFFSET UNITYSDK_OFFSET(0xDEDDF20)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_FMIJKEEMEEI_OFFSET UNITYSDK_OFFSET(0xDEDD160)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_GGBAPIAHCBE_OFFSET UNITYSDK_OFFSET(0xDEDED60)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_JBEJOBIFPFE_OFFSET UNITYSDK_OFFSET(0xDEDDA80)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_KCGNIKGMAEA_OFFSET UNITYSDK_OFFSET(0xDEDCCE0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_MJFNMKCNKHH_OFFSET UNITYSDK_OFFSET(0xDEDEBA0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_NIJDADJICJI_OFFSET UNITYSDK_OFFSET(0xDEDCFA0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_OHOELHDBNIM_OFFSET UNITYSDK_OFFSET(0xDEDE640)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDEDCF50)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xDEDD0D0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_PIMMGFLPIOH_OFFSET UNITYSDK_OFFSET(0xDEDCE30)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_PLAY_OFFSET UNITYSDK_OFFSET(0xDEDD630)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_RESETPREVIEW_OFFSET UNITYSDK_OFFSET(0xDEDDA20)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_STOP_OFFSET UNITYSDK_OFFSET(0xDEDD9E0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xDEDCBA0)

namespace RPG::Client::RoadRash
{
	class MonoRoadRashGamePreview : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::RoadRash::MonoRoadRashGameSettings* GameSettings; // 0x18
		::Il2CppArray<::System::Object*>* PreviewCars; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* AEPGJFIOOLM; // 0x28
		::System::Boolean OFEPHLEKKCD; // 0x30
		// static const ::System::Object GABMANGIJBO; // 0x0
		// static const ::System::Object KOBEMBMDLBJ; // 0x0
		// static const ::System::Object NMMAIECOBGC; // 0x0
		// static const ::System::Object AENFKPGMPAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_PLAY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_STOP_OFFSET))(this);
		}

		::System::Void ResetPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_RESETPREVIEW_OFFSET))(this);
		}

		::System::Void DOOALIHBPGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_DOOALIHBPGG_OFFSET))(this);
		}

		::System::Void NIJDADJICJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_NIJDADJICJI_OFFSET))(this);
		}

		::System::Void PIMMGFLPIOH(::RPG::Client::RoadRash::MonoRoadRashGamePreview_NFHNMENNOOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGamePreview_NFHNMENNOOA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_PIMMGFLPIOH_OFFSET))(this, a1);
		}

		::System::Void FMIJKEEMEEI(::System::Int32 a1, ::RPG::Client::RoadRash::MonoRoadRashGamePreview_PreviewCar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::RoadRash::MonoRoadRashGamePreview_PreviewCar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_FMIJKEEMEEI_OFFSET))(this, a1, a2);
		}

		::System::Void EMGOIGLBPEC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_EMGOIGLBPEC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean JBEJOBIFPFE(::RPG::Client::RoadRash::MonoRoadRashGameRoad* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_JBEJOBIFPFE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean OHOELHDBNIM(::RPG::Client::RoadRash::MonoRoadRashGameRoad* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_OHOELHDBNIM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KCGNIKGMAEA(::RPG::Client::RoadRash::MonoRoadRashGameRoad* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_KCGNIKGMAEA_OFFSET))(this, a1, a2);
		}

		::System::Single GGBAPIAHCBE(::RPG::Client::RoadRash::MonoRoadRashGameRoad* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_GGBAPIAHCBE_OFFSET))(this, a1);
		}

		::RPG::Client::RoadRash::MonoRoadRashGameRoad* MJFNMKCNKHH(::RPG::Client::RoadRash::MonoRoadRashGameRoad* a1)
		{
			return ((::RPG::Client::RoadRash::MonoRoadRashGameRoad*(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameRoad*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEPREVIEW_MJFNMKCNKHH_OFFSET))(this, a1);
		}

	};
}
