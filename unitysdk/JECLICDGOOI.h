#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/GameCore/GridFightForgeFuncType.h"
class AOFOEOIJEHF;
class CDEAABODKCP;
namespace RPG::Client { class GridFightEquipDressEvent; }
namespace RPG::Client { class GridFightEquipReturnPackEvent; }
namespace RPG::Client { class GridFightForgeAddCoinEvent; }
namespace RPG::Client { class GridFightForgeAddRoleEvent; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define JECLICDGOOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1660E630)
#define JECLICDGOOI_DJMPBKGDLKI_OFFSET UNITYSDK_OFFSET(0x1660C7E0)
#define JECLICDGOOI_EOMJBFAECGD_OFFSET UNITYSDK_OFFSET(0x1660B430)
#define JECLICDGOOI_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0x1660E4E0)
#define JECLICDGOOI_GGMHEOFIMCB_OFFSET UNITYSDK_OFFSET(0x1660E120)
#define JECLICDGOOI_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1660AA80)
#define JECLICDGOOI_MBINGCOGKAI_OFFSET UNITYSDK_OFFSET(0x1660B3A0)
#define JECLICDGOOI_NHIKBHPAPOM_OFFSET UNITYSDK_OFFSET(0x1660E2E0)
#define JECLICDGOOI_OFIKJNMCLOC_OFFSET UNITYSDK_OFFSET(0x1660AB40)
#define JECLICDGOOI_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0x1660E480)
#define JECLICDGOOI_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x1660B310)
#define JECLICDGOOI_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x1660C510)
#define JECLICDGOOI_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x1660C830)
#define JECLICDGOOI_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1660A380)
#define JECLICDGOOI_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x1660C690)
#define JECLICDGOOI_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0x1660AAF0)
#define JECLICDGOOI_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x1660A340)

inline static constexpr unsigned int JECLICDGOOI_TypeDefinitionIndex = 64952;

	class JECLICDGOOI : public ::AMCOEFHHBPO
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* AEKKIJNOPJC; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* JJPGIMPFLFP; // 0x18
		::System::Collections::Generic::Queue_1<::RPG::Client::GridFightForgeAddCoinEvent*>* GLPNHGLGGEN; // 0x20
		::System::Collections::Generic::Queue_1<::RPG::Client::GridFightEquipReturnPackEvent*>* CMMDFMHEDII; // 0x28
		::System::Collections::Generic::Queue_1<::RPG::Client::GridFightForgeAddRoleEvent*>* EGNHJDDFGPK; // 0x30
		::System::Collections::Generic::Queue_1<::RPG::Client::GridFightEquipDressEvent*>* BHKBMJJMKAE; // 0x38
		::System::UInt32 NMJKJLDANOC; // 0x40
		::System::UInt32 IGCLFNPAGJA; // 0x44
		::JJDFGMMMCMI DACNIDLDFJG; // 0x48
		::System::Boolean BPJENGFCKOD; // 0x4C
		::System::Boolean CFLHIOCDLEL; // 0x4D
		::System::Boolean PHFGHFNEJIB; // 0x4E
		::System::Boolean EDIBEIOPBHN; // 0x4F
		::RPG::GameCore::GridFightForgeFuncType IEOJLKBEHBN; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLICDGOOI_CTOR_OFFSET))(this);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLICDGOOI_UPDATESTART_OFFSET))(this);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JECLICDGOOI_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + JECLICDGOOI_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + JECLICDGOOI_UPDATEITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + JECLICDGOOI_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void MBINGCOGKAI(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + JECLICDGOOI_MBINGCOGKAI_OFFSET))(this, a1);
		}

		::System::Void EOMJBFAECGD(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + JECLICDGOOI_EOMJBFAECGD_OFFSET))(this, a1);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + JECLICDGOOI_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JECLICDGOOI_UPDATECOIN_OFFSET))(this, a1);
		}

		::System::Void DJMPBKGDLKI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JECLICDGOOI_DJMPBKGDLKI_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + JECLICDGOOI_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Int32 GGMHEOFIMCB(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JECLICDGOOI_GGMHEOFIMCB_OFFSET))(this, a1);
		}

		::System::Boolean NHIKBHPAPOM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JECLICDGOOI_NHIKBHPAPOM_OFFSET))(this, a1);
		}

		::System::Void PreUpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLICDGOOI_PREUPDATEDONE_OFFSET))(this);
		}

		::System::Void OFIKJNMCLOC(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + JECLICDGOOI_OFIKJNMCLOC_OFFSET))(this, a1);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECLICDGOOI_FDAFLPCLCEJ_OFFSET))(this);
		}

	};
