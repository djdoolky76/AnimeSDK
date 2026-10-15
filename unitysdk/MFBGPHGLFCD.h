#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
namespace RPG::Client::BlindBox::Trade { class BlindBoxOrderFilter; }
namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MFBGPHGLFCD_COABEEHENAE_OFFSET UNITYSDK_OFFSET(0xB8E4C60)
#define MFBGPHGLFCD_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB8E4B90)
#define MFBGPHGLFCD_CTOR_OFFSET UNITYSDK_OFFSET(0xB8E4B60)
#define MFBGPHGLFCD_DNLKHAFDECB_OFFSET UNITYSDK_OFFSET(0xB8E5450)
#define MFBGPHGLFCD_GET_ALLPICKEDORDERS_OFFSET UNITYSDK_OFFSET(0xB8E4BD0)
#define MFBGPHGLFCD_GET_FILTER_OFFSET UNITYSDK_OFFSET(0xB8E4BA0)
#define MFBGPHGLFCD_GET_IGNORERETURNEDORDERIDS_OFFSET UNITYSDK_OFFSET(0xB8E4BF0)
#define MFBGPHGLFCD_GET_MAXTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xB8E4BE0)
#define MFBGPHGLFCD_GET_PICKEDIDS_OFFSET UNITYSDK_OFFSET(0xB8E4BB0)
#define MFBGPHGLFCD_GET_RETURNEDORDERIDS_OFFSET UNITYSDK_OFFSET(0xB8E4BC0)
#define MFBGPHGLFCD_HMHGBBHJJIJ_OFFSET UNITYSDK_OFFSET(0xB8E51A0)
#define MFBGPHGLFCD_JELJDPMMKKH_1_OFFSET UNITYSDK_OFFSET(0xB8E4E70)
#define MFBGPHGLFCD_JELJDPMMKKH_OFFSET UNITYSDK_OFFSET(0xB8E4E10)
#define MFBGPHGLFCD_LHMCNGLPNGM_OFFSET UNITYSDK_OFFSET(0xB8E4C00)
#define MFBGPHGLFCD_LPJBOJIGCHJ_OFFSET UNITYSDK_OFFSET(0xB8E5330)
#define MFBGPHGLFCD_NKEHBDEBFGD_OFFSET UNITYSDK_OFFSET(0xB8E4D70)
#define MFBGPHGLFCD_NLCGMCMNAHG_OFFSET UNITYSDK_OFFSET(0xB8E5500)
#define MFBGPHGLFCD_NPDAEEHGMCA_OFFSET UNITYSDK_OFFSET(0xB8E50A0)
#define MFBGPHGLFCD_POBFOKMBDBO_OFFSET UNITYSDK_OFFSET(0xB8E5AC0)
#define MFBGPHGLFCD_POFLKANFHBO_OFFSET UNITYSDK_OFFSET(0xB8E6150)

inline static constexpr unsigned int MFBGPHGLFCD_TypeDefinitionIndex = 74861;

	class MFBGPHGLFCD : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter* _Filter_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt64>* _PickedIds_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* _AllPickedOrders_k__BackingField; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt64>* _ReturnedOrderIds_k__BackingField; // 0x28
		::System::Boolean _IgnoreReturnedOrderIds_k__BackingField; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 _MaxTotalCount_k__BackingField; // 0x34
		::System::Void _ctor(::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter* a1, ::System::Collections::Generic::HashSet_1<::System::UInt64>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt64>* a3, ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter*, ::System::Collections::Generic::HashSet_1<::System::UInt64>*, ::System::Collections::Generic::HashSet_1<::System::UInt64>*, ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_CTOR_1_OFFSET))(this);
		}

		::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter* get_Filter()
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_GET_FILTER_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt64>* get_PickedIds()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_GET_PICKEDIDS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt64>* get_ReturnedOrderIds()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_GET_RETURNEDORDERIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* get_AllPickedOrders()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_GET_ALLPICKEDORDERS_OFFSET))(this);
		}

		::System::Int32 get_MaxTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_GET_MAXTOTALCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IgnoreReturnedOrderIds()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_GET_IGNORERETURNEDORDERIDS_OFFSET))(this);
		}

		::System::Boolean LHMCNGLPNGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_LHMCNGLPNGM_OFFSET))(this);
		}

		::System::Void COABEEHENAE(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_COABEEHENAE_OFFSET))(this, a1);
		}

		::System::Boolean NKEHBDEBFGD(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_NKEHBDEBFGD_OFFSET))(this, a1);
		}

		::System::Boolean JELJDPMMKKH(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_JELJDPMMKKH_OFFSET))(this, a1);
		}

		::System::Boolean JELJDPMMKKH_1(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1, ::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*, ::RPG::Client::BlindBox::Trade::BlindBoxOrderFilter*))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_JELJDPMMKKH_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean NPDAEEHGMCA(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_NPDAEEHGMCA_OFFSET))(this, a1);
		}

		::RPG::Client::Pet::BlindBox::BlindBoxPetType HMHGBBHJJIJ(::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder* a1)
		{
			return ((::RPG::Client::Pet::BlindBox::BlindBoxPetType(*)(::PVOID, ::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_HMHGBBHJJIJ_OFFSET))(this, a1);
		}

		::System::Int32 LPJBOJIGCHJ(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_LPJBOJIGCHJ_OFFSET))(this, a1);
		}

		::System::Int32 DNLKHAFDECB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_DNLKHAFDECB_OFFSET))(this);
		}

		::System::Void NLCGMCMNAHG(::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_NLCGMCMNAHG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void POBFOKMBDBO(::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a2, ::RPG::Client::Pet::BlindBox::BlindBoxPetType a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::RPG::Client::Pet::BlindBox::BlindBoxPetType, ::System::Int32))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_POBFOKMBDBO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void POFLKANFHBO(::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MFBGPHGLFCD_POFLKANFHBO_OFFSET))(this, a1, a2, a3);
		}

	};
