#pragma once
#include "unitysdk/unitysdk.h"

#define AKCMOFKDMOI_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x16D8C520)
#define AKCMOFKDMOI_JNMCKOJKKCN_OFFSET UNITYSDK_OFFSET(0x16D8C5F0)
#define AKCMOFKDMOI_NKKEPCEBDNN_OFFSET UNITYSDK_OFFSET(0x16D8C660)
#define AKCMOFKDMOI__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8C500)

inline static constexpr unsigned int AKCMOFKDMOI_TypeDefinitionIndex = 62490;

class AKCMOFKDMOI
{
public:
	::System::Void _ctor(::System::Single GDBANLBHNJK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKCMOFKDMOI__CTOR_OFFSET))(this, GDBANLBHNJK);
	}

	::System::Single GIAOBHOJCDP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKCMOFKDMOI_GIAOBHOJCDP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single JNMCKOJKKCN(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKCMOFKDMOI_JNMCKOJKKCN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single NKKEPCEBDNN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCMOFKDMOI_NKKEPCEBDNN_OFFSET))(this);
	}
};
