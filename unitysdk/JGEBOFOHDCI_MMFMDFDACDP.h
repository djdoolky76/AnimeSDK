#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;
class JGEBOFOHDCI;

#define JGEBOFOHDCI_MMFMDFDACDP_BIKOFMLDBOB_OFFSET UNITYSDK_OFFSET(0x165A7D60)
#define JGEBOFOHDCI_MMFMDFDACDP_EFAKFCGEIJF_OFFSET UNITYSDK_OFFSET(0x165A7B40)
#define JGEBOFOHDCI_MMFMDFDACDP_HNEGNCBFJLB_OFFSET UNITYSDK_OFFSET(0x165A7C40)
#define JGEBOFOHDCI_MMFMDFDACDP__CTOR_OFFSET UNITYSDK_OFFSET(0x165A7B30)

inline static constexpr unsigned int JGEBOFOHDCI_MMFMDFDACDP_TypeDefinitionIndex = 70277;

class JGEBOFOHDCI_MMFMDFDACDP : public ::System::Object
{
public:
	::JGEBOFOHDCI* KLHPEBKNIFB; // 0x10
	::FMHDMLBDIJC* BLFMEHNGIPN; // 0x18
	::System::Int32 KCNOHOOPNAH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_MMFMDFDACDP__CTOR_OFFSET))(this);
	}

	::System::Single EFAKFCGEIJF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_MMFMDFDACDP_EFAKFCGEIJF_OFFSET))(this);
	}

	::System::Void HNEGNCBFJLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_MMFMDFDACDP_HNEGNCBFJLB_OFFSET))(this);
	}

	::System::Object* BIKOFMLDBOB()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEBOFOHDCI_MMFMDFDACDP_BIKOFMLDBOB_OFFSET))(this);
	}
};
