#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/IronTombProgressMode.h"
#include "unitysdk/System/Nullable_1.h"
class DEJNIIFFIHG;
class EIDIGCLKLOA;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }

#define LFLLOBENAFB_AAOEGJGOONB_OFFSET UNITYSDK_OFFSET(0x18C631A0)
#define LFLLOBENAFB_ABFCFHOLOFL_OFFSET UNITYSDK_OFFSET(0x18C62A60)
#define LFLLOBENAFB_ACLNBFBCMAL_OFFSET UNITYSDK_OFFSET(0x18C63210)
#define LFLLOBENAFB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18C63350)
#define LFLLOBENAFB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18C63440)
#define LFLLOBENAFB_CTOR_OFFSET UNITYSDK_OFFSET(0x18C63510)
#define LFLLOBENAFB_DJNDNJFJGPH_OFFSET UNITYSDK_OFFSET(0x18C62A10)
#define LFLLOBENAFB_EEKGIDCHGLG_OFFSET UNITYSDK_OFFSET(0x18C62BD0)
#define LFLLOBENAFB_EJALNAOFCCP_OFFSET UNITYSDK_OFFSET(0x18C62E60)
#define LFLLOBENAFB_EJDAKAECODE_OFFSET UNITYSDK_OFFSET(0x18C626B0)
#define LFLLOBENAFB_EPGICMCDHDN_OFFSET UNITYSDK_OFFSET(0x18C62DC0)
#define LFLLOBENAFB_FGOEGLEDNCJ_OFFSET UNITYSDK_OFFSET(0x18C62D70)
#define LFLLOBENAFB_GCGPENNMOAC_OFFSET UNITYSDK_OFFSET(0x18C62850)
#define LFLLOBENAFB_MABCBBDHCOJ_OFFSET UNITYSDK_OFFSET(0x18C62F50)
#define LFLLOBENAFB_MINAKMPOHPH_OFFSET UNITYSDK_OFFSET(0x18C632C0)
#define LFLLOBENAFB_MMOPIEHDAPA_OFFSET UNITYSDK_OFFSET(0x18C62790)
#define LFLLOBENAFB_NHMDDKBDFPC_OFFSET UNITYSDK_OFFSET(0x18C62CC0)
#define LFLLOBENAFB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x18C62660)
#define LFLLOBENAFB_OPKADIJMCAC_OFFSET UNITYSDK_OFFSET(0x18C630D0)
#define LFLLOBENAFB__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x18C62480)
#define LFLLOBENAFB__ONBIND_OFFSET UNITYSDK_OFFSET(0x18C62210)

inline static constexpr unsigned int LFLLOBENAFB_TypeDefinitionIndex = 73691;

	class LFLLOBENAFB : public ::FMPCODLIOLG
	{
	public:
		::Il2CppArray<::DEJNIIFFIHG*>* FIEGDNDGGNL; // 0x60
		::DEJNIIFFIHG* ELFBEGADFDO; // 0x68
		::EIDIGCLKLOA* IGHAHBNLIJA; // 0x70
		::UnityEngine::Animator* APPGGMLEPLN; // 0x78
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IronTombProgressMode, ::System::Int32>* CFAMCLGEAAF; // 0x80
		::DEJNIIFFIHG* BBFJKCEJABC; // 0x88
		::DEJNIIFFIHG* GJGOHOOINBM; // 0x90
		::System::Int32 LELHMHFLNBI; // 0x98
		::System::Nullable_1<::System::Int32> LKBKDNAMNEG; // 0x9C
		::System::Int32 LJOELLCEFCD; // 0xA4
		::System::Int32 BKMDHMHDGDJ; // 0xA8
		::System::Int32 BEIKFKHMGHM; // 0xAC
		::System::Int32 GHFPLMHLLPP; // 0xB0
		::System::Int32 GKPPEGGCKFD; // 0xB4
		::System::Int32 DHMALCNBAKD; // 0xB8
		::System::Int32 EGPCCPHHKKC; // 0xBC
		::System::Int32 BPKOFLCLLCP; // 0xC0
		::System::Int32 GFLKGOACMEP; // 0xC4
		::System::Int32 KGALJIBJIIG; // 0xC8
		::System::Int32 FDEKLKKJJIC; // 0xCC
		// static const ::System::Object HPMEOJONIGB; // 0x0
		// static const ::System::Object FNBEFJCNCJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLLOBENAFB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLLOBENAFB__ONBIND_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLLOBENAFB__INITVARONCE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::EIDIGCLKLOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIDIGCLKLOA*))((::PBYTE)hIl2Cpp + LFLLOBENAFB_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void EJDAKAECODE(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + LFLLOBENAFB_EJDAKAECODE_OFFSET))(this, a1, a2);
		}

		::System::Void MMOPIEHDAPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLLOBENAFB_MMOPIEHDAPA_OFFSET))(this);
		}

		::System::Void EEKGIDCHGLG(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + LFLLOBENAFB_EEKGIDCHGLG_OFFSET))(this, a1, a2);
		}

		::System::Void GCGPENNMOAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLLOBENAFB_GCGPENNMOAC_OFFSET))(this);
		}

		::System::Void DJNDNJFJGPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLLOBENAFB_DJNDNJFJGPH_OFFSET))(this);
		}

		::System::Void EPGICMCDHDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLLOBENAFB_EPGICMCDHDN_OFFSET))(this);
		}

		::System::Int32 MABCBBDHCOJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLLOBENAFB_MABCBBDHCOJ_OFFSET))(this);
		}

		::System::Void EJALNAOFCCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLLOBENAFB_EJALNAOFCCP_OFFSET))(this);
		}

		::System::Int32 AAOEGJGOONB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLLOBENAFB_AAOEGJGOONB_OFFSET))(this);
		}

		::System::Void OPKADIJMCAC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LFLLOBENAFB_OPKADIJMCAC_OFFSET))(this, a1);
		}

		::System::Void ABFCFHOLOFL(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + LFLLOBENAFB_ABFCFHOLOFL_OFFSET))(this, a1);
		}

		::DEJNIIFFIHG* NHMDDKBDFPC()
		{
			return ((::DEJNIIFFIHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLLOBENAFB_NHMDDKBDFPC_OFFSET))(this);
		}

		::System::Void ACLNBFBCMAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLLOBENAFB_ACLNBFBCMAL_OFFSET))(this);
		}

		::RPG::GameCore::IronTombProgressMode FGOEGLEDNCJ()
		{
			return ((::RPG::GameCore::IronTombProgressMode(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLLOBENAFB_FGOEGLEDNCJ_OFFSET))(this);
		}

		::System::Void MINAKMPOHPH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFLLOBENAFB_MINAKMPOHPH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLLOBENAFB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLLOBENAFB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
