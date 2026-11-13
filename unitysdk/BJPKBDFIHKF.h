#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
#include "unitysdk/RPG/GameCore/GridFightForgeFuncType.h"
class AOFOEOIJEHF;
class CDEAABODKCP;
class GGAKNLJJNEI;
namespace RPG::Client { class GridFightEquipDressEvent; }
namespace RPG::Client { class GridFightEquipReturnPackEvent; }
namespace RPG::Client { class GridFightForgeAddCoinEvent; }
namespace RPG::Client { class GridFightForgeAddRoleEvent; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define BJPKBDFIHKF_BLKDPDJOEJH_OFFSET UNITYSDK_OFFSET(0x1A644850)
#define BJPKBDFIHKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A644F70)
#define BJPKBDFIHKF_FAMIICCLOBI_OFFSET UNITYSDK_OFFSET(0x1A644DD0)
#define BJPKBDFIHKF_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0x1A644E20)
#define BJPKBDFIHKF_GGKLAMLIDCP_OFFSET UNITYSDK_OFFSET(0x1A6412C0)
#define BJPKBDFIHKF_GGMHEOFIMCB_OFFSET UNITYSDK_OFFSET(0x1A644A20)
#define BJPKBDFIHKF_ISCONCERNEDWITH_1_OFFSET UNITYSDK_OFFSET(0x1A63FCE0)
#define BJPKBDFIHKF_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1A63FC20)
#define BJPKBDFIHKF_MIANKKPGFOJ_OFFSET UNITYSDK_OFFSET(0x1A63FD60)
#define BJPKBDFIHKF_NHIKBHPAPOM_OFFSET UNITYSDK_OFFSET(0x1A644BF0)
#define BJPKBDFIHKF_OFIKJNMCLOC_OFFSET UNITYSDK_OFFSET(0x1A63FE40)
#define BJPKBDFIHKF_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0x1A644D90)
#define BJPKBDFIHKF_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x1A640610)
#define BJPKBDFIHKF_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x1A642D60)
#define BJPKBDFIHKF_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x1A643080)
#define BJPKBDFIHKF_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1A63F520)
#define BJPKBDFIHKF_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x1A642EE0)
#define BJPKBDFIHKF_UPDATEEXPERTROLEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A643030)
#define BJPKBDFIHKF_UPDATEITEMREMOVE_OFFSET UNITYSDK_OFFSET(0x1A6406E0)
#define BJPKBDFIHKF_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0x1A63FDB0)
#define BJPKBDFIHKF_UPDATENPC_OFFSET UNITYSDK_OFFSET(0x1A641CE0)
#define BJPKBDFIHKF_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0x1A641980)
#define BJPKBDFIHKF_UPDATEROLE_OFFSET UNITYSDK_OFFSET(0x1A6407A0)
#define BJPKBDFIHKF_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x1A63F4E0)

inline static constexpr unsigned int BJPKBDFIHKF_TypeDefinitionIndex = 66535;

	class BJPKBDFIHKF : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Collections::Generic::Queue_1<::RPG::Client::GridFightForgeAddRoleEvent*>* EGNHJDDFGPK; // 0x10
		::System::Collections::Generic::Queue_1<::RPG::Client::GridFightEquipDressEvent*>* BHKBMJJMKAE; // 0x18
		::System::Collections::Generic::Queue_1<::RPG::Client::GridFightEquipReturnPackEvent*>* CMMDFMHEDII; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* AEKKIJNOPJC; // 0x28
		::System::Collections::Generic::Queue_1<::RPG::Client::GridFightForgeAddCoinEvent*>* GLPNHGLGGEN; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* JJPGIMPFLFP; // 0x38
		::System::UInt32 NMJKJLDANOC; // 0x40
		::System::Boolean EDIBEIOPBHN; // 0x44
		::System::Boolean PHFGHFNEJIB; // 0x45
		::System::Boolean CFLHIOCDLEL; // 0x46
		::System::Boolean BPJENGFCKOD; // 0x47
		::System::UInt32 IGCLFNPAGJA; // 0x48
		::RPG::GameCore::GridFightForgeFuncType IEOJLKBEHBN; // 0x4C
		::JJDFGMMMCMI DACNIDLDFJG; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_CTOR_OFFSET))(this);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_UPDATESTART_OFFSET))(this);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsConcernedWith_1(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_ISCONCERNEDWITH_1_OFFSET))(this, a1);
		}

		::System::Boolean MIANKKPGFOJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_MIANKKPGFOJ_OFFSET))(this);
		}

		::System::Void UpdateItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_UPDATEITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateItemRemove(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_UPDATEITEMREMOVE_OFFSET))(this, a1);
		}

		::System::Void UpdateRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_UPDATEROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateRemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_UPDATEREMOVEROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateNPC(::GGAKNLJJNEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGAKNLJJNEI*))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_UPDATENPC_OFFSET))(this, a1);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_UPDATECOIN_OFFSET))(this, a1);
		}

		::System::Void UpdateExpertRoleUnlock(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_UPDATEEXPERTROLEUNLOCK_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Int32 GGMHEOFIMCB(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_GGMHEOFIMCB_OFFSET))(this, a1);
		}

		::System::Boolean NHIKBHPAPOM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_NHIKBHPAPOM_OFFSET))(this, a1);
		}

		::System::Void PreUpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_PREUPDATEDONE_OFFSET))(this);
		}

		::System::Boolean BLKDPDJOEJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_BLKDPDJOEJH_OFFSET))(this);
		}

		::System::Boolean FAMIICCLOBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_FAMIICCLOBI_OFFSET))(this);
		}

		::System::Void OFIKJNMCLOC(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_OFIKJNMCLOC_OFFSET))(this, a1);
		}

		::System::Void GGKLAMLIDCP(::RPG::Client::GridFightRole* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_GGKLAMLIDCP_OFFSET))(this, a1, a2);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKBDFIHKF_FDAFLPCLCEJ_OFFSET))(this);
		}

	};
