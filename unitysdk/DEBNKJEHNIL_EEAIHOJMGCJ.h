#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class PKCLHIAACFD;

#define DEBNKJEHNIL_EEAIHOJMGCJ_LJOPDDMEKCM_OFFSET UNITYSDK_OFFSET(0x18333F10)
#define DEBNKJEHNIL_EEAIHOJMGCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18333F00)

inline static constexpr unsigned int DEBNKJEHNIL_EEAIHOJMGCJ_TypeDefinitionIndex = 40868;

class DEBNKJEHNIL_EEAIHOJMGCJ : public ::System::Object
{
public:
	::PKCLHIAACFD* EIAMAPOEDMF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBNKJEHNIL_EEAIHOJMGCJ__CTOR_OFFSET))(this);
	}

	::System::Int32 LJOPDDMEKCM(::System::ValueTuple_2<::System::Int32, ::System::Int32> EJCBEJMGFAJ, ::System::ValueTuple_2<::System::Int32, ::System::Int32> EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + DEBNKJEHNIL_EEAIHOJMGCJ_LJOPDDMEKCM_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
