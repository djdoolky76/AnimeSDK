#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LKJFNHENIAA_MCHGKBADBGP_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x168555D0)
#define LKJFNHENIAA_MCHGKBADBGP__CTOR_OFFSET UNITYSDK_OFFSET(0x168555C0)

inline static constexpr unsigned int LKJFNHENIAA_MCHGKBADBGP_TypeDefinitionIndex = 87438;

class LKJFNHENIAA_MCHGKBADBGP : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJFNHENIAA_MCHGKBADBGP__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJFNHENIAA_MCHGKBADBGP_PNGOHNLELDJ_OFFSET))(this);
	}
};
