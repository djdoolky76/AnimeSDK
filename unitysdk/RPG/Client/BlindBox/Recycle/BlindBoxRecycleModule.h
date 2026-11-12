#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class IALFNMFNEJB;
class KDPNDCMKOKD;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::BlindBox::Recycle { class BlindBoxDustExchangeInfo; }
namespace RPG::Client::Pet { class IPetInstance; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_CALCULATERECYCLEDUSTNUM_OFFSET UNITYSDK_OFFSET(0xD1F5B30)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_CANRECYCLE_OFFSET UNITYSDK_OFFSET(0xD1F5DC0)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xD1F5930)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GETDUSTEXCHANGEINFO_OFFSET UNITYSDK_OFFSET(0xD1F7D90)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GETRECYCLABLECANDIDATES_OFFSET UNITYSDK_OFFSET(0xD1F5F70)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GETRECYCLEREWARDPREVIEW_OFFSET UNITYSDK_OFFSET(0xD1F5B90)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_DUSTITEMID_OFFSET UNITYSDK_OFFSET(0xD1F5D70)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_KEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xD1F8670)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_MAXRECYCLECOUNT_OFFSET UNITYSDK_OFFSET(0xD1F86C0)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_RECYCLEACTIVITYBEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD1F8830)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_RECYCLEACTIVITYENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD1F8760)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_TIPSCOUNTDOWNDAYS_OFFSET UNITYSDK_OFFSET(0xD1F8710)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xD1F5950)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_RECYCLEBLINDBOXPETS_OFFSET UNITYSDK_OFFSET(0xD1F7120)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xD1F5A50)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE__ISRECYCLABLECANDIDATE_OFFSET UNITYSDK_OFFSET(0xD1F6D90)
#define RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE__ONRECYCLEBLINDBOXPETSCRSP_OFFSET UNITYSDK_OFFSET(0xD1F8160)

namespace RPG::Client::BlindBox::Recycle
{
	inline static constexpr unsigned int BlindBoxRecycleModule_TypeDefinitionIndex = 77233;

	class BlindBoxRecycleModule : public ::RPG::Client::BaseModule
	{
	public:
		::IALFNMFNEJB* _DustCalculator; // 0x10
		::KDPNDCMKOKD* _Consts; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::UInt32 CalculateRecycleDustNum(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_CALCULATERECYCLEDUSTNUM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRecycleRewardPreview(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GETRECYCLEREWARDPREVIEW_OFFSET))(this, a1);
		}

		::System::Boolean CanRecycle(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_CANRECYCLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* GetRecyclableCandidates()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GETRECYCLABLECANDIDATES_OFFSET))(this);
		}

		::System::Boolean _IsRecyclableCandidate(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE__ISRECYCLABLECANDIDATE_OFFSET))(this, a1);
		}

		::System::Void RecycleBlindBoxPets(::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_RECYCLEBLINDBOXPETS_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Recycle::BlindBoxDustExchangeInfo* GetDustExchangeInfo()
		{
			return ((::RPG::Client::BlindBox::Recycle::BlindBoxDustExchangeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GETDUSTEXCHANGEINFO_OFFSET))(this);
		}

		::System::Void _OnRecycleBlindBoxPetScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE__ONRECYCLEBLINDBOXPETSCRSP_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_KeepCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_KEEPCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_DustItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_DUSTITEMID_OFFSET))(this);
		}

		::System::UInt32 get_MaxRecycleCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_MAXRECYCLECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_TipsCountdownDays()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_TIPSCOUNTDOWNDAYS_OFFSET))(this);
		}

		::System::UInt32 get_RecycleActivityEndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_RECYCLEACTIVITYENDTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_RecycleActivityBeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_RECYCLE_BLINDBOXRECYCLEMODULE_GET_RECYCLEACTIVITYBEGINTIMESTAMP_OFFSET))(this);
		}

	};
}
