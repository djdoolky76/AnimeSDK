#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JJOGIMMDEDM;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KFBAENHGMFB_LBCNNPOCILA_OCHDKPAGFOK_OFFSET UNITYSDK_OFFSET(0x178FB0E0)
#define KFBAENHGMFB_LBCNNPOCILA_OFNILKHAJGN_OFFSET UNITYSDK_OFFSET(0x178FB0D0)
#define KFBAENHGMFB_LBCNNPOCILA__CTOR_OFFSET UNITYSDK_OFFSET(0x178FB0C0)

inline static constexpr unsigned int KFBAENHGMFB_LBCNNPOCILA_TypeDefinitionIndex = 78600;

class KFBAENHGMFB_LBCNNPOCILA : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action_1<::JJOGIMMDEDM*>* EDNJGMKPFHG; // 0x18
	::System::Int32 NACGJJKHEJE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_LBCNNPOCILA__CTOR_OFFSET))(this);
	}

	::System::Void OFNILKHAJGN(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_LBCNNPOCILA_OFNILKHAJGN_OFFSET))(this, BLLNHDIDKPA);
	}

	::System::Void OCHDKPAGFOK(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_LBCNNPOCILA_OCHDKPAGFOK_OFFSET))(this, GLAOEHCGCFO);
	}
};
