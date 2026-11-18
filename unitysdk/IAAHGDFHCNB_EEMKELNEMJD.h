#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IAAHGDFHCNB_EEMKELNEMJD__CTOR_OFFSET UNITYSDK_OFFSET(0x14710D70)

inline static constexpr unsigned int IAAHGDFHCNB_EEMKELNEMJD_TypeDefinitionIndex = 88129;

class IAAHGDFHCNB_EEMKELNEMJD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* BAHGIADDIFA; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* HGOBJIMNODD; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* ACPCAAPNLIK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_EEMKELNEMJD__CTOR_OFFSET))(this);
	}
};
