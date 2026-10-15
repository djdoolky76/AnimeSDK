#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BOGCBDLBHFK;

#define GAJHGPHMGFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA77A20)
#define GAJHGPHMGFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CA77A30)
#define GAJHGPHMGFP_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1CA77AE0)
#define GAJHGPHMGFP_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1CA78450)

inline static constexpr unsigned int GAJHGPHMGFP_TypeDefinitionIndex = 42472;

	class GAJHGPHMGFP : public ::KIDPCOMKMKJ
	{
	public:
		::BOGCBDLBHFK* LBNBPMIFDHI; // 0x18
		::UnityEngine::Vector3 PDJBFBPEHFE; // 0x20
		::System::Boolean GHIJIBBNKGC; // 0x2C
		::System::Boolean NFPOGHKELGL; // 0x2D
		::System::Boolean MMPGCFBENLO; // 0x2E
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 NAMGGEJCDMP; // 0x30
		::System::UInt32 BAJEFBLFOLC; // 0x3C
		::System::Single PGMIOKKLHIE; // 0x40
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + GAJHGPHMGFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJHGPHMGFP_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJHGPHMGFP_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GAJHGPHMGFP_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
