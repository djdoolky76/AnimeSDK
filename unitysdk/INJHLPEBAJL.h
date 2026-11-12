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
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define INJHLPEBAJL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB8222F0)
#define INJHLPEBAJL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB8225B0)
#define INJHLPEBAJL_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xB821EF0)
#define INJHLPEBAJL_CTOR_OFFSET UNITYSDK_OFFSET(0xB822840)
#define INJHLPEBAJL_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0xB8219F0)
#define INJHLPEBAJL_FLFHNAPIDJD_OFFSET UNITYSDK_OFFSET(0xB821FE0)
#define INJHLPEBAJL_GKPPMDNHOIJ_OFFSET UNITYSDK_OFFSET(0xB8221F0)
#define INJHLPEBAJL_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0xB821E00)
#define INJHLPEBAJL_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xB821690)
#define INJHLPEBAJL_JKDKFHAPNBJ_OFFSET UNITYSDK_OFFSET(0xB821C00)
#define INJHLPEBAJL_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0xB821CA0)
#define INJHLPEBAJL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB8214C0)
#define INJHLPEBAJL_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0xB821E70)
#define INJHLPEBAJL_KMIEEJEHMIC_OFFSET UNITYSDK_OFFSET(0xB821CF0)
#define INJHLPEBAJL_LJEJDOBCBAM_OFFSET UNITYSDK_OFFSET(0xB8220A0)
#define INJHLPEBAJL_LKOLIIDIBKI_OFFSET UNITYSDK_OFFSET(0xB821B50)
#define INJHLPEBAJL_NBCOKPMIJJL_OFFSET UNITYSDK_OFFSET(0xB821D60)
#define INJHLPEBAJL_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB821790)
#define INJHLPEBAJL_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xB821830)
#define INJHLPEBAJL__ONBIND_OFFSET UNITYSDK_OFFSET(0xB821160)
#define INJHLPEBAJL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB821710)
#define INJHLPEBAJL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xB821390)
#define INJHLPEBAJL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB821440)

inline static constexpr unsigned int INJHLPEBAJL_TypeDefinitionIndex = 73246;

	class INJHLPEBAJL : public ::CAOEEDDAPIK
	{
	public:
		::CAOEEDDAPIK_NNBFMHKHMKO* APPIHABBCGK; // 0xE0
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xE8
		::UnityEngine::UI::Text* NKNOHHKCBEG; // 0xF0
		::System::String* DIDHOFMKIFH; // 0xF8
		::UnityEngine::Transform* LMPPJAGJPOD; // 0x100
		::UnityEngine::Transform* CDLLOEMLMBC; // 0x108
		::System::Int32 CNICLEDFLFF; // 0x110
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* JLGFFHBGCLL; // 0x0
		// static const ::System::String* LADCKPBPCCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJHLPEBAJL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJHLPEBAJL__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + INJHLPEBAJL__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJHLPEBAJL__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INJHLPEBAJL_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJHLPEBAJL__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + INJHLPEBAJL_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + INJHLPEBAJL_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void LKOLIIDIBKI(::RPG::GameCore::LevelTurnLimitChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnLimitChange*))((::PBYTE)hIl2Cpp + INJHLPEBAJL_LKOLIIDIBKI_OFFSET))(this, a1);
		}

		::System::Void KMIEEJEHMIC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INJHLPEBAJL_KMIEEJEHMIC_OFFSET))(this, a1);
		}

		::System::Void NBCOKPMIJJL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INJHLPEBAJL_NBCOKPMIJJL_OFFSET))(this, a1);
		}

		::System::Void JEJLPHKIHLB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INJHLPEBAJL_JEJLPHKIHLB_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJHLPEBAJL_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void DOEDECKEMEF(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + INJHLPEBAJL_DOEDECKEMEF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INJHLPEBAJL_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void JKDKFHAPNBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJHLPEBAJL_JKDKFHAPNBJ_OFFSET))(this);
		}

		::System::Void JPIABGPFEGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJHLPEBAJL_JPIABGPFEGD_OFFSET))(this);
		}

		::System::Void KBGNFAKDHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJHLPEBAJL_KBGNFAKDHEH_OFFSET))(this);
		}

		::System::Void FLFHNAPIDJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INJHLPEBAJL_FLFHNAPIDJD_OFFSET))(this, a1);
		}

		::System::Void LJEJDOBCBAM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INJHLPEBAJL_LJEJDOBCBAM_OFFSET))(this, a1);
		}

		::System::Void GKPPMDNHOIJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INJHLPEBAJL_GKPPMDNHOIJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJHLPEBAJL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJHLPEBAJL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
