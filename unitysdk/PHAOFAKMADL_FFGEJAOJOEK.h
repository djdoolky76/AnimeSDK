#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PHAOFAKMADL_FFGEJAOJOEK_CMNJOJPKELO_OFFSET UNITYSDK_OFFSET(0x178CC500)
#define PHAOFAKMADL_FFGEJAOJOEK_EPDPINECDNL_OFFSET UNITYSDK_OFFSET(0x178CC470)
#define PHAOFAKMADL_FFGEJAOJOEK_EPLMFEPAOJG_OFFSET UNITYSDK_OFFSET(0x178CC360)
#define PHAOFAKMADL_FFGEJAOJOEK_HFDDIBKDGEC_OFFSET UNITYSDK_OFFSET(0x178CC3F0)
#define PHAOFAKMADL_FFGEJAOJOEK__CTOR_OFFSET UNITYSDK_OFFSET(0x178CC350)

inline static constexpr unsigned int PHAOFAKMADL_FFGEJAOJOEK_TypeDefinitionIndex = 54363;

class PHAOFAKMADL_FFGEJAOJOEK : public ::System::Object
{
public:
	::System::Int32 GLKNCIDNNOG; // 0x10
	::System::UInt32 KOOPNFPBCPN; // 0x14
	::System::Boolean FHKKMJEEEGO; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single DOCOAGLAPIG; // 0x1C
	::System::UInt32 MHCGOIJIGFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAOFAKMADL_FFGEJAOJOEK__CTOR_OFFSET))(this);
	}

	::System::String* EPLMFEPAOJG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAOFAKMADL_FFGEJAOJOEK_EPLMFEPAOJG_OFFSET))(this);
	}

	::System::String* HFDDIBKDGEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAOFAKMADL_FFGEJAOJOEK_HFDDIBKDGEC_OFFSET))(this);
	}

	::System::String* EPDPINECDNL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAOFAKMADL_FFGEJAOJOEK_EPDPINECDNL_OFFSET))(this);
	}

	::System::String* CMNJOJPKELO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAOFAKMADL_FFGEJAOJOEK_CMNJOJPKELO_OFFSET))(this);
	}
};
