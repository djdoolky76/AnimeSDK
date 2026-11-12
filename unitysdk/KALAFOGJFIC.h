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

#define KALAFOGJFIC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBB62900)
#define KALAFOGJFIC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBB62B80)
#define KALAFOGJFIC_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xBB62690)
#define KALAFOGJFIC_CTOR_OFFSET UNITYSDK_OFFSET(0xBB62DC0)
#define KALAFOGJFIC_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0xBB62080)
#define KALAFOGJFIC_FEMKPKFKCMG_OFFSET UNITYSDK_OFFSET(0xBB62310)
#define KALAFOGJFIC_FLFHNAPIDJD_OFFSET UNITYSDK_OFFSET(0xBB62780)
#define KALAFOGJFIC_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xBB61D50)
#define KALAFOGJFIC_JKDKFHAPNBJ_OFFSET UNITYSDK_OFFSET(0xBB624A0)
#define KALAFOGJFIC_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0xBB62580)
#define KALAFOGJFIC_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBB61C20)
#define KALAFOGJFIC_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0xBB62610)
#define KALAFOGJFIC_KMIEEJEHMIC_OFFSET UNITYSDK_OFFSET(0xBB62260)
#define KALAFOGJFIC_LKOLIIDIBKI_OFFSET UNITYSDK_OFFSET(0xBB623C0)
#define KALAFOGJFIC_NDHIDNBEECG_OFFSET UNITYSDK_OFFSET(0xBB62840)
#define KALAFOGJFIC_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBB61E50)
#define KALAFOGJFIC_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xBB61EC0)
#define KALAFOGJFIC__ONBIND_OFFSET UNITYSDK_OFFSET(0xBB61780)
#define KALAFOGJFIC__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBB61DD0)
#define KALAFOGJFIC__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBB61B30)
#define KALAFOGJFIC__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBB61BD0)

inline static constexpr unsigned int KALAFOGJFIC_TypeDefinitionIndex = 73208;

	class KALAFOGJFIC : public ::CAOEEDDAPIK
	{
	public:
		::UnityEngine::Transform* BGDCEDJDHNG; // 0xE0
		::UnityEngine::UI::Text* LALMKOAFHGI; // 0xE8
		::UnityEngine::UI::Text* CCIKANDNKPK; // 0xF0
		::UnityEngine::UI::Text* JDLFBCEMBBP; // 0xF8
		::UnityEngine::UI::Text* OCEEDFPJEOK; // 0x100
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x108
		::UnityEngine::UI::Text* LKCLLMKCPOA; // 0x110
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
