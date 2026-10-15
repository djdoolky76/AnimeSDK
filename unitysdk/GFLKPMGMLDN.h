#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
class CPCJHAMKGKC;
class FJNBODHINDM;

#define GFLKPMGMLDN_CTOR_OFFSET UNITYSDK_OFFSET(0x159FC5F0)
#define GFLKPMGMLDN_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x159FC480)
#define GFLKPMGMLDN_MFOMHGJCPJP_OFFSET UNITYSDK_OFFSET(0x159FC560)
#define GFLKPMGMLDN_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x159FC500)

	class GFLKPMGMLDN : public ::GJPFGOGOLBI
	{
	public:
		::FJNBODHINDM* CACEADPJLPB; // 0x18
		::CPCJHAMKGKC* HOMJBACGGJB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLKPMGMLDN_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLKPMGMLDN_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLKPMGMLDN_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void MFOMHGJCPJP(::CPCJHAMKGKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPCJHAMKGKC*))((::PBYTE)hIl2Cpp + GFLKPMGMLDN_MFOMHGJCPJP_OFFSET))(this, a1);
		}

	};
