#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIHCINGKNAC.h"
#include "unitysdk/RPG/GameCore/BaseModifierInstance.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
#include "unitysdk/RPG/GameCore/RtModifierEvent.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"
class BGMKDGACBNI;
class EBBBJDPGDFG;
class HPICNGFLLCA;
class KDCNOMHGMNO;
class LEOLBNBFGEL;
class LPNPMKNMMOK;
class MNBNFBAMKKI;
class OEOLGJFLJDO;
namespace RPG::GameCore { class GameComponentBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtModifierConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MNBNFBAMKKI_AKOGLGKMAPM_OFFSET UNITYSDK_OFFSET(0xB9E53D0)
#define MNBNFBAMKKI_BNDCOAPMIEB_OFFSET UNITYSDK_OFFSET(0xB9E6820)
#define MNBNFBAMKKI_BOIKMJMJDGH_OFFSET UNITYSDK_OFFSET(0xB9E74E0)
#define MNBNFBAMKKI_CLOHANLPLHE_OFFSET UNITYSDK_OFFSET(0xB9E6BD0)
#define MNBNFBAMKKI_CTOR_OFFSET UNITYSDK_OFFSET(0xB9E4D80)
#define MNBNFBAMKKI_DBMBPICJEOA_OFFSET UNITYSDK_OFFSET(0xB9E1920)
#define MNBNFBAMKKI_DESTROY_OFFSET UNITYSDK_OFFSET(0xB9E12D0)
#define MNBNFBAMKKI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9E5370)
#define MNBNFBAMKKI_EGKLFHBCGCB_OFFSET UNITYSDK_OFFSET(0xB9E7940)
#define MNBNFBAMKKI_EMNGCKBGILG_OFFSET UNITYSDK_OFFSET(0xB9E7950)
#define MNBNFBAMKKI_FIIIDGBIHNB_OFFSET UNITYSDK_OFFSET(0xB9E79B0)
#define MNBNFBAMKKI_GEHGFKCEKII_OFFSET UNITYSDK_OFFSET(0xB9E5AD0)
#define MNBNFBAMKKI_GETOWNERABILITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB9E18D0)
#define MNBNFBAMKKI_GKOKGHOCPOA_OFFSET UNITYSDK_OFFSET(0xB9E6E00)
#define MNBNFBAMKKI_IFPPFOCOLOD_OFFSET UNITYSDK_OFFSET(0xB9E68A0)
#define MNBNFBAMKKI_INNMJMGACIM_OFFSET UNITYSDK_OFFSET(0xB9E6D30)
#define MNBNFBAMKKI_JCEGOOBECAF_OFFSET UNITYSDK_OFFSET(0xB9E1980)
#define MNBNFBAMKKI_JKOEJLCACCN_OFFSET UNITYSDK_OFFSET(0xB9E6EE0)
#define MNBNFBAMKKI_LJENAAIHPHH_OFFSET UNITYSDK_OFFSET(0xB9E79D0)
#define MNBNFBAMKKI_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0xB9E78D0)
#define MNBNFBAMKKI_MNGIEGBICGO_OFFSET UNITYSDK_OFFSET(0xB9E4760)
#define MNBNFBAMKKI_NEEMMGMAJKL_OFFSET UNITYSDK_OFFSET(0xB9E5130)
#define MNBNFBAMKKI_NNFNHKMOPOA_OFFSET UNITYSDK_OFFSET(0xB9E4BA0)
#define MNBNFBAMKKI_ODCGOFNBLDI_OFFSET UNITYSDK_OFFSET(0xB9E52F0)
#define MNBNFBAMKKI_OEALEKAMLCO_OFFSET UNITYSDK_OFFSET(0xB9E4860)
#define MNBNFBAMKKI_OHBBIFDAMMG_OFFSET UNITYSDK_OFFSET(0xB9E79C0)
#define MNBNFBAMKKI_ONACTIVATE_OFFSET UNITYSDK_OFFSET(0xB9E54B0)
#define MNBNFBAMKKI_ONADDED_OFFSET UNITYSDK_OFFSET(0xB9E61E0)
#define MNBNFBAMKKI_ONHAGIFFKDB_OFFSET UNITYSDK_OFFSET(0xB9E4910)
#define MNBNFBAMKKI_ONMODIFIERCASTERCHANGED_OFFSET UNITYSDK_OFFSET(0xB9E6220)
#define MNBNFBAMKKI_ONREPLACE_OFFSET UNITYSDK_OFFSET(0xB9E65A0)
#define MNBNFBAMKKI_ONSTACK_OFFSET UNITYSDK_OFFSET(0xB9E5BC0)
#define MNBNFBAMKKI_TICK_OFFSET UNITYSDK_OFFSET(0xB9E6F40)
#define MNBNFBAMKKI_UNSTACK_OFFSET UNITYSDK_OFFSET(0xB9E6550)
#define MNBNFBAMKKI__SEQUENCEENDANDFLUSH_OFFSET UNITYSDK_OFFSET(0xB9E7420)
#define MNBNFBAMKKI__TRYATTACHMUTEXEFFECTS_OFFSET UNITYSDK_OFFSET(0xB9E7490)

inline static constexpr unsigned int MNBNFBAMKKI_TypeDefinitionIndex = 53780;

