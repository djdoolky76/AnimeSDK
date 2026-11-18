#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OPNIGGOPDDD.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define AGLNBJNNLJG__CTOR_OFFSET UNITYSDK_OFFSET(0x6B8F30)

inline static constexpr unsigned int AGLNBJNNLJG_TypeDefinitionIndex = 56810;

struct alignas(8) AGLNBJNNLJG
{
	::System::UInt32 OHLGFAMCOOL; // 0x10
	::OPNIGGOPDDD KNACCLNJOAE; // 0x14
	::System::Boolean ABDFNILFPDK; // 0x18
	::System::Byte _padding0[0x7];
	::System::Action_1<::System::Action*>* EADCPOMIGEP; // 0x20

	::System::Void _ctor(::System::UInt32 CJPLACFCFBP, ::OPNIGGOPDDD JNJBMADKAOC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::OPNIGGOPDDD))((::PBYTE)hIl2Cpp + AGLNBJNNLJG__CTOR_OFFSET))(this, CJPLACFCFBP, JNJBMADKAOC);
	}
};
