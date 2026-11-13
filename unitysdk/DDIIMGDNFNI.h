#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKIOMEBIICO;
class LLGOBCPGKOB;
namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerManager; }

#define DDIIMGDNFNI_CMFFIKEPGIO_OFFSET UNITYSDK_OFFSET(0x1773D540)
#define DDIIMGDNFNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1773D320)
#define DDIIMGDNFNI_GET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0x1773D590)
#define DDIIMGDNFNI_HMEPDEMFCOH_OFFSET UNITYSDK_OFFSET(0x1773D500)
#define DDIIMGDNFNI_SET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0x1773D5A0)

inline static constexpr unsigned int DDIIMGDNFNI_TypeDefinitionIndex = 76497;

	class DDIIMGDNFNI : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyPassengerData* _PassengerData_k__BackingField; // 0x10
		::Il2CppArray<::LLGOBCPGKOB*>* HAOIHBMMHDB; // 0x18
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
