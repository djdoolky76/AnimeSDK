#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define JABNLOAOIBH_AFJIIFDOJMJ_OFFSET UNITYSDK_OFFSET(0x1652E930)
#define JABNLOAOIBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x16531FF0)
#define JABNLOAOIBH_HIPGBJJFJCF_OFFSET UNITYSDK_OFFSET(0x16530770)
#define JABNLOAOIBH_INHBHGCOPOO_OFFSET UNITYSDK_OFFSET(0x16531CB0)
#define JABNLOAOIBH_MJEODHKPKEB_OFFSET UNITYSDK_OFFSET(0x1652EA70)
#define JABNLOAOIBH_MMKEHEJPCDC_OFFSET UNITYSDK_OFFSET(0x1652ECB0)
#define JABNLOAOIBH_NMGEGNECDLA_OFFSET UNITYSDK_OFFSET(0x16531C20)

inline static constexpr unsigned int JABNLOAOIBH_TypeDefinitionIndex = 48477;

	class JABNLOAOIBH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Timeline::TimelineClip*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>** StaticGet_ILPOECBBOMG()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Timeline::TimelineClip*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>**)UnitySDK::FromName("", "JABNLOAOIBH")->GetStaticField(0x6A3E0);
		}

		static ::System::String** StaticGet_BDHAOINGJLC()
		{
			return (::System::String**)UnitySDK::FromName("", "JABNLOAOIBH")->GetStaticField(0x6A3E8);
		}

		static ::UnityEngine::Transform** StaticGet_NBHFAKPKFAB()
		{
			return (::UnityEngine::Transform**)UnitySDK::FromName("", "JABNLOAOIBH")->GetStaticField(0x6A3F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_MLNEFFDMNMM()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>**)UnitySDK::FromName("", "JABNLOAOIBH")->GetStaticField(0x6A3F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_IKFPMGIAJHI()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>**)UnitySDK::FromName("", "JABNLOAOIBH")->GetStaticField(0x6A400);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Timeline::TimelineClip*, ::System::String*, ::System::String*>>*>** StaticGet_BDLABNOJLAH()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Timeline::TimelineClip*, ::System::String*, ::System::String*>>*>**)UnitySDK::FromName("", "JABNLOAOIBH")->GetStaticField(0x6A408);
		}

		static ::System::String** StaticGet_JGFHAJBFHJC()
		{
			return (::System::String**)UnitySDK::FromName("", "JABNLOAOIBH")->GetStaticField(0x6A410);
		}

		static ::System::Nullable_1<::UnityEngine::SceneManagement::Scene>* StaticGet_EBNCHKLGCLC()
		{
			return (::System::Nullable_1<::UnityEngine::SceneManagement::Scene>*)UnitySDK::FromName("", "JABNLOAOIBH")->GetStaticField(0x15180);
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

		static ::System::ValueTuple_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*> HIPGBJJFJCF(::UnityEngine::Timeline::TimelineClip* a1, ::System::String* a2)
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>(*)(::UnityEngine::Timeline::TimelineClip*, ::System::String*))((::PBYTE)hIl2Cpp + JABNLOAOIBH_HIPGBJJFJCF_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* NMGEGNECDLA(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JABNLOAOIBH_NMGEGNECDLA_OFFSET))(a1, a2);
		}

	};
