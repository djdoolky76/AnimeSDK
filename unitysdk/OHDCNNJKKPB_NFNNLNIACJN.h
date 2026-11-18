#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFMMAIKKACF;
class FBAMLABJMKF;
class OHDCNNJKKPB;
namespace System { class Action; }

#define OHDCNNJKKPB_NFNNLNIACJN_DGEIOEFJFKA_OFFSET UNITYSDK_OFFSET(0x16F7D340)
#define OHDCNNJKKPB_NFNNLNIACJN_DKDBFAGHGGN_OFFSET UNITYSDK_OFFSET(0x16F7D5D0)
#define OHDCNNJKKPB_NFNNLNIACJN__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7D330)

inline static constexpr unsigned int OHDCNNJKKPB_NFNNLNIACJN_TypeDefinitionIndex = 62660;

class OHDCNNJKKPB_NFNNLNIACJN : public ::System::Object
{
public:
	::OHDCNNJKKPB* KLHPEBKNIFB; // 0x10
	::AFMMAIKKACF* AAOCANGHBDG; // 0x18
	::FBAMLABJMKF* COBEJJHGMPO; // 0x20
	::System::Action* DLMJCFBENGB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDCNNJKKPB_NFNNLNIACJN__CTOR_OFFSET))(this);
	}

	::System::Void DGEIOEFJFKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDCNNJKKPB_NFNNLNIACJN_DGEIOEFJFKA_OFFSET))(this);
	}

	::System::Void DKDBFAGHGGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDCNNJKKPB_NFNNLNIACJN_DKDBFAGHGGN_OFFSET))(this);
	}
};
