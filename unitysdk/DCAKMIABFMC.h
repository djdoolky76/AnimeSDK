#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCILMJOBEAD.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/MJJIFGINJAJ.h"
#include "unitysdk/DCAKMIABFMC___c__DisplayClass4_0.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace RPG::Client::Treasury { class GridFightTreasuryBonusEffectData; }
namespace RPG::Client::Treasury { class GridFightTreasuryPendingAction; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DCAKMIABFMC_AIEPGEJINON_OFFSET UNITYSDK_OFFSET(0xEB97450)
#define DCAKMIABFMC_AMKIDINLCDN_OFFSET UNITYSDK_OFFSET(0xEB99450)
#define DCAKMIABFMC_CCTOR_OFFSET UNITYSDK_OFFSET(0xEB99710)
#define DCAKMIABFMC_CTOR_OFFSET UNITYSDK_OFFSET(0xEB99680)
#define DCAKMIABFMC_EBABBENLCPO_OFFSET UNITYSDK_OFFSET(0xEB990B0)
#define DCAKMIABFMC_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xEB971F0)
#define DCAKMIABFMC_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xEB972D0)
#define DCAKMIABFMC_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xEB97240)
#define DCAKMIABFMC_UPDATESTART_OFFSET UNITYSDK_OFFSET(0xEB98E60)
#define DCAKMIABFMC___FILLENTRYSTARTPOS_G__TAKE_4_0_OFFSET UNITYSDK_OFFSET(0xEB993A0)

inline static constexpr unsigned int DCAKMIABFMC_TypeDefinitionIndex = 76898;

	class DCAKMIABFMC : public ::BCILMJOBEAD
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* CMHOAFCMBND; // 0x18
		::RPG::Client::Treasury::GridFightTreasuryPendingAction* DJLPHDFJLEN; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* BEHHICMOFIE; // 0x28
		static ::Il2CppArray<::MJJIFGINJAJ>** StaticGet_IDGKIEHGFFC()
		{
			return (::Il2CppArray<::MJJIFGINJAJ>**)UnitySDK::FromName("", "DCAKMIABFMC")->GetStaticField(0x50140);
		}

		static ::Il2CppArray<::MJJIFGINJAJ>** StaticGet_CDJNAPGDIBP()
		{
			return (::Il2CppArray<::MJJIFGINJAJ>**)UnitySDK::FromName("", "DCAKMIABFMC")->GetStaticField(0x50148);
		}

		static ::Il2CppArray<::MJJIFGINJAJ>** StaticGet_PIAGPBGBJBA()
		{
			return (::Il2CppArray<::MJJIFGINJAJ>**)UnitySDK::FromName("", "DCAKMIABFMC")->GetStaticField(0x50150);
		}

		static ::Il2CppArray<::MJJIFGINJAJ>** StaticGet_PNKMPJODBLF()
		{
			return (::Il2CppArray<::MJJIFGINJAJ>**)UnitySDK::FromName("", "DCAKMIABFMC")->GetStaticField(0x50158);
		}

		static ::Il2CppArray<::MJJIFGINJAJ>** StaticGet_GEBJMGBKEEB()
		{
			return (::Il2CppArray<::MJJIFGINJAJ>**)UnitySDK::FromName("", "DCAKMIABFMC")->GetStaticField(0x50160);
		}

		static ::Il2CppArray<::MJJIFGINJAJ>** StaticGet_CICOFJBKBHC()
		{
			return (::Il2CppArray<::MJJIFGINJAJ>**)UnitySDK::FromName("", "DCAKMIABFMC")->GetStaticField(0x50168);
		}

		static ::Il2CppArray<::MJJIFGINJAJ>** StaticGet_HFEBHFHOCBL()
		{
			return (::Il2CppArray<::MJJIFGINJAJ>**)UnitySDK::FromName("", "DCAKMIABFMC")->GetStaticField(0x50170);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAKMIABFMC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCAKMIABFMC_CCTOR_OFFSET))();
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + DCAKMIABFMC_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DCAKMIABFMC_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + DCAKMIABFMC_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAKMIABFMC_UPDATESTART_OFFSET))(this);
		}

		::System::Void AIEPGEJINON(::RPG::Client::Treasury::GridFightTreasuryBonusEffectData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Treasury::GridFightTreasuryBonusEffectData*))((::PBYTE)hIl2Cpp + DCAKMIABFMC_AIEPGEJINON_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* EBABBENLCPO(::RPG::Client::Treasury::GridFightTreasuryPendingAction* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::RPG::Client::Treasury::GridFightTreasuryPendingAction*))((::PBYTE)hIl2Cpp + DCAKMIABFMC_EBABBENLCPO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 AMKIDINLCDN(::System::UInt32 a1, ::Il2CppArray<::MJJIFGINJAJ>* a2, ::System::UInt32 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::MJJIFGINJAJ>*, ::System::UInt32))((::PBYTE)hIl2Cpp + DCAKMIABFMC_AMKIDINLCDN_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 __FillEntryStartPos_g__Take_4_0(::System::UInt32 a1, ::Il2CppArray<::MJJIFGINJAJ>* a2, ::DCAKMIABFMC___c__DisplayClass4_0 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::MJJIFGINJAJ>*, ::DCAKMIABFMC___c__DisplayClass4_0))((::PBYTE)hIl2Cpp + DCAKMIABFMC___FILLENTRYSTARTPOS_G__TAKE_4_0_OFFSET))(this, a1, a2, a3);
		}

	};
