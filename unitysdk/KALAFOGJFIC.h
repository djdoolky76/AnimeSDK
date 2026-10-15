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

#define KALAFOGJFIC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB2D7010)
#define KALAFOGJFIC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB2D7290)
#define KALAFOGJFIC_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xB2D6DA0)
#define KALAFOGJFIC_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D74D0)
#define KALAFOGJFIC_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB2D6230)
#define KALAFOGJFIC_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0xB2D6790)
#define KALAFOGJFIC_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB2D62D0)
#define KALAFOGJFIC_FEMKPKFKCMG_OFFSET UNITYSDK_OFFSET(0xB2D6A20)
#define KALAFOGJFIC_FLFHNAPIDJD_OFFSET UNITYSDK_OFFSET(0xB2D6E90)
#define KALAFOGJFIC_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xB2D6450)
#define KALAFOGJFIC_JKDKFHAPNBJ_OFFSET UNITYSDK_OFFSET(0xB2D6BB0)
#define KALAFOGJFIC_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0xB2D6C90)
#define KALAFOGJFIC_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB2D6320)
#define KALAFOGJFIC_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0xB2D6D20)
#define KALAFOGJFIC_KMIEEJEHMIC_OFFSET UNITYSDK_OFFSET(0xB2D6970)
#define KALAFOGJFIC_LKOLIIDIBKI_OFFSET UNITYSDK_OFFSET(0xB2D6AD0)
#define KALAFOGJFIC_NDHIDNBEECG_OFFSET UNITYSDK_OFFSET(0xB2D6F50)
#define KALAFOGJFIC_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB2D6560)
#define KALAFOGJFIC_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xB2D65D0)
#define KALAFOGJFIC__ONBIND_OFFSET UNITYSDK_OFFSET(0xB2D60B0)
#define KALAFOGJFIC__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB2D64D0)

inline static constexpr unsigned int KALAFOGJFIC_TypeDefinitionIndex = 71228;

	class KALAFOGJFIC : public ::CAOEEDDAPIK
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xE0
		::System::String* DIDHOFMKIFH; // 0xE8
		::UnityEngine::Transform* BGDCEDJDHNG; // 0xF0
		::UnityEngine::UI::Text* CCIKANDNKPK; // 0xF8
		::UnityEngine::UI::Text* LALMKOAFHGI; // 0x100
		::UnityEngine::UI::Text* JDLFBCEMBBP; // 0x108
		::UnityEngine::UI::Text* LKCLLMKCPOA; // 0x110
		::UnityEngine::UI::Text* OCEEDFPJEOK; // 0x118
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KALAFOGJFIC_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALAFOGJFIC_EKGCGIDIFJJ_OFFSET))(this);
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
