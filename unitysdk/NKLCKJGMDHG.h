#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/EntityRelationMemberType.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
class NKLCKJGMDHG_FBOLCCEGGEH;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NKLCKJGMDHG_AMILCDPMCHD_OFFSET UNITYSDK_OFFSET(0xBC3B3B0)
#define NKLCKJGMDHG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBC3B440)
#define NKLCKJGMDHG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBC3B5A0)
#define NKLCKJGMDHG_BHOKGPNBNOH_OFFSET UNITYSDK_OFFSET(0xBC3B020)
#define NKLCKJGMDHG_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xBC39F90)
#define NKLCKJGMDHG_CDPPNHNHJBK_1_OFFSET UNITYSDK_OFFSET(0xBC3AAD0)
#define NKLCKJGMDHG_CDPPNHNHJBK_OFFSET UNITYSDK_OFFSET(0xBC3AA00)
#define NKLCKJGMDHG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC3B6D0)
#define NKLCKJGMDHG_DBFECMCAIOK_OFFSET UNITYSDK_OFFSET(0xBC3B2F0)
#define NKLCKJGMDHG_FKMDEFDJPAI_OFFSET UNITYSDK_OFFSET(0xBC39F40)
#define NKLCKJGMDHG_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xBC3B1E0)
#define NKLCKJGMDHG_GOIIPJILGJD_OFFSET UNITYSDK_OFFSET(0xBC3A7E0)
#define NKLCKJGMDHG_IBJFMDNPIFF_OFFSET UNITYSDK_OFFSET(0xBC3A940)
#define NKLCKJGMDHG_KABMIIPEOBB_OFFSET UNITYSDK_OFFSET(0xBC3AFD0)
#define NKLCKJGMDHG_LCFNCHEHDNC_OFFSET UNITYSDK_OFFSET(0xBC3A650)
#define NKLCKJGMDHG_LLNMAFEKGAF_OFFSET UNITYSDK_OFFSET(0xBC3B1F0)
#define NKLCKJGMDHG_LMKHCNCKGEN_OFFSET UNITYSDK_OFFSET(0xBC39FF0)
#define NKLCKJGMDHG_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xBC39C60)
#define NKLCKJGMDHG_OPPBLMGBPIG_OFFSET UNITYSDK_OFFSET(0xBC3AA70)
#define NKLCKJGMDHG__ONBIND_OFFSET UNITYSDK_OFFSET(0xBC39EE0)

inline static constexpr unsigned int NKLCKJGMDHG_TypeDefinitionIndex = 71799;

	class NKLCKJGMDHG : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::PrefabLoadMeta* KEOBHBJACPK; // 0x60
		::System::Action* LKMLFIPPEML; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>* IODBHKHGDOK; // 0x70
		::NKLCKJGMDHG_FBOLCCEGGEH* CBDGOAHBMJB; // 0x78
		::NKLCKJGMDHG_FBOLCCEGGEH* DFIOOIGJDLK; // 0x80
		::NKLCKJGMDHG_FBOLCCEGGEH* PKPFAEKOOGD; // 0x88
		::NKLCKJGMDHG_FBOLCCEGGEH* LNKPAKPLOND; // 0x90
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* BMOPJIJANBD; // 0xA0
		::NKLCKJGMDHG_FBOLCCEGGEH* OLHKHEPBMOC; // 0xA8
		::NKLCKJGMDHG_FBOLCCEGGEH* HGNGADIBKOK; // 0xB0
		::NKLCKJGMDHG_FBOLCCEGGEH* JADJCMFNMDD; // 0xB8
		::System::Boolean EINNACFPAEN; // 0xC0
		::System::Byte _padding0[0x3];
		::System::Int32 _Priority_k__BackingField; // 0xC4
		// static const ::System::String* EEAKKPBAMHB; // 0x0
		// static const ::System::String* KCEMMBFKMBN; // 0x0
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_CTOR_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLCKJGMDHG__ONBIND_OFFSET))(this);
		}

		::System::Void FKMDEFDJPAI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_FKMDEFDJPAI_OFFSET))(this, a1);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::System::Void LCFNCHEHDNC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_LCFNCHEHDNC_OFFSET))(this, a1);
		}

		::System::Void LMKHCNCKGEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_LMKHCNCKGEN_OFFSET))(this);
		}

		::System::Void GOIIPJILGJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_GOIIPJILGJD_OFFSET))(this);
		}

		::System::Void CDPPNHNHJBK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_CDPPNHNHJBK_OFFSET))(this, a1);
		}

		::System::Void OPPBLMGBPIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_OPPBLMGBPIG_OFFSET))(this);
		}

		::System::Void CDPPNHNHJBK_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_CDPPNHNHJBK_1_OFFSET))(this);
		}

		::System::Void BHOKGPNBNOH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_BHOKGPNBNOH_OFFSET))(this, a1);
		}

		::NKLCKJGMDHG_FBOLCCEGGEH* IBJFMDNPIFF(::RPG::GameCore::EntityRelationType a1, ::RPG::GameCore::EntityRelationMemberType a2)
		{
			return ((::NKLCKJGMDHG_FBOLCCEGGEH*(*)(::PVOID, ::RPG::GameCore::EntityRelationType, ::RPG::GameCore::EntityRelationMemberType))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_IBJFMDNPIFF_OFFSET))(this, a1, a2);
		}

		::System::Boolean KABMIIPEOBB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_KABMIIPEOBB_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void LLNMAFEKGAF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_LLNMAFEKGAF_OFFSET))(this, a1);
		}

		::System::Void DBFECMCAIOK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_DBFECMCAIOK_OFFSET))(this, a1);
		}

		::System::Void AMILCDPMCHD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_AMILCDPMCHD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
