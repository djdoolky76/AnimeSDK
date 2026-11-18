#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CBHALHKAKLC;
class DJKHNKJFMJO;
namespace System { template <typename T> class Action_1; }

#define CBHALHKAKLC_EOMAIBDKNJK_BPLDONKDOJF_OFFSET UNITYSDK_OFFSET(0x1477ED30)
#define CBHALHKAKLC_EOMAIBDKNJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1477ED20)

inline static constexpr unsigned int CBHALHKAKLC_EOMAIBDKNJK_TypeDefinitionIndex = 55902;

class CBHALHKAKLC_EOMAIBDKNJK : public ::System::Object
{
public:
	::DJKHNKJFMJO* LBDJHIALDLB; // 0x10
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x18
	::System::Action_1<::DJKHNKJFMJO*>* JCBMHGDCAPL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_EOMAIBDKNJK__CTOR_OFFSET))(this);
	}

	::System::Void BPLDONKDOJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_EOMAIBDKNJK_BPLDONKDOJF_OFFSET))(this);
	}
};
