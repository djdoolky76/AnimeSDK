#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAOEEDDAPIK.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CAOEEDDAPIK_NNBFMHKHMKO;
class GAHPNAEGACM;
namespace RPG::GameCore { class LevelTurnLimitChange; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define OKFEPBKGBGO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17873610)
#define OKFEPBKGBGO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17873890)
#define OKFEPBKGBGO_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x17873310)
#define OKFEPBKGBGO_CTOR_OFFSET UNITYSDK_OFFSET(0x17873AD0)
#define OKFEPBKGBGO_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0x17872F20)
#define OKFEPBKGBGO_FLFHNAPIDJD_OFFSET UNITYSDK_OFFSET(0x17873400)
#define OKFEPBKGBGO_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x17872BB0)
#define OKFEPBKGBGO_JKDKFHAPNBJ_OFFSET UNITYSDK_OFFSET(0x17873130)
#define OKFEPBKGBGO_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0x178731D0)
#define OKFEPBKGBGO_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x17872AD0)
#define OKFEPBKGBGO_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0x17873290)
#define OKFEPBKGBGO_KMIEEJEHMIC_OFFSET UNITYSDK_OFFSET(0x17873220)
#define OKFEPBKGBGO_LJEJDOBCBAM_OFFSET UNITYSDK_OFFSET(0x178734C0)
#define OKFEPBKGBGO_LKOLIIDIBKI_OFFSET UNITYSDK_OFFSET(0x17873080)
#define OKFEPBKGBGO_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x17872CC0)
#define OKFEPBKGBGO_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x17872D60)
#define OKFEPBKGBGO__ONBIND_OFFSET UNITYSDK_OFFSET(0x17872860)
#define OKFEPBKGBGO__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x17872C30)
#define OKFEPBKGBGO__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x178729A0)
#define OKFEPBKGBGO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x17872A50)

inline static constexpr unsigned int OKFEPBKGBGO_TypeDefinitionIndex = 73242;

	class OKFEPBKGBGO : public ::CAOEEDDAPIK
	{
	public:
		::UnityEngine::UI::Text* NKNOHHKCBEG; // 0xE0
		::CAOEEDDAPIK_NNBFMHKHMKO* APPIHABBCGK; // 0xE8
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xF0
		::System::String* DIDHOFMKIFH; // 0xF8
		::System::Int32 CNICLEDFLFF; // 0x100
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* JLGFFHBGCLL; // 0x0
		// static const ::System::String* LADCKPBPCCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFEPBKGBGO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFEPBKGBGO__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + OKFEPBKGBGO__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFEPBKGBGO__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OKFEPBKGBGO_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFEPBKGBGO__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + OKFEPBKGBGO_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + OKFEPBKGBGO_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void LKOLIIDIBKI(::RPG::GameCore::LevelTurnLimitChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnLimitChange*))((::PBYTE)hIl2Cpp + OKFEPBKGBGO_LKOLIIDIBKI_OFFSET))(this, a1);
		}

		::System::Void KMIEEJEHMIC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OKFEPBKGBGO_KMIEEJEHMIC_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFEPBKGBGO_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void DOEDECKEMEF(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + OKFEPBKGBGO_DOEDECKEMEF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OKFEPBKGBGO_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void JKDKFHAPNBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFEPBKGBGO_JKDKFHAPNBJ_OFFSET))(this);
		}

		::System::Void JPIABGPFEGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFEPBKGBGO_JPIABGPFEGD_OFFSET))(this);
		}

		::System::Void KBGNFAKDHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFEPBKGBGO_KBGNFAKDHEH_OFFSET))(this);
		}

		::System::Void FLFHNAPIDJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKFEPBKGBGO_FLFHNAPIDJD_OFFSET))(this, a1);
		}

		::System::Void LJEJDOBCBAM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKFEPBKGBGO_LJEJDOBCBAM_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFEPBKGBGO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFEPBKGBGO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
