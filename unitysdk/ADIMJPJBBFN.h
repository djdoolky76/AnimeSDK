#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAOEEDDAPIK.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CAOEEDDAPIK_NNBFMHKHMKO;
class GAHPNAEGACM;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class LevelEntityActionDelayChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define ADIMJPJBBFN_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB7A78C0)
#define ADIMJPJBBFN_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB7A7B00)
#define ADIMJPJBBFN_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xB7A7710)
#define ADIMJPJBBFN_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A7D00)
#define ADIMJPJBBFN_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0xB7A6F20)
#define ADIMJPJBBFN_EJCNNBNHLEA_OFFSET UNITYSDK_OFFSET(0xB7A74F0)
#define ADIMJPJBBFN_FPJBHJAKBJL_OFFSET UNITYSDK_OFFSET(0xB7A70A0)
#define ADIMJPJBBFN_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xB7A6C20)
#define ADIMJPJBBFN_JKDKFHAPNBJ_OFFSET UNITYSDK_OFFSET(0xB7A7370)
#define ADIMJPJBBFN_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0xB7A74A0)
#define ADIMJPJBBFN_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB7A6B40)
#define ADIMJPJBBFN_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0xB7A7690)
#define ADIMJPJBBFN_LDMPGIHOACD_OFFSET UNITYSDK_OFFSET(0xB7A7220)
#define ADIMJPJBBFN_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB7A6CA0)
#define ADIMJPJBBFN_NNEKDONGAHH_OFFSET UNITYSDK_OFFSET(0xB7A7800)
#define ADIMJPJBBFN_ODKDBHMADCD_OFFSET UNITYSDK_OFFSET(0xB7A7410)
#define ADIMJPJBBFN_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xB7A6D60)
#define ADIMJPJBBFN__ONBIND_OFFSET UNITYSDK_OFFSET(0xB7A6780)
#define ADIMJPJBBFN__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xB7A6A00)
#define ADIMJPJBBFN__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB7A6AB0)

inline static constexpr unsigned int ADIMJPJBBFN_TypeDefinitionIndex = 74120;

	class ADIMJPJBBFN : public ::CAOEEDDAPIK
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xE0
		::RPG::Client::PrefabLoadMeta* OGJJJANDJMP; // 0xE8
		::System::String* DIDHOFMKIFH; // 0xF0
		::CAOEEDDAPIK_NNBFMHKHMKO* APPIHABBCGK; // 0xF8
		::UnityEngine::UI::Text* NKNOHHKCBEG; // 0x100
		::UnityEngine::UI::Text* DFLHDOIPCKA; // 0x108
		::UnityEngine::GameObject* LBNBPMIFDHI; // 0x110
		::RPG::GameCore::FixPoint PHEJKKEMLBN; // 0x118
		::System::Int32 CNICLEDFLFF; // 0x120
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* JLGFFHBGCLL; // 0x0
		// static const ::System::String* LADCKPBPCCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIMJPJBBFN__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ADIMJPJBBFN__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIMJPJBBFN__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void FPJBHJAKBJL(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_FPJBHJAKBJL_OFFSET))(this, a1);
		}

		::System::Void LDMPGIHOACD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_LDMPGIHOACD_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void DOEDECKEMEF(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_DOEDECKEMEF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void JKDKFHAPNBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_JKDKFHAPNBJ_OFFSET))(this);
		}

		::System::Void ODKDBHMADCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_ODKDBHMADCD_OFFSET))(this);
		}

		::System::Void EJCNNBNHLEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_EJCNNBNHLEA_OFFSET))(this);
		}

		::System::Void JPIABGPFEGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_JPIABGPFEGD_OFFSET))(this);
		}

		::System::Void KBGNFAKDHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_KBGNFAKDHEH_OFFSET))(this);
		}

		::System::Void NNEKDONGAHH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_NNEKDONGAHH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
