#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CNOEJLCCADC_GDDNDDGEFCF_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x13E16320)
#define CNOEJLCCADC_GDDNDDGEFCF__CTOR_OFFSET UNITYSDK_OFFSET(0x13E16310)

inline static constexpr unsigned int CNOEJLCCADC_GDDNDDGEFCF_TypeDefinitionIndex = 59184;

class CNOEJLCCADC_GDDNDDGEFCF : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOEJLCCADC_GDDNDDGEFCF__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOEJLCCADC_GDDNDDGEFCF_PNGOHNLELDJ_OFFSET))(this);
	}
};
