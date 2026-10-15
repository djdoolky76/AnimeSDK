#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
namespace System { class Nullable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define JABNLOAOIBH_AFJIIFDOJMJ_OFFSET UNITYSDK_OFFSET(0x1653CA20)
#define JABNLOAOIBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x165400B0)
#define JABNLOAOIBH_HIPGBJJFJCF_OFFSET UNITYSDK_OFFSET(0x1653E830)
#define JABNLOAOIBH_INHBHGCOPOO_OFFSET UNITYSDK_OFFSET(0x1653FD70)
#define JABNLOAOIBH_MJEODHKPKEB_OFFSET UNITYSDK_OFFSET(0x1653CB60)
#define JABNLOAOIBH_MMKEHEJPCDC_OFFSET UNITYSDK_OFFSET(0x1653CD70)
#define JABNLOAOIBH_NMGEGNECDLA_OFFSET UNITYSDK_OFFSET(0x1653FCE0)

	class JABNLOAOIBH : public ::System::Object
	{
	public:
		static ::UnityEngine::Transform** StaticGet_NBHFAKPKFAB()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "JABNLOAOIBH")->GetStaticField(0x6DE40);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_IKFPMGIAJHI()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>**)UnitySDK::FromName("", "JABNLOAOIBH")->GetStaticField(0x6DE48);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_MLNEFFDMNMM()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>**)UnitySDK::FromName("", "JABNLOAOIBH")->GetStaticField(0x6DE50);
		}

		static ::System::String** StaticGet_JGFHAJBFHJC()
		{
			return (::System::String**)UnitySDK::FromName("", "JABNLOAOIBH")->GetStaticField(0x6DE58);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::ValueTuple>*>** StaticGet_BDLABNOJLAH()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::ValueTuple>*>**)UnitySDK::FromName("", "JABNLOAOIBH")->GetStaticField(0x6DE60);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Timeline::TimelineClip*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>** StaticGet_ILPOECBBOMG()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Timeline::TimelineClip*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>**)UnitySDK::FromName("", "JABNLOAOIBH")->GetStaticField(0x6DE68);
		}

		static ::System::String** StaticGet_BDHAOINGJLC()
		{
			return (::System::String**)UnitySDK::FromName("", "JABNLOAOIBH")->GetStaticField(0x6DE70);
		}

		static ::System::Nullable** StaticGet_EBNCHKLGCLC()
		{
			return (::System::Nullable**)UnitySDK::FromName("", "JABNLOAOIBH")->GetStaticField(0x154A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JABNLOAOIBH_CCTOR_OFFSET))();
		}

		static ::System::Void AFJIIFDOJMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + JABNLOAOIBH_AFJIIFDOJMJ_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>* MJEODHKPKEB(::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>*(*)(::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + JABNLOAOIBH_MJEODHKPKEB_OFFSET))(a1);
		}

		static ::System::Void MMKEHEJPCDC(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineAsset*>* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Playables::PlayableDirector* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineAsset*>*, ::UnityEngine::Transform*, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + JABNLOAOIBH_MMKEHEJPCDC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void INHBHGCOPOO(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JABNLOAOIBH_INHBHGCOPOO_OFFSET))(a1, a2, a3);
		}

		static ::System::ValueTuple HIPGBJJFJCF(::UnityEngine::Timeline::TimelineClip* a1, ::System::String* a2)
		{
			return ((::System::ValueTuple(*)(::UnityEngine::Timeline::TimelineClip*, ::System::String*))((::PBYTE)hIl2Cpp + JABNLOAOIBH_HIPGBJJFJCF_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* NMGEGNECDLA(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JABNLOAOIBH_NMGEGNECDLA_OFFSET))(a1, a2);
		}

	};
