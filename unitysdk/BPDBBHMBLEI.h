#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLLEONBDOMJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AGCPAMNLCGN;
class BPDBBHMBLEI;
class HBBCDNAHNMH;

#define BPDBBHMBLEI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B5FEE90)
#define BPDBBHMBLEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5FF370)
#define BPDBBHMBLEI_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1B5FEF60)
#define BPDBBHMBLEI_HLKFNBHPPBC_OFFSET UNITYSDK_OFFSET(0x1B5FF070)

inline static constexpr unsigned int BPDBBHMBLEI_TypeDefinitionIndex = 80730;

	class BPDBBHMBLEI : public ::BLLEONBDOMJ
	{
	public:
		::HBBCDNAHNMH* MPHCGNLJLBJ; // 0x28
		::System::UInt32 MEDDOCEGILC; // 0x30
		::System::UInt32 MMEFHCADAHG; // 0x34
		::UnityEngine::Vector3 LLCKDLOMGEO; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDBBHMBLEI_CTOR_OFFSET))(this);
		}

		static ::BPDBBHMBLEI* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::System::UInt64 a2)
		{
			return ((::BPDBBHMBLEI*(*)(::AGCPAMNLCGN*, ::System::UInt64))((::PBYTE)hIl2Cpp + BPDBBHMBLEI_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void GAILDDCMCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDBBHMBLEI_GAILDDCMCHP_OFFSET))(this);
		}

		::System::Void HLKFNBHPPBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDBBHMBLEI_HLKFNBHPPBC_OFFSET))(this);
		}

	};
