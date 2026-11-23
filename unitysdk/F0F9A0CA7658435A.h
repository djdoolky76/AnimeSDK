#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F0F9A0CA7658435A__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F0F9A0CA7658435A_TypeDefinitionIndex = 7784;

class F0F9A0CA7658435A : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* B5A609DE6B1A253A; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0F9A0CA7658435A__CTOR_OFFSET))(this);
	}
};