	class MNBNFBAMKKI : public ::RPG::GameCore::BaseModifierInstance
	{
	public:
		::KDCNOMHGMNO* PMEOEIDANPD; // 0xA0
		::EBBBJDPGDFG* EEGKNKIBLHB; // 0xA8
		::BGMKDGACBNI* LIDGONNJNBJ; // 0xB0
		::Il2CppArray<::System::Object*>* KCJPFOEKIEL; // 0xB8
		::System::Collections::Generic::List_1<::LEOLBNBFGEL*>* PHBOMHANOOM; // 0xC0
		::RPG::GameCore::RtModifierConfig* OFKGLJOAMLD; // 0xC8
		::System::Collections::Generic::List_1<::MNBNFBAMKKI*>* EGNGNPEKGNG; // 0xD0
		::System::Action* BNEOOBEBNML; // 0xD8
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0xE0
		::System::Int32 PPNBGHOPMNB; // 0xE8
		::System::Nullable* KIDIAMDNOPA; // 0xEC
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint KHOIMMEBGII; // 0xF8
		::RPG::GameCore::FixPoint OLEIDKBKEOE; // 0x100
		::System::Int32 LPCHNBHHJCA; // 0x108
		::System::Int32 OAMFEDIDCOO; // 0x10C
		::RPG::GameCore::FixPoint OGMMDNAILIL; // 0x110
		::RPG::GameCore::FixPoint AHHIMAGIKAA; // 0x118
		::DIHCINGKNAC HMMLCEDLKDK; // 0x120
		::System::Boolean PLOKNGMEJEI; // 0x123
		::System::Int32 EHALBKDJHLI; // 0x124
		::System::Void _ctor(::System::String* a1, ::RPG::GameCore::RtModifierConfig* a2, ::BGMKDGACBNI* a3, ::HPICNGFLLCA* a4, ::OEOLGJFLJDO* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::RtModifierConfig*, ::BGMKDGACBNI*, ::HPICNGFLLCA*, ::OEOLGJFLJDO*))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MNGIEGBICGO(::LEOLBNBFGEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEOLBNBFGEL*))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_MNGIEGBICGO_OFFSET))(this, a1);
		}

		::System::Void OEALEKAMLCO(::LEOLBNBFGEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEOLBNBFGEL*))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_OEALEKAMLCO_OFFSET))(this, a1);
		}

		::System::Void ONHAGIFFKDB(::RPG::GameCore::RtModifierBehaviorLifeBinding a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtModifierBehaviorLifeBinding))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_ONHAGIFFKDB_OFFSET))(this, a1);
		}

		static ::MNBNFBAMKKI* NNFNHKMOPOA(::RPG::GameCore::TaskContext* a1, ::System::Boolean a2)
		{
			return ((::MNBNFBAMKKI*(*)(::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_NNFNHKMOPOA_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_ONACTIVATE_OFFSET))(this);
		}

		::System::Void OnAdded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_ONADDED_OFFSET))(this);
		}

		::System::Void OnModifierCasterChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_ONMODIFIERCASTERCHANGED_OFFSET))(this);
		}

		::System::Void JCEGOOBECAF(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_JCEGOOBECAF_OFFSET))(this, a1, a2);
		}

		::System::Void OnStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_ONSTACK_OFFSET))(this);
		}

		::System::Void UnStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_UNSTACK_OFFSET))(this);
		}

		::System::Void OnReplace(::HPICNGFLLCA* a1, ::OEOLGJFLJDO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HPICNGFLLCA*, ::OEOLGJFLJDO*))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_ONREPLACE_OFFSET))(this, a1, a2);
		}

		::System::Void BNDCOAPMIEB(::RPG::GameCore::ModifierDeathSource a1, ::DIHCINGKNAC a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource, ::DIHCINGKNAC))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_BNDCOAPMIEB_OFFSET))(this, a1, a2);
		}

		::System::Void Destroy(::RPG::GameCore::ModifierDeathSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_DESTROY_OFFSET))(this, a1);
		}

		::System::Boolean IFPPFOCOLOD(::RPG::GameCore::RtModifierEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtModifierEvent))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_IFPPFOCOLOD_OFFSET))(this, a1);
		}

		::System::Void GEHGFKCEKII(::RPG::GameCore::RtModifierEvent a1, ::LPNPMKNMMOK* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtModifierEvent, ::LPNPMKNMMOK*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_GEHGFKCEKII_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CLOHANLPLHE(::MNBNFBAMKKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_CLOHANLPLHE_OFFSET))(this, a1);
		}

		::System::Void INNMJMGACIM(::MNBNFBAMKKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_INNMJMGACIM_OFFSET))(this, a1);
		}

		::System::Boolean GKOKGHOCPOA(::RPG::GameCore::RtBehaviorFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtBehaviorFlag))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_GKOKGHOCPOA_OFFSET))(this, a1);
		}

		::System::Boolean JKOEJLCACCN(::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_JKOEJLCACCN_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_TICK_OFFSET))(this, a1);
		}

		::System::Void NEEMMGMAJKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_NEEMMGMAJKL_OFFSET))(this);
		}

		::System::Void AKOGLGKMAPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_AKOGLGKMAPM_OFFSET))(this);
		}

		::System::Void _SequenceEndAndFlush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI__SEQUENCEENDANDFLUSH_OFFSET))(this);
		}

		::System::Void _TryAttachMutexEffects(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MNBNFBAMKKI__TRYATTACHMUTEXEFFECTS_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameComponentBase* GetOwnerAbilityComponent()
		{
			return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_GETOWNERABILITYCOMPONENT_OFFSET))(this);
		}

		::System::Boolean BOIKMJMJDGH(::RPG::GameCore::RtModifierPropertyType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtModifierPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_BOIKMJMJDGH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::RPG::GameCore::RtModifierPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtModifierPropertyType))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_MDGNJPIMCPH_OFFSET))(this, a1);
		}

		::System::Int32 EGKLFHBCGCB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_EGKLFHBCGCB_OFFSET))(this);
		}

		::System::Void ODCGOFNBLDI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_ODCGOFNBLDI_OFFSET))(this, a1);
		}

		::System::Int32 DBMBPICJEOA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_DBMBPICJEOA_OFFSET))(this);
		}

		::System::Boolean EMNGCKBGILG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_EMNGCKBGILG_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* FIIIDGBIHNB()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_FIIIDGBIHNB_OFFSET))(this);
		}

		::RPG::GameCore::RtModifierConfig* OHBBIFDAMMG()
		{
			return ((::RPG::GameCore::RtModifierConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_OHBBIFDAMMG_OFFSET))(this);
		}

		::KDCNOMHGMNO* LJENAAIHPHH()
		{
			return ((::KDCNOMHGMNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_LJENAAIHPHH_OFFSET))(this);
		}

	};
