#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INGNCPPMOFG.h"
#include "unitysdk/RPG/GameCore/OperationType.h"
#include "unitysdk/System/Object.h"
class FPBPHFDOEOM;
class HPLNOGAJHKC;
class JMHDGNNIFCA;
class OKFLAHFIBCM;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDGIIPJCPID_CIODEELKNPC_OFFSET UNITYSDK_OFFSET(0x1698AE10)
#define JDGIIPJCPID_CTOR_1_OFFSET UNITYSDK_OFFSET(0x16988E10)
#define JDGIIPJCPID_CTOR_OFFSET UNITYSDK_OFFSET(0x16988D50)
#define JDGIIPJCPID_DAMECECDJHH_OFFSET UNITYSDK_OFFSET(0x1698AED0)
#define JDGIIPJCPID_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1698A590)
#define JDGIIPJCPID_DJKNAOANOCG_OFFSET UNITYSDK_OFFSET(0x1698B320)
#define JDGIIPJCPID_EICNMIBJMIB_OFFSET UNITYSDK_OFFSET(0x1698A5E0)
#define JDGIIPJCPID_GET_OPERATIONLIST_OFFSET UNITYSDK_OFFSET(0x1698DE00)
#define JDGIIPJCPID_GET_SNAPSHOTHASHLIST_OFFSET UNITYSDK_OFFSET(0x1698DE40)
#define JDGIIPJCPID_GET_SNAPSHOTLIST_OFFSET UNITYSDK_OFFSET(0x1698DE20)
#define JDGIIPJCPID_GJKKKDDMOOM_OFFSET UNITYSDK_OFFSET(0x1698A4B0)
#define JDGIIPJCPID_HCPELJHADCI_OFFSET UNITYSDK_OFFSET(0x1698DBE0)
#define JDGIIPJCPID_HIPCDOCEEEE_OFFSET UNITYSDK_OFFSET(0x1698DCC0)
#define JDGIIPJCPID_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0x1698B5E0)
#define JDGIIPJCPID_IPFDGAKOGOA_OFFSET UNITYSDK_OFFSET(0x1698A640)
#define JDGIIPJCPID_KMAFJACMGHD_OFFSET UNITYSDK_OFFSET(0x1698B210)
#define JDGIIPJCPID_KPEANPONMII_OFFSET UNITYSDK_OFFSET(0x1698ADD0)
#define JDGIIPJCPID_MPBCMOIFPGB_OFFSET UNITYSDK_OFFSET(0x1698AA20)
#define JDGIIPJCPID_NIPBGMJLFNC_OFFSET UNITYSDK_OFFSET(0x1698D9D0)
#define JDGIIPJCPID_OHNBANJEPJL_OFFSET UNITYSDK_OFFSET(0x1698B260)
#define JDGIIPJCPID_SET_OPERATIONLIST_OFFSET UNITYSDK_OFFSET(0x1698DE10)
#define JDGIIPJCPID_SET_SNAPSHOTHASHLIST_OFFSET UNITYSDK_OFFSET(0x1698DE50)
#define JDGIIPJCPID_SET_SNAPSHOTLIST_OFFSET UNITYSDK_OFFSET(0x1698DE30)

