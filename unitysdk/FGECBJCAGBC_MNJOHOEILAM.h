#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJKHNKJFMJO;
class FGECBJCAGBC;
namespace System { template <typename T> class Action_1; }

#define FGECBJCAGBC_MNJOHOEILAM_EGKKEMOMHEO_OFFSET UNITYSDK_OFFSET(0x116AFE40)
#define FGECBJCAGBC_MNJOHOEILAM__CTOR_OFFSET UNITYSDK_OFFSET(0x116AFE30)

inline static constexpr unsigned int FGECBJCAGBC_MNJOHOEILAM_TypeDefinitionIndex = 61902;

class FGECBJCAGBC_MNJOHOEILAM : public ::System::Object
{
public:
	::DJKHNKJFMJO* LBDJHIALDLB; // 0x10
	::System::Action_1<::DJKHNKJFMJO*>* JCBMHGDCAPL; // 0x18
	::FGECBJCAGBC* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGECBJCAGBC_MNJOHOEILAM__CTOR_OFFSET))(this);
	}

	::System::Void EGKKEMOMHEO(::DJKHNKJFMJO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::DJKHNKJFMJO*))((::PBYTE)hIl2Cpp + FGECBJCAGBC_MNJOHOEILAM_EGKKEMOMHEO_OFFSET))(this, PIIPCLCCOIG);
	}
};
