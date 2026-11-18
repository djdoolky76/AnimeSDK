#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

#define CENKLEAGEFP_IPLEOHBIGBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF6B840)
#define CENKLEAGEFP_IPLEOHBIGBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF6B9B0)
#define CENKLEAGEFP_IPLEOHBIGBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6BB00)

inline static constexpr unsigned int CENKLEAGEFP_IPLEOHBIGBJ_TypeDefinitionIndex = 18274;

class CENKLEAGEFP_IPLEOHBIGBJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENKLEAGEFP_IPLEOHBIGBJ__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Nullable_1<::System::Single> HAAEBCOBKFF, ::System::Nullable_1<::System::Single> BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CENKLEAGEFP_IPLEOHBIGBJ_EQUALS_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Int32 GetHashCode(::System::Nullable_1<::System::Single> EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CENKLEAGEFP_IPLEOHBIGBJ_GETHASHCODE_OFFSET))(this, EIFONLCJOPG);
	}
};
