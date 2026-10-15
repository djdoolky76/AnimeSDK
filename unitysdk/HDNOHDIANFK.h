#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
namespace EnviromentSystemV2Space { class GradientCurveAsset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define HDNOHDIANFK_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15C31E80)
#define HDNOHDIANFK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C331B0)
#define HDNOHDIANFK_GEBFPAIIEKO_OFFSET UNITYSDK_OFFSET(0x15C31F10)
#define HDNOHDIANFK_HEAEPNABOLH_OFFSET UNITYSDK_OFFSET(0x15C31E70)
#define HDNOHDIANFK_ICECGHFPDCG_OFFSET UNITYSDK_OFFSET(0x15C32DB0)
#define HDNOHDIANFK_ICLGCHLMJHC_OFFSET UNITYSDK_OFFSET(0x15C33130)
#define HDNOHDIANFK_KBEEOBAKHPN_OFFSET UNITYSDK_OFFSET(0x15C32390)
#define HDNOHDIANFK_KBKFDLLMAGE_OFFSET UNITYSDK_OFFSET(0x15C32200)
#define HDNOHDIANFK_OINBDMGFFJL_1_OFFSET UNITYSDK_OFFSET(0x15C32AE0)
#define HDNOHDIANFK_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x15C31F70)

inline static constexpr unsigned int HDNOHDIANFK_TypeDefinitionIndex = 49494;

	class HDNOHDIANFK
	{
	public:
		::UnityEngine::Texture* MDNCNPJFGDF; // 0x28
		::System::String* KFMLMAKKADN; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNOHDIANFK_CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture* HEAEPNABOLH()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNOHDIANFK_HEAEPNABOLH_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNOHDIANFK_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void GEBFPAIIEKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNOHDIANFK_GEBFPAIIEKO_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::EnviromentSystemV2Space::GradientCurveAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::GradientCurveAsset*))((::PBYTE)hIl2Cpp + HDNOHDIANFK_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::System::Void KBKFDLLMAGE(::UnityEngine::Texture2D* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + HDNOHDIANFK_KBKFDLLMAGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KBEEOBAKHPN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDNOHDIANFK_KBEEOBAKHPN_OFFSET))(this, a1);
		}

		::System::Void OINBDMGFFJL_1(::System::Collections::Generic::List_1<::System::Single>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Gradient*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::UnityEngine::Gradient*>*))((::PBYTE)hIl2Cpp + HDNOHDIANFK_OINBDMGFFJL_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Gradient* ICECGHFPDCG(::UnityEngine::Gradient* a1, ::UnityEngine::Gradient* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*, ::System::Single))((::PBYTE)hIl2Cpp + HDNOHDIANFK_ICECGHFPDCG_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Gradient* ICLGCHLMJHC(::UnityEngine::Gradient* a1, ::UnityEngine::Gradient* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*, ::System::Single))((::PBYTE)hIl2Cpp + HDNOHDIANFK_ICLGCHLMJHC_OFFSET))(this, a1, a2, a3);
		}

	};
