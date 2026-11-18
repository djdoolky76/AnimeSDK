#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECJEHFBEMDP__CTOR_OFFSET UNITYSDK_OFFSET(0x10F1DD60)

inline static constexpr unsigned int ECJEHFBEMDP_TypeDefinitionIndex = 51623;

class ECJEHFBEMDP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* JPGGFNDGIKA; // 0x10
	::System::Boolean AMGBGFDJNFG; // 0x18
	::System::Boolean FIIDPFMJCHC; // 0x19
	::System::Byte _padding0[0x2];
	::System::UInt32 KEDBFHFLBHI; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJEHFBEMDP__CTOR_OFFSET))(this);
	}
};
