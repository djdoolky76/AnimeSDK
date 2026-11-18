#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define OFJNCMHCPCO_HOLKKLALAJC_DKCCELBNBLM_OFFSET UNITYSDK_OFFSET(0x7185F0)
#define OFJNCMHCPCO_HOLKKLALAJC_HHNDCJHOOHN_OFFSET UNITYSDK_OFFSET(0x718650)
#define OFJNCMHCPCO_HOLKKLALAJC_JDCEIKOALDG_OFFSET UNITYSDK_OFFSET(0x718660)
#define OFJNCMHCPCO_HOLKKLALAJC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x718600)

inline static constexpr unsigned int OFJNCMHCPCO_HOLKKLALAJC_TypeDefinitionIndex = 70141;

struct alignas(8) OFJNCMHCPCO_HOLKKLALAJC
{
	// static const ::System::Int32 HJLCPEPACPC = 0x78; // 0x0
	::Il2CppArray<::System::Object*>* PHPICCAJEAK; // 0x10
	::System::Int32 GIIKHDHJIHB; // 0x18
	::System::Int32 AOJAMJCLNAN; // 0x1C
	::System::Int32 OGFPEPEEHLP; // 0x20

	::System::Void DKCCELBNBLM(::System::Single BEKLCLFIDKF, ::System::Single JBFOAKELCNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OFJNCMHCPCO_HOLKKLALAJC_DKCCELBNBLM_OFFSET))(this, BEKLCLFIDKF, JBFOAKELCNK);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJNCMHCPCO_HOLKKLALAJC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void HHNDCJHOOHN(::System::Single HDIIOGEOALO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OFJNCMHCPCO_HOLKKLALAJC_HHNDCJHOOHN_OFFSET))(this, HDIIOGEOALO);
	}

	::System::Single JDCEIKOALDG(::System::Single HDKFMIAEAGP, ::System::Single HDIIOGEOALO)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OFJNCMHCPCO_HOLKKLALAJC_JDCEIKOALDG_OFFSET))(this, HDKFMIAEAGP, HDIIOGEOALO);
	}
};
