#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class DirectDeliveryNoticeToastConfig; }

#define IAGAFPENKDP_BPHHFLNIGID_OFFSET UNITYSDK_OFFSET(0x15E0D120)

inline static constexpr unsigned int IAGAFPENKDP_TypeDefinitionIndex = 63580;

	class IAGAFPENKDP : public ::System::Object
	{
	public:
		static ::RPG::Client::DirectDeliveryNoticeToastConfig* BPHHFLNIGID(::System::UInt32 a1)
		{
			return ((::RPG::Client::DirectDeliveryNoticeToastConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IAGAFPENKDP_BPHHFLNIGID_OFFSET))(a1);
		}

	};
