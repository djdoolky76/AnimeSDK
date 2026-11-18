#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BPAFFMMJJCJ_HHFJNLEBGLL_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x14262A10)
#define BPAFFMMJJCJ_HHFJNLEBGLL__CTOR_OFFSET UNITYSDK_OFFSET(0x14262A00)

inline static constexpr unsigned int BPAFFMMJJCJ_HHFJNLEBGLL_TypeDefinitionIndex = 53776;

class BPAFFMMJJCJ_HHFJNLEBGLL : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAFFMMJJCJ_HHFJNLEBGLL__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAFFMMJJCJ_HHFJNLEBGLL_PNGOHNLELDJ_OFFSET))(this);
	}
};
