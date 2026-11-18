#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IAAHGDFHCNB_MGCPDNMHMCO__CTOR_OFFSET UNITYSDK_OFFSET(0xEBA6220)

inline static constexpr unsigned int IAAHGDFHCNB_MGCPDNMHMCO_TypeDefinitionIndex = 88128;

class IAAHGDFHCNB_MGCPDNMHMCO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*>* NHPHFJJKCOF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_MGCPDNMHMCO__CTOR_OFFSET))(this);
	}
};
