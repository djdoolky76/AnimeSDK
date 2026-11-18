#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CCGEIPFHBBP_ALDNMEFPOHJ_OFFSET UNITYSDK_OFFSET(0x168623C0)
#define CCGEIPFHBBP_BGGKNENINEC_OFFSET UNITYSDK_OFFSET(0x168622A0)
#define CCGEIPFHBBP_CPHDBAEOPPJ_OFFSET UNITYSDK_OFFSET(0x168622B0)
#define CCGEIPFHBBP_HCLIJKKJMAG_OFFSET UNITYSDK_OFFSET(0x16862290)
#define CCGEIPFHBBP_HICFCCGFDCI_OFFSET UNITYSDK_OFFSET(0x16862500)
#define CCGEIPFHBBP_NAJBMDCCBNJ_OFFSET UNITYSDK_OFFSET(0x168622C0)
#define CCGEIPFHBBP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16862280)
#define CCGEIPFHBBP__CTOR_OFFSET UNITYSDK_OFFSET(0x16862270)

inline static constexpr unsigned int CCGEIPFHBBP_TypeDefinitionIndex = 90615;

class CCGEIPFHBBP : public ::System::Object
{
public:
	::System::Single _HHDCHPNIJNP_k__BackingField; // 0x10
	::System::Single _HPLNOBOHEED_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGEIPFHBBP__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Single PPBCNEPHBAJ, ::System::Single BIGIPAICEGN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CCGEIPFHBBP__CTOR_1_OFFSET))(this, PPBCNEPHBAJ, BIGIPAICEGN);
	}

	::System::Single HCLIJKKJMAG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGEIPFHBBP_HCLIJKKJMAG_OFFSET))(this);
	}

	::System::Void BGGKNENINEC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCGEIPFHBBP_BGGKNENINEC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single CPHDBAEOPPJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGEIPFHBBP_CPHDBAEOPPJ_OFFSET))(this);
	}

	::System::Boolean NAJBMDCCBNJ(::System::Single ANODOLODNLJ, ::System::Single BHIKEPMKFAN, ::System::Boolean GDECGONPELC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CCGEIPFHBBP_NAJBMDCCBNJ_OFFSET))(this, ANODOLODNLJ, BHIKEPMKFAN, GDECGONPELC);
	}

	::System::Boolean ALDNMEFPOHJ(::System::Single ANODOLODNLJ, ::System::Single BHIKEPMKFAN, ::System::Boolean GDECGONPELC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CCGEIPFHBBP_ALDNMEFPOHJ_OFFSET))(this, ANODOLODNLJ, BHIKEPMKFAN, GDECGONPELC);
	}

	::System::Void HICFCCGFDCI(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCGEIPFHBBP_HICFCCGFDCI_OFFSET))(this, EGEGIMGMJHN);
	}
};
