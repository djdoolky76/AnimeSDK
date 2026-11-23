#pragma once
#include "unitysdk/unitysdk.h"

namespace System { template <typename T> class Func_1; }

#define FB44A8EE635F7557_E3CB908959918ADA_FF3BD05A34443EE7_OFFSET UNITYSDK_OFFSET(0x403A520)
#define FB44A8EE635F7557_E3CB908959918ADA__CTOR_OFFSET UNITYSDK_OFFSET(0x403C840)

inline static constexpr unsigned int FB44A8EE635F7557_E3CB908959918ADA_TypeDefinitionIndex = 20390;

class FB44A8EE635F7557_E3CB908959918ADA
{
public:
	::System::Func_1<::System::UInt32>* BDD0BFB63061789A; // 0x60
	::System::Func_1<::System::UInt32>* BD80BAA77F7F7D95; // 0x68
	::System::UInt32 A39C9F4CE1034AD1; // 0x70
	::System::UInt32 F4F0E627ED763248; // 0x74

	::System::UInt32 FF3BD05A34443EE7(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FB44A8EE635F7557_E3CB908959918ADA_FF3BD05A34443EE7_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB44A8EE635F7557_E3CB908959918ADA__CTOR_OFFSET))(this);
	}
};
