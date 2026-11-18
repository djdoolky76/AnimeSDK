#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FIAIFDECPEA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14297DE0)
#define FIAIFDECPEA_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x14297CA0)
#define FIAIFDECPEA__CTOR_OFFSET UNITYSDK_OFFSET(0x14297C90)

inline static constexpr unsigned int FIAIFDECPEA_TypeDefinitionIndex = 85499;

class FIAIFDECPEA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* CGLDBLNHCBD; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* KKKDFHIGOMM; // 0x18
	::System::Int32 INEBEOKEPNI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAIFDECPEA__CTOR_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIAIFDECPEA_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::UInt32 KJDPEPCDPHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIAIFDECPEA_BBOMJDBNHIC_OFFSET))(this, KJDPEPCDPHK);
	}
};
