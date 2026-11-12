#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"
class EMJIDLCDFMI;
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class JPDEOIMNNKN;
class LPHINGPIEAJ;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client::Feedback { class JellyBounceFeedback; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDE918C0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_DFEBIKCACPI_OFFSET UNITYSDK_OFFSET(0xDE914E0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0xDE91180)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_GET_OUTLINERENDERERS_OFFSET UNITYSDK_OFFSET(0xDE91700)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_GET_STRATEGY_OFFSET UNITYSDK_OFFSET(0xDE91710)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDE913C0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_JJGCHFLLIAO_OFFSET UNITYSDK_OFFSET(0xDE91880)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_KBLPEKOJPPN_OFFSET UNITYSDK_OFFSET(0xDE91600)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_PLAYCLICKBOUNCE_OFFSET UNITYSDK_OFFSET(0xDE911C0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_PNNIIBFEKBK_OFFSET UNITYSDK_OFFSET(0xDE91730)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_POHFJICBEBK_OFFSET UNITYSDK_OFFSET(0xDE91580)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xDE91650)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_SET_STRATEGY_OFFSET UNITYSDK_OFFSET(0xDE91720)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertView_TypeDefinitionIndex = 80102;

	class ComicDessertView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::JPDEOIMNNKN* _Strategy_k__BackingField; // 0x20
		::RPG::Client::Feedback::JellyBounceFeedback* _ClickBounce; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _OutlineRenderers; // 0x30
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x38
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x40
		::LPHINGPIEAJ* KAKEIDJDNHJ; // 0x48
		::System::Boolean JJHBCEPPMNC; // 0x50
		::System::Boolean HENJKFLMAIF; // 0x51
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_CTOR_OFFSET))(this);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_GETENTITY_OFFSET))(this);
		}

		::System::Void PlayClickBounce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_PLAYCLICKBOUNCE_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DFEBIKCACPI(::JPDEOIMNNKN* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::JPDEOIMNNKN*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_DFEBIKCACPI_OFFSET))(this, a1, a2);
		}

		::System::Void POHFJICBEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_POHFJICBEBK_OFFSET))(this);
		}

		::System::Void KBLPEKOJPPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_KBLPEKOJPPN_OFFSET))(this);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* get_OutlineRenderers()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_GET_OUTLINERENDERERS_OFFSET))(this);
		}

		::JPDEOIMNNKN* get_Strategy()
		{
			return ((::JPDEOIMNNKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_GET_STRATEGY_OFFSET))(this);
		}

		::System::Void set_Strategy(::JPDEOIMNNKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPDEOIMNNKN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_SET_STRATEGY_OFFSET))(this, a1);
		}

		::System::Boolean PNNIIBFEKBK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_PNNIIBFEKBK_OFFSET))(this);
		}

		::HLJNBBHKKMI* JJGCHFLLIAO()
		{
			return ((::HLJNBBHKKMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTVIEW_JJGCHFLLIAO_OFFSET))(this);
		}

	};
}
