#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderBuffAsset_BuffType.h"
#include "unitysdk/HipplenBuilderStatus_StatType.h"
#include "unitysdk/System/Object.h"
class HipplenBuilderBuffAsset_BuffElementConfig;
namespace System { class String; }

#define HIPPLENBUILDERSTATUS_LHKGHMBBAMD_AOAHHHBCLKP_OFFSET UNITYSDK_OFFSET(0x1AF587B0)
#define HIPPLENBUILDERSTATUS_LHKGHMBBAMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF58490)
#define HIPPLENBUILDERSTATUS_LHKGHMBBAMD_DGLCFHNJPJM_OFFSET UNITYSDK_OFFSET(0x1AF58800)
#define HIPPLENBUILDERSTATUS_LHKGHMBBAMD_HOKENEHPKKJ_OFFSET UNITYSDK_OFFSET(0x1AF592E0)
#define HIPPLENBUILDERSTATUS_LHKGHMBBAMD_IJLKNCHKFDJ_OFFSET UNITYSDK_OFFSET(0x1AF58760)
#define HIPPLENBUILDERSTATUS_LHKGHMBBAMD_LMABJDHENPK_OFFSET UNITYSDK_OFFSET(0x1AF58710)
#define HIPPLENBUILDERSTATUS_LHKGHMBBAMD_PNLLINHJDJF_OFFSET UNITYSDK_OFFSET(0x1AF59290)

inline static constexpr unsigned int HipplenBuilderStatus_LHKGHMBBAMD_TypeDefinitionIndex = 48238;

	class HipplenBuilderStatus_LHKGHMBBAMD : public ::System::Object
	{
	public:
		::HipplenBuilderBuffAsset_BuffElementConfig* NDCOMJDODAD; // 0x10
		::System::Int32 CBEDPBEEOLB; // 0x18
		::System::Void _ctor(::HipplenBuilderBuffAsset_BuffElementConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HipplenBuilderBuffAsset_BuffElementConfig*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_LHKGHMBBAMD_CTOR_OFFSET))(this, a1);
		}

		::System::String* PNLLINHJDJF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_LHKGHMBBAMD_PNLLINHJDJF_OFFSET))(this);
		}

		::HipplenBuilderBuffAsset_BuffType LMABJDHENPK()
		{
			return ((::HipplenBuilderBuffAsset_BuffType(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_LHKGHMBBAMD_LMABJDHENPK_OFFSET))(this);
		}

		::System::Int32 HOKENEHPKKJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_LHKGHMBBAMD_HOKENEHPKKJ_OFFSET))(this);
		}

		::HipplenBuilderStatus_StatType IJLKNCHKFDJ()
		{
			return ((::HipplenBuilderStatus_StatType(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_LHKGHMBBAMD_IJLKNCHKFDJ_OFFSET))(this);
		}

		::System::Single AOAHHHBCLKP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_LHKGHMBBAMD_AOAHHHBCLKP_OFFSET))(this);
		}

		::System::Int32 DGLCFHNJPJM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_LHKGHMBBAMD_DGLCFHNJPJM_OFFSET))(this);
		}

	};
