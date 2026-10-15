#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAOEEDDAPIK.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightBattleEventHintType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CAOEEDDAPIK_NNBFMHKHMKO;
class FDIJNCADAHJ;
class GAHPNAEGACM;
class HMPAHKNNPCF;
class KNHJKDBPNOI;
class MDFIHKILAPL;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIParticleClippable; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityActionDelayChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define IBENMKNIKHP_APCNJLOMAEN_OFFSET UNITYSDK_OFFSET(0x15E231A0)
#define IBENMKNIKHP_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15E238E0)
#define IBENMKNIKHP_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15E23BA0)
#define IBENMKNIKHP_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x15E230B0)
#define IBENMKNIKHP_CAPBECFPJJE_OFFSET UNITYSDK_OFFSET(0x15E22BC0)
#define IBENMKNIKHP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E23E20)
#define IBENMKNIKHP_DCPHANHPMLN_OFFSET UNITYSDK_OFFSET(0x15E23820)
#define IBENMKNIKHP_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15E22190)
#define IBENMKNIKHP_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0x15E22730)
#define IBENMKNIKHP_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15E22240)
#define IBENMKNIKHP_FPJBHJAKBJL_OFFSET UNITYSDK_OFFSET(0x15E22860)
#define IBENMKNIKHP_HHKPBLKKFCE_OFFSET UNITYSDK_OFFSET(0x15E23730)
#define IBENMKNIKHP_IOAGDLKFHED_OFFSET UNITYSDK_OFFSET(0x15E23550)
#define IBENMKNIKHP_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x15E22430)
#define IBENMKNIKHP_JKDKFHAPNBJ_OFFSET UNITYSDK_OFFSET(0x15E22E80)
#define IBENMKNIKHP_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0x15E23000)
#define IBENMKNIKHP_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x15E22340)
#define IBENMKNIKHP_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0x15E23050)
#define IBENMKNIKHP_KPIJANAGNLM_OFFSET UNITYSDK_OFFSET(0x15E22DC0)
#define IBENMKNIKHP_LHGNLDLCFPO_OFFSET UNITYSDK_OFFSET(0x15E22A90)
#define IBENMKNIKHP_NKLKCKEDBNF_OFFSET UNITYSDK_OFFSET(0x15E22D70)
#define IBENMKNIKHP_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x15E224B0)
#define IBENMKNIKHP_NNEKDONGAHH_OFFSET UNITYSDK_OFFSET(0x15E23670)
#define IBENMKNIKHP_ODKDBHMADCD_OFFSET UNITYSDK_OFFSET(0x15E22F30)
#define IBENMKNIKHP_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x15E22570)
#define IBENMKNIKHP__ONBIND_OFFSET UNITYSDK_OFFSET(0x15E21F50)

inline static constexpr unsigned int IBENMKNIKHP_TypeDefinitionIndex = 72243;

	class IBENMKNIKHP : public ::CAOEEDDAPIK
	{
	public:
		::RPG::Client::PrefabLoadMeta* GPIHCHJADGI; // 0xE0
		::System::String* DIDHOFMKIFH; // 0xE8
		::UnityEngine::Animation* CHPLOGCECBP; // 0xF0
		::UnityEngine::Transform* COGOPBJHLME; // 0xF8
		::UnityEngine::UI::Text* BLFFIGLEJOD; // 0x100
		::RPG::Client::UIParticleClippable* NMJBEDJGAOH; // 0x108
		::UnityEngine::Transform* PEMIMCDDCNP; // 0x110
		::UnityEngine::Animation* MGCCGHLDMML; // 0x118
		::UnityEngine::UI::Text* KJFOPNGELIG; // 0x120
		::CAOEEDDAPIK_NNBFMHKHMKO* APPIHABBCGK; // 0x128
		::UnityEngine::UI::Text* JBLFGKJBLFI; // 0x130
		::FDIJNCADAHJ* INJCPPNAPGI; // 0x138
		::UnityEngine::UI::Text* NEOPBPCHOBH; // 0x140
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x148
		::System::Collections::Generic::Queue_1<::HMPAHKNNPCF*>* AJFEKCJKNEA; // 0x150
		::RPG::GameCore::FixPoint PHEJKKEMLBN; // 0x158
		::System::Int32 CNICLEDFLFF; // 0x160
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* JLGFFHBGCLL; // 0x0
		// static const ::System::String* LADCKPBPCCL; // 0x0
		// static const ::System::String* LPHDCKLJOHB; // 0x0
		// static const ::System::String* FMNMOLEFGDL; // 0x0
		// static const ::System::String* DPCBKFGPOPA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBENMKNIKHP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBENMKNIKHP__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IBENMKNIKHP_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBENMKNIKHP_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBENMKNIKHP_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IBENMKNIKHP_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + IBENMKNIKHP_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void FPJBHJAKBJL(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + IBENMKNIKHP_FPJBHJAKBJL_OFFSET))(this, a1);
		}

		::System::Void LHGNLDLCFPO(::MDFIHKILAPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDFIHKILAPL*))((::PBYTE)hIl2Cpp + IBENMKNIKHP_LHGNLDLCFPO_OFFSET))(this, a1);
		}

		::System::Void NKLKCKEDBNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBENMKNIKHP_NKLKCKEDBNF_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBENMKNIKHP_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void DOEDECKEMEF(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + IBENMKNIKHP_DOEDECKEMEF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IBENMKNIKHP_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void JKDKFHAPNBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBENMKNIKHP_JKDKFHAPNBJ_OFFSET))(this);
		}

		::System::Void ODKDBHMADCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBENMKNIKHP_ODKDBHMADCD_OFFSET))(this);
		}

		::System::Void KPIJANAGNLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBENMKNIKHP_KPIJANAGNLM_OFFSET))(this);
		}

		::System::Void CAPBECFPJJE(::MDFIHKILAPL* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MDFIHKILAPL*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IBENMKNIKHP_CAPBECFPJJE_OFFSET))(this, a1, a2);
		}

		::System::Void JPIABGPFEGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBENMKNIKHP_JPIABGPFEGD_OFFSET))(this);
		}

		::System::Void KBGNFAKDHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBENMKNIKHP_KBGNFAKDHEH_OFFSET))(this);
		}

		::KNHJKDBPNOI* APCNJLOMAEN(::RPG::GameCore::GridFightBattleEventHintType a1)
		{
			return ((::KNHJKDBPNOI*(*)(::PVOID, ::RPG::GameCore::GridFightBattleEventHintType))((::PBYTE)hIl2Cpp + IBENMKNIKHP_APCNJLOMAEN_OFFSET))(this, a1);
		}

		::System::Void IOAGDLKFHED(::KNHJKDBPNOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNHJKDBPNOI*))((::PBYTE)hIl2Cpp + IBENMKNIKHP_IOAGDLKFHED_OFFSET))(this, a1);
		}

		::System::Void NNEKDONGAHH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBENMKNIKHP_NNEKDONGAHH_OFFSET))(this, a1);
		}

		::System::Void HHKPBLKKFCE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBENMKNIKHP_HHKPBLKKFCE_OFFSET))(this, a1);
		}

		::System::Void DCPHANHPMLN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBENMKNIKHP_DCPHANHPMLN_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBENMKNIKHP_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBENMKNIKHP_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
