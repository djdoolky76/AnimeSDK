#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define IGAONHGMLLA_FHDBLKFNBBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x4AB2F0)

inline static constexpr unsigned int IGAONHGMLLA_FHDBLKFNBBJ_TypeDefinitionIndex = 49100;

struct alignas(4) IGAONHGMLLA_FHDBLKFNBBJ
{
	::System::Boolean GKCLJPGPHAH; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 PBCALGKIJFF; // 0x14
	::System::Int32 NOAIKJHCHEB; // 0x18
	::System::Int32 JHPHJCMBEKI; // 0x1C

	::System::Void _ctor(::System::Boolean HDOMDMMNFFP, ::System::Int32 LBACLIEGBIK, ::System::Int32 OPMFCPPFJNC, ::System::Int32 JDIFPEMEEDB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IGAONHGMLLA_FHDBLKFNBBJ__CTOR_OFFSET))(this, HDOMDMMNFFP, LBACLIEGBIK, OPMFCPPFJNC, JDIFPEMEEDB);
	}
};
