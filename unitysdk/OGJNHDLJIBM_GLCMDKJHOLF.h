#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define OGJNHDLJIBM_GLCMDKJHOLF__CTOR_OFFSET UNITYSDK_OFFSET(0x3F28E0)

inline static constexpr unsigned int OGJNHDLJIBM_GLCMDKJHOLF_TypeDefinitionIndex = 38567;

struct alignas(8) OGJNHDLJIBM_GLCMDKJHOLF
{
	::System::Int32 GEPABHJBIAH; // 0x10
	::System::Byte _padding0[0x4];
	::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA; // 0x18

	::System::Void _ctor(::System::Int32 GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + OGJNHDLJIBM_GLCMDKJHOLF__CTOR_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}
};
