#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LONLABFNMJF_NOOAOPKBDKN_OFFSET UNITYSDK_OFFSET(0xB80E680)

inline static constexpr unsigned int LONLABFNMJF_TypeDefinitionIndex = 75248;

	class LONLABFNMJF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>* NOOAOPKBDKN(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + LONLABFNMJF_NOOAOPKBDKN_OFFSET))(a1, a2);
		}

	};
