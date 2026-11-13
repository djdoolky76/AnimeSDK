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

#define ADIMJPJBBFN_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x182B09D0)
#define ADIMJPJBBFN_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x182B0C10)
#define ADIMJPJBBFN_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x182B0820)
#define ADIMJPJBBFN_CTOR_OFFSET UNITYSDK_OFFSET(0x182B0E10)
#define ADIMJPJBBFN_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0x182B0030)
#define ADIMJPJBBFN_EJCNNBNHLEA_OFFSET UNITYSDK_OFFSET(0x182B0600)
#define ADIMJPJBBFN_FPJBHJAKBJL_OFFSET UNITYSDK_OFFSET(0x182B01B0)
#define ADIMJPJBBFN_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x182AFD30)
#define ADIMJPJBBFN_JKDKFHAPNBJ_OFFSET UNITYSDK_OFFSET(0x182B0480)
#define ADIMJPJBBFN_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0x182B05B0)
#define ADIMJPJBBFN_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x182AFC50)
#define ADIMJPJBBFN_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0x182B07A0)
#define ADIMJPJBBFN_LDMPGIHOACD_OFFSET UNITYSDK_OFFSET(0x182B0330)
#define ADIMJPJBBFN_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x182AFDB0)
#define ADIMJPJBBFN_NNEKDONGAHH_OFFSET UNITYSDK_OFFSET(0x182B0910)
#define ADIMJPJBBFN_ODKDBHMADCD_OFFSET UNITYSDK_OFFSET(0x182B0520)
#define ADIMJPJBBFN_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x182AFE70)
#define ADIMJPJBBFN__ONBIND_OFFSET UNITYSDK_OFFSET(0x182AF890)
#define ADIMJPJBBFN__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x182AFB10)
#define ADIMJPJBBFN__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x182AFBC0)

inline static constexpr unsigned int ADIMJPJBBFN_TypeDefinitionIndex = 74119;

	class ADIMJPJBBFN : public ::CAOEEDDAPIK
	{
	public:
		::UnityEngine::UI::Text* NKNOHHKCBEG; // 0xE0
		::UnityEngine::GameObject* LBNBPMIFDHI; // 0xE8
		::UnityEngine::UI::Text* DFLHDOIPCKA; // 0xF0
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xF8
		::CAOEEDDAPIK_NNBFMHKHMKO* APPIHABBCGK; // 0x100
		::System::String* DIDHOFMKIFH; // 0x108
		::RPG::Client::PrefabLoadMeta* OGJJJANDJMP; // 0x110
		::System::Int32 CNICLEDFLFF; // 0x118
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint PHEJKKEMLBN; // 0x120
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
