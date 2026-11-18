#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CBHALHKAKLC;
class CBHALHKAKLC_OMCMPLFMCAM;
class DJKHNKJFMJO;
namespace System { class Action; }

#define CBHALHKAKLC_HODKKCJMJJD_AFNEMOHKHCD_OFFSET UNITYSDK_OFFSET(0x145A7D00)
#define CBHALHKAKLC_HODKKCJMJJD_BPLDONKDOJF_OFFSET UNITYSDK_OFFSET(0x145A7D30)
#define CBHALHKAKLC_HODKKCJMJJD_JNFDPFJJPCK_OFFSET UNITYSDK_OFFSET(0x145A7CD0)
#define CBHALHKAKLC_HODKKCJMJJD__CTOR_OFFSET UNITYSDK_OFFSET(0x145A7CC0)

inline static constexpr unsigned int CBHALHKAKLC_HODKKCJMJJD_TypeDefinitionIndex = 55870;

class CBHALHKAKLC_HODKKCJMJJD : public ::System::Object
{
public:
	::System::Action* OJCDHADFENK; // 0x10
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x18
	::System::Action* FFMGICPLKFB; // 0x20
	::System::Action* DLMJCFBENGB; // 0x28
	::CBHALHKAKLC_OMCMPLFMCAM* LJBPECKCCEA; // 0x30
	::DJKHNKJFMJO* LBDJHIALDLB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_HODKKCJMJJD__CTOR_OFFSET))(this);
	}

	::System::Void JNFDPFJJPCK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_HODKKCJMJJD_JNFDPFJJPCK_OFFSET))(this);
	}

	::System::Void AFNEMOHKHCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_HODKKCJMJJD_AFNEMOHKHCD_OFFSET))(this);
	}

	::System::Void BPLDONKDOJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_HODKKCJMJJD_BPLDONKDOJF_OFFSET))(this);
	}
};
