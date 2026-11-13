#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class RuntimeFontManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_RUNTIMEFONTMANAGER_ADDRUNTIMEFONTREF_OFFSET UNITYSDK_OFFSET(0x1D039C00)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D039680)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_FORCEUNLOADFONT_OFFSET UNITYSDK_OFFSET(0x1D03AB30)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_GETNOWMILLISEC_OFFSET UNITYSDK_OFFSET(0x1D03AB60)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D039610)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_LOADFONT_OFFSET UNITYSDK_OFFSET(0x1D03ACE0)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_LOADRUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x1D039C10)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_RECORDALLFONTNAMES_OFFSET UNITYSDK_OFFSET(0x1D039740)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_RELEASERUNTIMEFONTREF_OFFSET UNITYSDK_OFFSET(0x1D03AB20)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_TRYGETRUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x1D03A840)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_TRYSETUPRUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x1D039690)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_TRYUNLOADRUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x1D03A880)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_UNLOADUNUSEDFONT_OFFSET UNITYSDK_OFFSET(0x1D03A2E0)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_USERUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x1D039710)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RuntimeFontManager_TypeDefinitionIndex = 8271;

	class RuntimeFontManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Font*>* m_lstExpiredFont; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* m_lstAllFontNames; // 0x18
		::UnityEngine::Font* m_runtimeFont; // 0x20
		::System::Int32 m_nRuntimeFontRefCount; // 0x28
		static ::MiHoYo::SDK::RuntimeFontManager** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::RuntimeFontManager**)UnitySDK::FromName("MiHoYo.SDK", "RuntimeFontManager")->GetStaticField(0x1B540);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::RuntimeFontManager* get_Instance()
		{
			return ((::MiHoYo::SDK::RuntimeFontManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void TrySetupRuntimeFont(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_TRYSETUPRUNTIMEFONT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Font* TryGetRuntimeFont()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_TRYGETRUNTIMEFONT_OFFSET))(this);
		}

		::System::Void TryUnloadRuntimeFont()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_TRYUNLOADRUNTIMEFONT_OFFSET))(this);
		}

		::System::Void AddRuntimeFontRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_ADDRUNTIMEFONTREF_OFFSET))(this);
		}

		::System::Void UnloadUnusedFont()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_UNLOADUNUSEDFONT_OFFSET))(this);
		}

		::System::Void LoadRuntimeFont(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_LOADRUNTIMEFONT_OFFSET))(this, a1);
		}

		::System::Void RecordAllFontNames(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_RECORDALLFONTNAMES_OFFSET))(this, a1);
		}

		::System::Void ReleaseRuntimeFontRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_RELEASERUNTIMEFONTREF_OFFSET))(this);
		}

		::UnityEngine::Font* LoadFont(::System::String* a1)
		{
			return ((::UnityEngine::Font*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_LOADFONT_OFFSET))(this, a1);
		}

		::System::Void ForceUnloadFont(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_FORCEUNLOADFONT_OFFSET))(this, a1);
		}

		::System::Boolean UseRuntimeFont()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_USERUNTIMEFONT_OFFSET))(this);
		}

		::System::Int64 GetNowMillisec()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_GETNOWMILLISEC_OFFSET))(this);
		}

	};
}
