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

#define HKMKNMPNCDL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15D4FB50)
#define HKMKNMPNCDL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15D4FDD0)
#define HKMKNMPNCDL_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x15D4F800)
#define HKMKNMPNCDL_CTOR_OFFSET UNITYSDK_OFFSET(0x15D50020)
#define HKMKNMPNCDL_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15D4ED10)
#define HKMKNMPNCDL_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0x15D4F2E0)
#define HKMKNMPNCDL_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15D4EDC0)
#define HKMKNMPNCDL_FLFHNAPIDJD_OFFSET UNITYSDK_OFFSET(0x15D4F8F0)
#define HKMKNMPNCDL_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x15D4EF70)
#define HKMKNMPNCDL_JKDKFHAPNBJ_OFFSET UNITYSDK_OFFSET(0x15D4F5F0)
#define HKMKNMPNCDL_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0x15D4F670)
#define HKMKNMPNCDL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x15D4EE40)
#define HKMKNMPNCDL_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0x15D4F7A0)
#define HKMKNMPNCDL_KMIEEJEHMIC_OFFSET UNITYSDK_OFFSET(0x15D4F6E0)
#define HKMKNMPNCDL_LJEJDOBCBAM_OFFSET UNITYSDK_OFFSET(0x15D4F9B0)
#define HKMKNMPNCDL_LKOLIIDIBKI_OFFSET UNITYSDK_OFFSET(0x15D4F4B0)
#define HKMKNMPNCDL_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x15D4F080)
#define HKMKNMPNCDL_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x15D4F120)
#define HKMKNMPNCDL__ONBIND_OFFSET UNITYSDK_OFFSET(0x15D4EC40)
#define HKMKNMPNCDL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15D4EFF0)

	class HKMKNMPNCDL : public ::CAOEEDDAPIK
	{
	public:
		::UnityEngine::UI::Text* OCEEDFPJEOK; // 0xE0
		::CAOEEDDAPIK_NNBFMHKHMKO* APPIHABBCGK; // 0xE8
		::UnityEngine::UI::Text* LALMKOAFHGI; // 0xF0
		::System::String* DIDHOFMKIFH; // 0xF8
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x100
		::System::Int32 CNICLEDFLFF; // 0x108
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* JKKLHPGLHOI; // 0x0
		// static const ::System::String* LADCKPBPCCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void LKOLIIDIBKI(::RPG::GameCore::LevelTurnLimitChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnLimitChange*))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_LKOLIIDIBKI_OFFSET))(this, a1);
		}

		::System::Void KMIEEJEHMIC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_KMIEEJEHMIC_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void DOEDECKEMEF(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_DOEDECKEMEF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void JKDKFHAPNBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_JKDKFHAPNBJ_OFFSET))(this);
		}

		::System::Void JPIABGPFEGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_JPIABGPFEGD_OFFSET))(this);
		}

		::System::Void KBGNFAKDHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_KBGNFAKDHEH_OFFSET))(this);
		}

		::System::Void FLFHNAPIDJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_FLFHNAPIDJD_OFFSET))(this, a1);
		}

		::System::Void LJEJDOBCBAM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_LJEJDOBCBAM_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
