#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAOEEDDAPIK.h"
#include "unitysdk/IGKFNIEJGLM.h"
class GAHPNAEGACM;
namespace RPG::Client { class ShowAttackTimeParam; }
namespace RPG::GameCore { class LevelTurnLimitChange; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define KALAFOGJFIC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x19DB4740)
#define KALAFOGJFIC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x19DB49C0)
#define KALAFOGJFIC_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x19DB44D0)
#define KALAFOGJFIC_CTOR_OFFSET UNITYSDK_OFFSET(0x19DB4C00)
#define KALAFOGJFIC_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0x19DB3EC0)
#define KALAFOGJFIC_FEMKPKFKCMG_OFFSET UNITYSDK_OFFSET(0x19DB4150)
#define KALAFOGJFIC_FLFHNAPIDJD_OFFSET UNITYSDK_OFFSET(0x19DB45C0)
#define KALAFOGJFIC_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x19DB3B80)
#define KALAFOGJFIC_JKDKFHAPNBJ_OFFSET UNITYSDK_OFFSET(0x19DB42E0)
#define KALAFOGJFIC_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0x19DB43C0)
#define KALAFOGJFIC_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x19DB3A50)
#define KALAFOGJFIC_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0x19DB4450)
#define KALAFOGJFIC_KMIEEJEHMIC_OFFSET UNITYSDK_OFFSET(0x19DB40A0)
#define KALAFOGJFIC_LKOLIIDIBKI_OFFSET UNITYSDK_OFFSET(0x19DB4200)
#define KALAFOGJFIC_NDHIDNBEECG_OFFSET UNITYSDK_OFFSET(0x19DB4680)
#define KALAFOGJFIC_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x19DB3C90)
#define KALAFOGJFIC_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x19DB3D00)
#define KALAFOGJFIC__ONBIND_OFFSET UNITYSDK_OFFSET(0x19DB35B0)
#define KALAFOGJFIC__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x19DB3C00)
#define KALAFOGJFIC__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x19DB3960)
#define KALAFOGJFIC__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19DB3A00)

inline static constexpr unsigned int KALAFOGJFIC_TypeDefinitionIndex = 73207;

	class KALAFOGJFIC : public ::CAOEEDDAPIK
	{
	public:
		::UnityEngine::UI::Text* LKCLLMKCPOA; // 0xE0
		::UnityEngine::Transform* BGDCEDJDHNG; // 0xE8
		::UnityEngine::UI::Text* OCEEDFPJEOK; // 0xF0
		::UnityEngine::UI::Text* LALMKOAFHGI; // 0xF8
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x100
		::UnityEngine::UI::Text* CCIKANDNKPK; // 0x108
		::UnityEngine::UI::Text* JDLFBCEMBBP; // 0x110
		::System::String* DIDHOFMKIFH; // 0x118
		::System::Int32 KFBDIEABBJM; // 0x120
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* JLGFFHBGCLL; // 0x0
		// static const ::System::String* JKKLHPGLHOI; // 0x0
		// static const ::System::String* LADCKPBPCCL; // 0x0
		// static const ::System::String* IEFPMIMOIIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAFOGJFIC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAFOGJFIC__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KALAFOGJFIC__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAFOGJFIC__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KALAFOGJFIC_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAFOGJFIC__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KALAFOGJFIC_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + KALAFOGJFIC_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void KMIEEJEHMIC(::RPG::Client::ShowAttackTimeParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowAttackTimeParam*))((::PBYTE)hIl2Cpp + KALAFOGJFIC_KMIEEJEHMIC_OFFSET))(this, a1);
		}

		::System::Void LKOLIIDIBKI(::RPG::GameCore::LevelTurnLimitChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnLimitChange*))((::PBYTE)hIl2Cpp + KALAFOGJFIC_LKOLIIDIBKI_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAFOGJFIC_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void DOEDECKEMEF(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + KALAFOGJFIC_DOEDECKEMEF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KALAFOGJFIC_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void JKDKFHAPNBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAFOGJFIC_JKDKFHAPNBJ_OFFSET))(this);
		}

		::System::Void JPIABGPFEGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAFOGJFIC_JPIABGPFEGD_OFFSET))(this);
		}

		::System::Void KBGNFAKDHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAFOGJFIC_KBGNFAKDHEH_OFFSET))(this);
		}

		::System::Void FEMKPKFKCMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAFOGJFIC_FEMKPKFKCMG_OFFSET))(this);
		}

		::System::Void FLFHNAPIDJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KALAFOGJFIC_FLFHNAPIDJD_OFFSET))(this, a1);
		}

		::System::Void NDHIDNBEECG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KALAFOGJFIC_NDHIDNBEECG_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAFOGJFIC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAFOGJFIC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
