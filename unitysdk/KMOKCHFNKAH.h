#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/BCGLFKMDELO.h"
#include "unitysdk/OIPMNNAHIFP.h"
class DCIOBGNNLOL;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class ItemCost; }
namespace RPG::Client { class AvatarGrowUpBeforeData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KMOKCHFNKAH_ADCDDAAFNBM_OFFSET UNITYSDK_OFFSET(0xB563780)
#define KMOKCHFNKAH_CTOR_OFFSET UNITYSDK_OFFSET(0xB563550)
#define KMOKCHFNKAH_DKDDLAMBJLC_OFFSET UNITYSDK_OFFSET(0xB564860)
#define KMOKCHFNKAH_DNJJDEGGMPD_OFFSET UNITYSDK_OFFSET(0xB563EC0)
#define KMOKCHFNKAH_ENAKMMDLAHL_OFFSET UNITYSDK_OFFSET(0xB563E30)
#define KMOKCHFNKAH_EPGMKACANAJ_OFFSET UNITYSDK_OFFSET(0xB564B60)
#define KMOKCHFNKAH_FJKMMLLGKLC_OFFSET UNITYSDK_OFFSET(0xB564290)
#define KMOKCHFNKAH_GDDENHKFOCE_OFFSET UNITYSDK_OFFSET(0xB564A70)
#define KMOKCHFNKAH_IBPPFHGNAAK_OFFSET UNITYSDK_OFFSET(0xB564AD0)
#define KMOKCHFNKAH_IKMGKHNGJHB_OFFSET UNITYSDK_OFFSET(0xB563B40)
#define KMOKCHFNKAH_JFKHBKCJDAL_OFFSET UNITYSDK_OFFSET(0xB564ED0)
#define KMOKCHFNKAH_LHPDDEFACFN_OFFSET UNITYSDK_OFFSET(0xB563F20)
#define KMOKCHFNKAH_NBLJOGIMMIF_OFFSET UNITYSDK_OFFSET(0xB5649E0)
#define KMOKCHFNKAH_START_OFFSET UNITYSDK_OFFSET(0xB5636F0)
#define KMOKCHFNKAH_STOP_OFFSET UNITYSDK_OFFSET(0xB563730)

inline static constexpr unsigned int KMOKCHFNKAH_TypeDefinitionIndex = 62764;

	class KMOKCHFNKAH : public ::BHPMNMMGLHI
	{
	public:
		::System::Collections::Generic::Dictionary_2<::DNFDBKCPBNM, ::RPG::Client::AvatarGrowUpBeforeData*>* JINCOBOAGBN; // 0x20
		::DCIOBGNNLOL* ENGKMENDCIM; // 0x28
		::System::Collections::Generic::Dictionary_2<::DNFDBKCPBNM, ::RPG::Client::AvatarGrowUpBeforeData*>* DCAOBIADLHG; // 0x30
		::System::Collections::Generic::Dictionary_2<::DNFDBKCPBNM, ::RPG::Client::AvatarGrowUpBeforeData*>* MNHIHDLLLFL; // 0x38
		::System::Void _ctor(::DCIOBGNNLOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCIOBGNNLOL*))((::PBYTE)hIl2Cpp + KMOKCHFNKAH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOKCHFNKAH_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOKCHFNKAH_STOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* ADCDDAAFNBM(::DNFDBKCPBNM a1, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::DNFDBKCPBNM, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + KMOKCHFNKAH_ADCDDAAFNBM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AvatarGrowUpBeforeData* ENAKMMDLAHL(::DNFDBKCPBNM a1)
		{
			return ((::RPG::Client::AvatarGrowUpBeforeData*(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + KMOKCHFNKAH_ENAKMMDLAHL_OFFSET))(this, a1);
		}

		::System::Void DNJJDEGGMPD(::DNFDBKCPBNM a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + KMOKCHFNKAH_DNJJDEGGMPD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* LHPDDEFACFN(::DNFDBKCPBNM a1, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::DNFDBKCPBNM, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + KMOKCHFNKAH_LHPDDEFACFN_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* FJKMMLLGKLC(::DNFDBKCPBNM a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a4, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a5)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::DNFDBKCPBNM, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + KMOKCHFNKAH_FJKMMLLGKLC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::AvatarGrowUpBeforeData* NBLJOGIMMIF(::DNFDBKCPBNM a1)
		{
			return ((::RPG::Client::AvatarGrowUpBeforeData*(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + KMOKCHFNKAH_NBLJOGIMMIF_OFFSET))(this, a1);
		}

		::System::Void GDDENHKFOCE(::DNFDBKCPBNM a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + KMOKCHFNKAH_GDDENHKFOCE_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarGrowUpBeforeData* IBPPFHGNAAK(::DNFDBKCPBNM a1)
		{
			return ((::RPG::Client::AvatarGrowUpBeforeData*(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + KMOKCHFNKAH_IBPPFHGNAAK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* EPGMKACANAJ(::BCGLFKMDELO a1, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::BCGLFKMDELO, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + KMOKCHFNKAH_EPGMKACANAJ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* JFKHBKCJDAL(::OIPMNNAHIFP a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::OIPMNNAHIFP, ::System::UInt32, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + KMOKCHFNKAH_JFKHBKCJDAL_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::AvatarGrowUpBeforeData* IKMGKHNGJHB(::DNFDBKCPBNM a1, ::System::Collections::Generic::Dictionary_2<::DNFDBKCPBNM, ::RPG::Client::AvatarGrowUpBeforeData*>* a2)
		{
			return ((::RPG::Client::AvatarGrowUpBeforeData*(*)(::PVOID, ::DNFDBKCPBNM, ::System::Collections::Generic::Dictionary_2<::DNFDBKCPBNM, ::RPG::Client::AvatarGrowUpBeforeData*>*))((::PBYTE)hIl2Cpp + KMOKCHFNKAH_IKMGKHNGJHB_OFFSET))(this, a1, a2);
		}

		static ::System::Void DKDDLAMBJLC(::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* a1, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>*, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMOKCHFNKAH_DKDDLAMBJLC_OFFSET))(a1, a2, a3);
		}

	};
