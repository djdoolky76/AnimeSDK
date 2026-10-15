#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityComponent.h"
#include "unitysdk/RPG/GameCore/RtModifierEvent.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BAJENICFMMH;
class CBPHAOJJAMH;
class CMJBLLIHDKP;
class FGMHNMKDFMA;
class HPICNGFLLCA;
class LBDONHEKHAP;
class LPNPMKNMMOK;
class MJNGFEGNCOA;
class MNBNFBAMKKI;
class MOMODPMFIKE;
class NGPLHLACLIN;
class OEOLGJFLJDO;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAbilityConfig; }
namespace RPG::GameCore { class RtModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BGMKDGACBNI_CCTOR_OFFSET UNITYSDK_OFFSET(0xB18F620)
#define BGMKDGACBNI_CTOR_OFFSET UNITYSDK_OFFSET(0xB18F590)
#define BGMKDGACBNI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB18DF90)
#define BGMKDGACBNI_EANLMIKHCKG_OFFSET UNITYSDK_OFFSET(0xB18E220)
#define BGMKDGACBNI_EKPFPGFHGAJ_OFFSET UNITYSDK_OFFSET(0xB18D6A0)
#define BGMKDGACBNI_GET_FLAGREF_OFFSET UNITYSDK_OFFSET(0xB18F570)
#define BGMKDGACBNI_GET_PROPERTYREF_OFFSET UNITYSDK_OFFSET(0xB18F550)
#define BGMKDGACBNI_IIMPFECEPII_OFFSET UNITYSDK_OFFSET(0xB18D9F0)
#define BGMKDGACBNI_IPAIHFHIAPC_OFFSET UNITYSDK_OFFSET(0xB18F380)
#define BGMKDGACBNI_KBLJAHKCNDN_OFFSET UNITYSDK_OFFSET(0xB18E5F0)
#define BGMKDGACBNI_KBOKIDIBEHG_OFFSET UNITYSDK_OFFSET(0xB18F1E0)
#define BGMKDGACBNI_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0xB18E140)
#define BGMKDGACBNI_LOKFOEFCAND_OFFSET UNITYSDK_OFFSET(0xB18F500)
#define BGMKDGACBNI_MIMJOINHIHI_1_OFFSET UNITYSDK_OFFSET(0xB18E340)
#define BGMKDGACBNI_MIMJOINHIHI_OFFSET UNITYSDK_OFFSET(0xB18E280)
#define BGMKDGACBNI_MNGIEGBICGO_OFFSET UNITYSDK_OFFSET(0xB18D380)
#define BGMKDGACBNI_NPGPEJALKLL_OFFSET UNITYSDK_OFFSET(0xB18DD00)
#define BGMKDGACBNI_OEALEKAMLCO_OFFSET UNITYSDK_OFFSET(0xB18D480)
#define BGMKDGACBNI_ONHAGIFFKDB_OFFSET UNITYSDK_OFFSET(0xB18D530)
#define BGMKDGACBNI_PHNCOJMKAEM_OFFSET UNITYSDK_OFFSET(0xB18E880)
#define BGMKDGACBNI_PIDEJMHLBJG_OFFSET UNITYSDK_OFFSET(0xB18F030)
#define BGMKDGACBNI_SET_FLAGREF_OFFSET UNITYSDK_OFFSET(0xB18F580)
#define BGMKDGACBNI_SET_PROPERTYREF_OFFSET UNITYSDK_OFFSET(0xB18F560)
#define BGMKDGACBNI_TICK_OFFSET UNITYSDK_OFFSET(0xB18E0E0)
#define BGMKDGACBNI__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB18DDF0)

	class BGMKDGACBNI : public ::RPG::GameCore::AbilityComponent
	{
	public:
		::MOMODPMFIKE* IHAFOIJJLHE; // 0xB0
		::Il2CppArray<::LBDONHEKHAP*>* MJJLNKIGIDP; // 0xB8
		::System::Collections::Generic::List_1<::NGPLHLACLIN*>* PHBOMHANOOM; // 0xC0
		::CBPHAOJJAMH* _FlagRef_k__BackingField; // 0xC8
		::CMJBLLIHDKP* _PropertyRef_k__BackingField; // 0xD0
		static ::Il2CppArray<::MNBNFBAMKKI*>** StaticGet_ADHKGAHAJEG()
		{
			return (::Il2CppArray<::MNBNFBAMKKI*>**)UnitySDK::FromName("", "BGMKDGACBNI")->GetStaticField(0x6EA40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMKDGACBNI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGMKDGACBNI_CCTOR_OFFSET))();
		}

