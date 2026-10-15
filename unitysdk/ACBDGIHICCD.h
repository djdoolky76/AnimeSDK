#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JPGCFEFDOAE.h"
class DJFOGDKHPKO;
class EKFMIDBJDIA;
class MJNGFEGNCOA;
class PMCOCHDJINJ;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACBDGIHICCD_BDGLOCMMGCO_OFFSET UNITYSDK_OFFSET(0xB110DC0)
#define ACBDGIHICCD_CCTOR_OFFSET UNITYSDK_OFFSET(0xB1113E0)
#define ACBDGIHICCD_CTOR_OFFSET UNITYSDK_OFFSET(0xB1112A0)
#define ACBDGIHICCD_FDKEDHHLJCE_OFFSET UNITYSDK_OFFSET(0xB1110B0)
#define ACBDGIHICCD_IBHFEFJHGEB_OFFSET UNITYSDK_OFFSET(0xB111170)
#define ACBDGIHICCD_ILJDKDEJAIH_1_OFFSET UNITYSDK_OFFSET(0xB110540)
#define ACBDGIHICCD_ILJDKDEJAIH_OFFSET UNITYSDK_OFFSET(0xB10FD00)
#define ACBDGIHICCD_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0xB110B40)
#define ACBDGIHICCD_LJFPGILKFAC_OFFSET UNITYSDK_OFFSET(0xB111230)
#define ACBDGIHICCD_LLGHHLILFCK_OFFSET UNITYSDK_OFFSET(0xB10FDB0)
#define ACBDGIHICCD_OALFLNFFEGK_OFFSET UNITYSDK_OFFSET(0xB110910)
#define ACBDGIHICCD_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xB10F5E0)
#define ACBDGIHICCD_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xB10F880)

inline static constexpr unsigned int ACBDGIHICCD_TypeDefinitionIndex = 54115;

	class ACBDGIHICCD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PMCOCHDJINJ*>* DKMLGBOFLJA; // 0x10
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18
		::System::Collections::Generic::Dictionary_2<::DJFOGDKHPKO*, ::PMCOCHDJINJ*>* JJBNCLGOOBF; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::PoolList_1<::PMCOCHDJINJ*>*>* LHCDALOOBBI; // 0x28
		static ::RPG::GameCore::RtLifeBindingConfig** StaticGet_NNAEBKENEJH()
		{
			return (::RPG::GameCore::RtLifeBindingConfig**)UnitySDK::FromName("", "ACBDGIHICCD")->GetStaticField(0x42EE0);
		}

		static ::RPG::GameCore::RtLifeBindingConfig** StaticGet_OIMPANALHIP()
		{
			return (::RPG::GameCore::RtLifeBindingConfig**)UnitySDK::FromName("", "ACBDGIHICCD")->GetStaticField(0x42EE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBDGIHICCD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACBDGIHICCD_CCTOR_OFFSET))();
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + ACBDGIHICCD_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBDGIHICCD_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Boolean ILJDKDEJAIH(::RPG::GameCore::RtLifeBindingConfig* a1, ::RPG::GameCore::TaskContext* a2, ::DJFOGDKHPKO* a3, ::PMCOCHDJINJ* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtLifeBindingConfig*, ::RPG::GameCore::TaskContext*, ::DJFOGDKHPKO*, ::PMCOCHDJINJ*))((::PBYTE)hIl2Cpp + ACBDGIHICCD_ILJDKDEJAIH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean ILJDKDEJAIH_1(::JPGCFEFDOAE a1, ::DJFOGDKHPKO* a2, ::PMCOCHDJINJ* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPGCFEFDOAE, ::DJFOGDKHPKO*, ::PMCOCHDJINJ*))((::PBYTE)hIl2Cpp + ACBDGIHICCD_ILJDKDEJAIH_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OALFLNFFEGK(::DJFOGDKHPKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJFOGDKHPKO*))((::PBYTE)hIl2Cpp + ACBDGIHICCD_OALFLNFFEGK_OFFSET))(this, a1);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + ACBDGIHICCD_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::System::Boolean LLGHHLILFCK(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtLifeBindingConfig* a2, ::JPGCFEFDOAE a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtLifeBindingConfig*, ::JPGCFEFDOAE))((::PBYTE)hIl2Cpp + ACBDGIHICCD_LLGHHLILFCK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BDGLOCMMGCO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACBDGIHICCD_BDGLOCMMGCO_OFFSET))(this, a1);
		}

		::System::Void FDKEDHHLJCE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + ACBDGIHICCD_FDKEDHHLJCE_OFFSET))(this, a1);
		}

		::System::Void IBHFEFJHGEB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + ACBDGIHICCD_IBHFEFJHGEB_OFFSET))(this, a1);
		}

		::System::Void LJFPGILKFAC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + ACBDGIHICCD_LJFPGILKFAC_OFFSET))(this, a1, a2, a3);
		}

	};
