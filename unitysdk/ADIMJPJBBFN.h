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

#define ADIMJPJBBFN_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB142270)
#define ADIMJPJBBFN_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB1424B0)
#define ADIMJPJBBFN_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xB1420C0)
#define ADIMJPJBBFN_CTOR_OFFSET UNITYSDK_OFFSET(0xB1426B0)
#define ADIMJPJBBFN_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB141400)
#define ADIMJPJBBFN_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0xB141920)
#define ADIMJPJBBFN_EJCNNBNHLEA_OFFSET UNITYSDK_OFFSET(0xB141EC0)
#define ADIMJPJBBFN_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB1414B0)
#define ADIMJPJBBFN_FPJBHJAKBJL_OFFSET UNITYSDK_OFFSET(0xB141A70)
#define ADIMJPJBBFN_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xB141620)
#define ADIMJPJBBFN_JKDKFHAPNBJ_OFFSET UNITYSDK_OFFSET(0xB141D40)
#define ADIMJPJBBFN_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0xB141E70)
#define ADIMJPJBBFN_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB141540)
#define ADIMJPJBBFN_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0xB142060)
#define ADIMJPJBBFN_LDMPGIHOACD_OFFSET UNITYSDK_OFFSET(0xB141BF0)
#define ADIMJPJBBFN_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB1416A0)
#define ADIMJPJBBFN_NNEKDONGAHH_OFFSET UNITYSDK_OFFSET(0xB1421B0)
#define ADIMJPJBBFN_ODKDBHMADCD_OFFSET UNITYSDK_OFFSET(0xB141DE0)
#define ADIMJPJBBFN_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xB141760)
#define ADIMJPJBBFN__ONBIND_OFFSET UNITYSDK_OFFSET(0xB141300)

inline static constexpr unsigned int ADIMJPJBBFN_TypeDefinitionIndex = 72085;

	class ADIMJPJBBFN : public ::CAOEEDDAPIK
	{
	public:
		::System::String* DIDHOFMKIFH; // 0xE0
		::CAOEEDDAPIK_NNBFMHKHMKO* APPIHABBCGK; // 0xE8
		::UnityEngine::GameObject* LBNBPMIFDHI; // 0xF0
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xF8
		::UnityEngine::UI::Text* NKNOHHKCBEG; // 0x100
		::UnityEngine::UI::Text* DFLHDOIPCKA; // 0x108
		::RPG::Client::PrefabLoadMeta* OGJJJANDJMP; // 0x110
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIMJPJBBFN_EKGCGIDIFJJ_OFFSET))(this);
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