		::System::Void MNGIEGBICGO(::NGPLHLACLIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGPLHLACLIN*))((::PBYTE)hIl2Cpp + BGMKDGACBNI_MNGIEGBICGO_OFFSET))(this, a1);
		}

		::System::Void OEALEKAMLCO(::NGPLHLACLIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGPLHLACLIN*))((::PBYTE)hIl2Cpp + BGMKDGACBNI_OEALEKAMLCO_OFFSET))(this, a1);
		}

		::System::Void ONHAGIFFKDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMKDGACBNI_ONHAGIFFKDB_OFFSET))(this);
		}

		::System::Void EKPFPGFHGAJ(::RPG::GameCore::RtModifierEvent a1, ::BAJENICFMMH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtModifierEvent, ::BAJENICFMMH*))((::PBYTE)hIl2Cpp + BGMKDGACBNI_EKPFPGFHGAJ_OFFSET))(this, a1, a2);
		}

		::System::Void IIMPFECEPII(::RPG::GameCore::RtModifierEvent a1, ::BAJENICFMMH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtModifierEvent, ::BAJENICFMMH*))((::PBYTE)hIl2Cpp + BGMKDGACBNI_IIMPFECEPII_OFFSET))(this, a1, a2);
		}

		::System::Void NPGPEJALKLL(::RPG::GameCore::RtModifierEvent a1, ::LPNPMKNMMOK* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtModifierEvent, ::LPNPMKNMMOK*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BGMKDGACBNI_NPGPEJALKLL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMKDGACBNI__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMKDGACBNI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGMKDGACBNI_TICK_OFFSET))(this, a1);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + BGMKDGACBNI_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::FGMHNMKDFMA* MIMJOINHIHI(::System::String* a1, ::FGMHNMKDFMA* a2, ::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* a3)
		{
			return ((::FGMHNMKDFMA*(*)(::PVOID, ::System::String*, ::FGMHNMKDFMA*, ::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*))((::PBYTE)hIl2Cpp + BGMKDGACBNI_MIMJOINHIHI_OFFSET))(this, a1, a2, a3);
		}

		::FGMHNMKDFMA* MIMJOINHIHI_1(::RPG::GameCore::RtAbilityConfig* a1, ::HPICNGFLLCA* a2, ::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* a3)
		{
			return ((::FGMHNMKDFMA*(*)(::PVOID, ::RPG::GameCore::RtAbilityConfig*, ::HPICNGFLLCA*, ::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*))((::PBYTE)hIl2Cpp + BGMKDGACBNI_MIMJOINHIHI_1_OFFSET))(this, a1, a2, a3);
		}

		::FGMHNMKDFMA* KBLJAHKCNDN(::System::String* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::FGMHNMKDFMA*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BGMKDGACBNI_KBLJAHKCNDN_OFFSET))(this, a1, a2);
		}

		::MNBNFBAMKKI* PHNCOJMKAEM(::System::String* a1, ::RPG::GameCore::RtModifierConfig* a2, ::FGMHNMKDFMA* a3, ::OEOLGJFLJDO* a4)
		{
			return ((::MNBNFBAMKKI*(*)(::PVOID, ::System::String*, ::RPG::GameCore::RtModifierConfig*, ::FGMHNMKDFMA*, ::OEOLGJFLJDO*))((::PBYTE)hIl2Cpp + BGMKDGACBNI_PHNCOJMKAEM_OFFSET))(this, a1, a2, a3, a4);
		}

		::MNBNFBAMKKI* PIDEJMHLBJG(::MNBNFBAMKKI* a1)
		{
			return ((::MNBNFBAMKKI*(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + BGMKDGACBNI_PIDEJMHLBJG_OFFSET))(this, a1);
		}

		::System::Void KBOKIDIBEHG(::MNBNFBAMKKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + BGMKDGACBNI_KBOKIDIBEHG_OFFSET))(this, a1);
		}

		::System::Boolean IPAIHFHIAPC(::RPG::GameCore::RtModifierEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtModifierEvent))((::PBYTE)hIl2Cpp + BGMKDGACBNI_IPAIHFHIAPC_OFFSET))(this, a1);
		}

		::System::Void LOKFOEFCAND(::MOMODPMFIKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOMODPMFIKE*))((::PBYTE)hIl2Cpp + BGMKDGACBNI_LOKFOEFCAND_OFFSET))(this, a1);
		}

		::CMJBLLIHDKP* get_PropertyRef()
		{
			return ((::CMJBLLIHDKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMKDGACBNI_GET_PROPERTYREF_OFFSET))(this);
		}

		::System::Void set_PropertyRef(::CMJBLLIHDKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMJBLLIHDKP*))((::PBYTE)hIl2Cpp + BGMKDGACBNI_SET_PROPERTYREF_OFFSET))(this, a1);
		}

		::CBPHAOJJAMH* get_FlagRef()
		{
			return ((::CBPHAOJJAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMKDGACBNI_GET_FLAGREF_OFFSET))(this);
		}

		::System::Void set_FlagRef(::CBPHAOJJAMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBPHAOJJAMH*))((::PBYTE)hIl2Cpp + BGMKDGACBNI_SET_FLAGREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint EANLMIKHCKG()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMKDGACBNI_EANLMIKHCKG_OFFSET))(this);
		}

	};
