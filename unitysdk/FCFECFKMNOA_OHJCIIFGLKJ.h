#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Buffers { template <typename T> class ArrayPool_1_1036FF0C6A510415; }

#define FCFECFKMNOA_OHJCIIFGLKJ_LHOKOPHKCNK_OFFSET UNITYSDK_OFFSET(0x1E5EB980)
#define FCFECFKMNOA_OHJCIIFGLKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EB970)

inline static constexpr unsigned int FCFECFKMNOA_OHJCIIFGLKJ_TypeDefinitionIndex = 34071;

class FCFECFKMNOA_OHJCIIFGLKJ : public ::System::Object
{
public:
	::System::Buffers::ArrayPool_1_1036FF0C6A510415<::System::Byte>* AIBLPKLIGNK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFECFKMNOA_OHJCIIFGLKJ__CTOR_OFFSET))(this);
	}

	::System::Void LHOKOPHKCNK(::Il2CppArray<::System::Byte>* EJCBEJMGFAJ)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FCFECFKMNOA_OHJCIIFGLKJ_LHOKOPHKCNK_OFFSET))(this, EJCBEJMGFAJ);
	}
};
