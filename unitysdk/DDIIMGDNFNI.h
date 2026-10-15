#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKIOMEBIICO;
class LLGOBCPGKOB;
namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerManager; }

#define DDIIMGDNFNI_CMFFIKEPGIO_OFFSET UNITYSDK_OFFSET(0xE4DEF90)
#define DDIIMGDNFNI_CTOR_OFFSET UNITYSDK_OFFSET(0xE4DED70)
#define DDIIMGDNFNI_GET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0xE4DEFE0)
#define DDIIMGDNFNI_HMEPDEMFCOH_OFFSET UNITYSDK_OFFSET(0xE4DEF50)
#define DDIIMGDNFNI_SET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0xE4DEFF0)

	class DDIIMGDNFNI : public ::System::Object
	{
	public:
		::Il2CppArray<::LLGOBCPGKOB*>* HAOIHBMMHDB; // 0x10
		::RPG::Client::TrainParty::TrainPartyPassengerData* _PassengerData_k__BackingField; // 0x18
		::System::Void _ctor(::LKIOMEBIICO* a1, ::RPG::Client::TrainParty::TrainPartyPassengerManager* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LKIOMEBIICO*, ::RPG::Client::TrainParty::TrainPartyPassengerManager*))((::PBYTE)hIl2Cpp + DDIIMGDNFNI_CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::LLGOBCPGKOB*>* HMEPDEMFCOH()
		{
			return ((::Il2CppArray<::LLGOBCPGKOB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIIMGDNFNI_HMEPDEMFCOH_OFFSET))(this);
		}

		::System::Void CMFFIKEPGIO(::LLGOBCPGKOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLGOBCPGKOB*))((::PBYTE)hIl2Cpp + DDIIMGDNFNI_CMFFIKEPGIO_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerData* get_PassengerData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIIMGDNFNI_GET_PASSENGERDATA_OFFSET))(this);
		}

		::System::Void set_PassengerData(::RPG::Client::TrainParty::TrainPartyPassengerData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + DDIIMGDNFNI_SET_PASSENGERDATA_OFFSET))(this, a1);
		}

	};
