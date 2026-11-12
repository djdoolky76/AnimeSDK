#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDMOMOEDLLO.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/System/Nullable_1.h"
class FJNAOAEPNJF;
class FJNAOAEPNJF_JCKKNDFIFLM;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define FJNAOAEPNJF_AFIJBDMGDPE_OFFSET UNITYSDK_OFFSET(0x167469A0)
#define FJNAOAEPNJF_AGLCJMMDOEO_OFFSET UNITYSDK_OFFSET(0x16747050)
#define FJNAOAEPNJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x16747A90)
#define FJNAOAEPNJF_CTOR_OFFSET UNITYSDK_OFFSET(0x16745CA0)
#define FJNAOAEPNJF_GET_CANMAKESUBDIEFLAG_OFFSET UNITYSDK_OFFSET(0x16747A50)
#define FJNAOAEPNJF_GET_HPSHAREDRESULTCACHE_OFFSET UNITYSDK_OFFSET(0x16747A70)
#define FJNAOAEPNJF_GET_MAINAGENT_OFFSET UNITYSDK_OFFSET(0x167479D0)
#define FJNAOAEPNJF_GET_RESOLVESHIELD_OFFSET UNITYSDK_OFFSET(0x16747A10)
#define FJNAOAEPNJF_GET_RESOLVESUBLOCKHP_OFFSET UNITYSDK_OFFSET(0x16747A30)
#define FJNAOAEPNJF_GET_SUBTARGETLIST_OFFSET UNITYSDK_OFFSET(0x167479F0)
#define FJNAOAEPNJF_GGDNNDLNPOL_OFFSET UNITYSDK_OFFSET(0x167470A0)
#define FJNAOAEPNJF_GMNEPMJKOFL_OFFSET UNITYSDK_OFFSET(0x16745D40)
#define FJNAOAEPNJF_GODKFPCCKJA_OFFSET UNITYSDK_OFFSET(0x16746E30)
#define FJNAOAEPNJF_HDMIMKGGDIB_OFFSET UNITYSDK_OFFSET(0x16747140)
#define FJNAOAEPNJF_HEHGJKEBOJF_OFFSET UNITYSDK_OFFSET(0x16746800)
#define FJNAOAEPNJF_HMKAGOPBHMB_OFFSET UNITYSDK_OFFSET(0x167470F0)
#define FJNAOAEPNJF_KGBHJFAEHII_OFFSET UNITYSDK_OFFSET(0x16746180)
#define FJNAOAEPNJF_MMLMPFEAPMM_OFFSET UNITYSDK_OFFSET(0x16747310)
#define FJNAOAEPNJF_NJGOCAKHFDA_OFFSET UNITYSDK_OFFSET(0x167473C0)
#define FJNAOAEPNJF_OADCDMLGLJM_OFFSET UNITYSDK_OFFSET(0x16747450)
#define FJNAOAEPNJF_OEDFMMMPNHB_OFFSET UNITYSDK_OFFSET(0x16746860)
#define FJNAOAEPNJF_PBDJFGPJNCC_OFFSET UNITYSDK_OFFSET(0x16746100)
#define FJNAOAEPNJF_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x16746DC0)
#define FJNAOAEPNJF_SET_CANMAKESUBDIEFLAG_OFFSET UNITYSDK_OFFSET(0x16747A60)
#define FJNAOAEPNJF_SET_HPSHAREDRESULTCACHE_OFFSET UNITYSDK_OFFSET(0x16747A80)
#define FJNAOAEPNJF_SET_MAINAGENT_OFFSET UNITYSDK_OFFSET(0x167479E0)
#define FJNAOAEPNJF_SET_RESOLVESHIELD_OFFSET UNITYSDK_OFFSET(0x16747A20)
#define FJNAOAEPNJF_SET_RESOLVESUBLOCKHP_OFFSET UNITYSDK_OFFSET(0x16747A40)
#define FJNAOAEPNJF_SET_SUBTARGETLIST_OFFSET UNITYSDK_OFFSET(0x16747A00)