inline static constexpr unsigned int JDGIIPJCPID_TypeDefinitionIndex = 60283;

	class JDGIIPJCPID : public ::System::Object
	{
	public:
		::JMHDGNNIFCA* ENFNBBJHLEM; // 0x10
		::System::Collections::Generic::List_1<::INGNCPPMOFG>* _OperationList_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HPLNOGAJHKC*>* AAFJGBFJFHE; // 0x20
		::Il2CppArray<::JMHDGNNIFCA*>* _SnapshotList_k__BackingField; // 0x28
		::RPG::GameCore::BattleLineupData* PCIGECMCAJM; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _SnapshotHashList_k__BackingField; // 0x38
		::System::Int32 PFIPKLJOPLJ; // 0x40
		::System::Boolean DEBAOCJBBNB; // 0x44
		::System::Boolean LJPCGDPEGFO; // 0x45
		::System::Boolean NIMOCMOJGGJ; // 0x46
		::System::Boolean IIHAKBBPLEK; // 0x47
		::System::UInt32 HNEIIAGADGO; // 0x48
		::System::UInt32 BBFPALEAHAE; // 0x4C
		::System::UInt32 FFLDMJCEMDC; // 0x50
		::System::UInt32 FIMNPJLNLEE; // 0x54
		::System::UInt32 BIIEFLDLGLL; // 0x58
		::System::UInt32 ABNPHONMCEP; // 0x5C
		::System::UInt32 BIDGBCELLJK; // 0x60
		::System::UInt32 NJIOMOHBILM; // 0x64
		::System::UInt32 CFOIPGKACMJ; // 0x68
		::System::Int32 PMIPHKEANNP; // 0x6C
		::System::UInt32 DPDNOGAGALP; // 0x70
		// static const ::System::Object BFGBPLIKBDH; // 0x0
		// static const ::System::Object PGOJGJJODGJ; // 0x0
		// static const ::System::Object IIOIMBNIGAF; // 0x0
		// static const ::System::Object AAMDFIGCPHE; // 0x0
		// static const ::System::Object GGDIAEKELMG; // 0x0
		// static const ::System::Object APBBHNCDGDA; // 0x0
		// static const ::System::Object BODGLNBDCMH; // 0x0
		// static const ::System::Object GJDEDGFBBLD; // 0x0
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JDGIIPJCPID_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::OKFLAHFIBCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKFLAHFIBCM*))((::PBYTE)hIl2Cpp + JDGIIPJCPID_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGIIPJCPID_DISPOSE_OFFSET))(this);
		}

		::System::Void EICNMIBJMIB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JDGIIPJCPID_EICNMIBJMIB_OFFSET))(this, a1, a2);
		}

		::System::Void IPFDGAKOGOA(::RPG::GameCore::TurnBasedGameMode* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::OperationType a4, ::System::Int32 a5, ::System::UInt32 a6, ::System::String* a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::OperationType, ::System::Int32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + JDGIIPJCPID_IPFDGAKOGOA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void MPBCMOIFPGB(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + JDGIIPJCPID_MPBCMOIFPGB_OFFSET))(this, a1);
		}

		::FPBPHFDOEOM* KPEANPONMII()
		{
			return ((::FPBPHFDOEOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGIIPJCPID_KPEANPONMII_OFFSET))(this);
		}

		static ::System::String* CIODEELKNPC()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + JDGIIPJCPID_CIODEELKNPC_OFFSET))();
		}

		static ::System::String* DAMECECDJHH()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + JDGIIPJCPID_DAMECECDJHH_OFFSET))();
		}

		::System::Void KMAFJACMGHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGIIPJCPID_KMAFJACMGHD_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* DJKNAOANOCG(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JDGIIPJCPID_DJKNAOANOCG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NIPBGMJLFNC(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JDGIIPJCPID_NIPBGMJLFNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::OKFLAHFIBCM* HMPDCLHIPHI(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::OKFLAHFIBCM*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JDGIIPJCPID_HMPDCLHIPHI_OFFSET))(this, a1, a2, a3);
		}

		::JMHDGNNIFCA* HIPCDOCEEEE(::System::Int32 a1)
		{
			return ((::JMHDGNNIFCA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JDGIIPJCPID_HIPCDOCEEEE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* HCPELJHADCI()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGIIPJCPID_HCPELJHADCI_OFFSET))(this);
		}

		::System::Void OHNBANJEPJL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JDGIIPJCPID_OHNBANJEPJL_OFFSET))(this, a1);
		}

		::System::Int32 GJKKKDDMOOM(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JDGIIPJCPID_GJKKKDDMOOM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::INGNCPPMOFG>* get_OperationList()
		{
			return ((::System::Collections::Generic::List_1<::INGNCPPMOFG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGIIPJCPID_GET_OPERATIONLIST_OFFSET))(this);
		}

		::System::Void set_OperationList(::System::Collections::Generic::List_1<::INGNCPPMOFG>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::INGNCPPMOFG>*))((::PBYTE)hIl2Cpp + JDGIIPJCPID_SET_OPERATIONLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::JMHDGNNIFCA*>* get_SnapshotList()
		{
			return ((::Il2CppArray<::JMHDGNNIFCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGIIPJCPID_GET_SNAPSHOTLIST_OFFSET))(this);
		}

		::System::Void set_SnapshotList(::Il2CppArray<::JMHDGNNIFCA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::JMHDGNNIFCA*>*))((::PBYTE)hIl2Cpp + JDGIIPJCPID_SET_SNAPSHOTLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SnapshotHashList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDGIIPJCPID_GET_SNAPSHOTHASHLIST_OFFSET))(this);
		}

		::System::Void set_SnapshotHashList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JDGIIPJCPID_SET_SNAPSHOTHASHLIST_OFFSET))(this, a1);
		}

	};
