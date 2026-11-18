#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOHPKEKHBIN_KNPNLGEJDGL.h"
#include "unitysdk/System/Object.h"

class NPAPJAMMAHF;

#define HOHPKEKHBIN__CTOR_OFFSET UNITYSDK_OFFSET(0xEA07050)

inline static constexpr unsigned int HOHPKEKHBIN_TypeDefinitionIndex = 56485;

class HOHPKEKHBIN : public ::System::Object
{
public:
	::NPAPJAMMAHF* LOONGLOKNCC; // 0x10
	::HOHPKEKHBIN_KNPNLGEJDGL OBNIAHNMHPF; // 0x18
	::System::Byte _padding0[0x4];
	::System::Int64 ANDGCJJFOFN; // 0x20

	::System::Void _ctor(::NPAPJAMMAHF* LOONGLOKNCC, ::HOHPKEKHBIN_KNPNLGEJDGL OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::NPAPJAMMAHF*, ::HOHPKEKHBIN_KNPNLGEJDGL))((::PBYTE)hIl2Cpp + HOHPKEKHBIN__CTOR_OFFSET))(this, LOONGLOKNCC, OBNIAHNMHPF);
	}
};
