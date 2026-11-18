#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class JNPDIKCCDCB;
namespace System { template <typename T> class Action_1; }

#define BACAPKJJCOA_HEGDFLIOEAM_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x93EB50)

inline static constexpr unsigned int BACAPKJJCOA_HEGDFLIOEAM_TypeDefinitionIndex = 96494;

struct alignas(8) BACAPKJJCOA_HEGDFLIOEAM
{
	::System::UInt32 PCKCHOAAECE; // 0x10
	::System::Int32 DIIPPKDFPNJ; // 0x14
	::UnityEngine::Vector3 BDIEDFPGFHF; // 0x18
	::System::Byte _padding0[0x4];
	::JNPDIKCCDCB* GFMAKNKJADB; // 0x28
	::System::Action_1<::System::UInt32>* NKDGJADOIGA; // 0x30

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACAPKJJCOA_HEGDFLIOEAM_KMMIPNMJILI_OFFSET))(this);
	}
};