inline static constexpr unsigned int FJNAOAEPNJF_TypeDefinitionIndex = 58952;

	class FJNAOAEPNJF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::GDMOMOEDLLO>*>* _HpSharedResultCache_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _SubTargetList_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x20
		::FJNAOAEPNJF_JCKKNDFIFLM* _MainAgent_k__BackingField; // 0x28
		::System::Boolean _CanMakeSubDieFlag_k__BackingField; // 0x30
		::System::Boolean _ResolveSubLockHP_k__BackingField; // 0x31
		::System::Boolean _ResolveShield_k__BackingField; // 0x32
		static ::RPG::GameCore::FixPoint* StaticGet_KOFEOGOHBHI()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("", "FJNAOAEPNJF")->GetStaticField(0xE870);
		}

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJNAOAEPNJF_CCTOR_OFFSET))();
		}

		::System::Void GMNEPMJKOFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_GMNEPMJKOFL_OFFSET))(this);
		}

		::FJNAOAEPNJF* HEHGJKEBOJF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::FJNAOAEPNJF*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_HEHGJKEBOJF_OFFSET))(this, a1);
		}

		::FJNAOAEPNJF* OEDFMMMPNHB(::Il2CppArray<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::FJNAOAEPNJF*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_OEDFMMMPNHB_OFFSET))(this, a1);
		}

		::System::Void AFIJBDMGDPE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_AFIJBDMGDPE_OFFSET))(this, a1);
		}

		::FJNAOAEPNJF* GODKFPCCKJA()
		{
			return ((::FJNAOAEPNJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_GODKFPCCKJA_OFFSET))(this);
		}

		::FJNAOAEPNJF* AGLCJMMDOEO(::System::Boolean a1)
		{
			return ((::FJNAOAEPNJF*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_AGLCJMMDOEO_OFFSET))(this, a1);
		}

		::FJNAOAEPNJF* GGDNNDLNPOL(::System::Boolean a1)
		{
			return ((::FJNAOAEPNJF*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_GGDNNDLNPOL_OFFSET))(this, a1);
		}

		::FJNAOAEPNJF* HMKAGOPBHMB(::System::Boolean a1)
		{
			return ((::FJNAOAEPNJF*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_HMKAGOPBHMB_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void HDMIMKGGDIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_HDMIMKGGDIB_OFFSET))(this);
		}

		::System::Boolean MMLMPFEAPMM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_MMLMPFEAPMM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OADCDMLGLJM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_OADCDMLGLJM_OFFSET))(this, a1);
		}

		::System::Void KGBHJFAEHII(::CHMCAGBDPJH a1, ::RPG::GameCore::GameEntity* a2, ::System::Nullable_1<::RPG::GameCore::FixPoint> a3)
		{
			return ((::System::Void(*)(::PVOID, ::CHMCAGBDPJH, ::RPG::GameCore::GameEntity*, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_KGBHJFAEHII_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NJGOCAKHFDA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_NJGOCAKHFDA_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* PBDJFGPJNCC()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_PBDJFGPJNCC_OFFSET))(this);
		}

		::FJNAOAEPNJF_JCKKNDFIFLM* get_MainAgent()
		{
			return ((::FJNAOAEPNJF_JCKKNDFIFLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_GET_MAINAGENT_OFFSET))(this);
		}

		::System::Void set_MainAgent(::FJNAOAEPNJF_JCKKNDFIFLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJNAOAEPNJF_JCKKNDFIFLM*))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_SET_MAINAGENT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_SubTargetList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_GET_SUBTARGETLIST_OFFSET))(this);
		}

		::System::Void set_SubTargetList(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_SET_SUBTARGETLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_ResolveShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_GET_RESOLVESHIELD_OFFSET))(this);
		}

		::System::Void set_ResolveShield(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_SET_RESOLVESHIELD_OFFSET))(this, a1);
		}

		::System::Boolean get_ResolveSubLockHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_GET_RESOLVESUBLOCKHP_OFFSET))(this);
		}

		::System::Void set_ResolveSubLockHP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_SET_RESOLVESUBLOCKHP_OFFSET))(this, a1);
		}

		::System::Boolean get_CanMakeSubDieFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_GET_CANMAKESUBDIEFLAG_OFFSET))(this);
		}

		::System::Void set_CanMakeSubDieFlag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_SET_CANMAKESUBDIEFLAG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::GDMOMOEDLLO>*>* get_HpSharedResultCache()
		{
			return ((::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::GDMOMOEDLLO>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_GET_HPSHAREDRESULTCACHE_OFFSET))(this);
		}

		::System::Void set_HpSharedResultCache(::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::GDMOMOEDLLO>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::GDMOMOEDLLO>*>*))((::PBYTE)hIl2Cpp + FJNAOAEPNJF_SET_HPSHAREDRESULTCACHE_OFFSET))(this, a1);
		}

	};
