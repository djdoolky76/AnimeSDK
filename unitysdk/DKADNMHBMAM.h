#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAOEEDDAPIK.h"
#include "unitysdk/IGKFNIEJGLM.h"
class GAHPNAEGACM;
namespace RPG::GameCore { class LevelTurnLimitChange; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define DKADNMHBMAM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18C098C0)
#define DKADNMHBMAM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18C09B00)
#define DKADNMHBMAM_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x18C09710)
#define DKADNMHBMAM_CTOR_OFFSET UNITYSDK_OFFSET(0x18C09D00)
#define DKADNMHBMAM_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0x18C09290)
#define DKADNMHBMAM_FLFHNAPIDJD_OFFSET UNITYSDK_OFFSET(0x18C09800)
#define DKADNMHBMAM_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x18C08FF0)
#define DKADNMHBMAM_JKDKFHAPNBJ_OFFSET UNITYSDK_OFFSET(0x18C09530)
#define DKADNMHBMAM_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0x18C09600)
#define DKADNMHBMAM_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x18C08F10)
#define DKADNMHBMAM_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0x18C09690)
#define DKADNMHBMAM_LKOLIIDIBKI_OFFSET UNITYSDK_OFFSET(0x18C09440)
#define DKADNMHBMAM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x18C09070)
#define DKADNMHBMAM_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x18C090D0)
#define DKADNMHBMAM__ONBIND_OFFSET UNITYSDK_OFFSET(0x18C08CD0)
#define DKADNMHBMAM__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18C08EC0)

inline static constexpr unsigned int DKADNMHBMAM_TypeDefinitionIndex = 73274;

	class DKADNMHBMAM : public ::CAOEEDDAPIK
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xE0
		::System::String* DIDHOFMKIFH; // 0xE8
		::UnityEngine::UI::Text* LALMKOAFHGI; // 0xF0
		::UnityEngine::UI::Text* OCEEDFPJEOK; // 0xF8
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* JLGFFHBGCLL; // 0x0
		// static const ::System::String* JKKLHPGLHOI; // 0x0
		// static const ::System::String* LADCKPBPCCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKADNMHBMAM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKADNMHBMAM__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKADNMHBMAM__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKADNMHBMAM_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DKADNMHBMAM_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + DKADNMHBMAM_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void LKOLIIDIBKI(::RPG::GameCore::LevelTurnLimitChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnLimitChange*))((::PBYTE)hIl2Cpp + DKADNMHBMAM_LKOLIIDIBKI_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKADNMHBMAM_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void DOEDECKEMEF(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + DKADNMHBMAM_DOEDECKEMEF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DKADNMHBMAM_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void JKDKFHAPNBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKADNMHBMAM_JKDKFHAPNBJ_OFFSET))(this);
		}

		::System::Void JPIABGPFEGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKADNMHBMAM_JPIABGPFEGD_OFFSET))(this);
		}

		::System::Void KBGNFAKDHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKADNMHBMAM_KBGNFAKDHEH_OFFSET))(this);
		}

		::System::Void FLFHNAPIDJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKADNMHBMAM_FLFHNAPIDJD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKADNMHBMAM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKADNMHBMAM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
