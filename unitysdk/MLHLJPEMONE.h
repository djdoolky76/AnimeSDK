#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"
#include "unitysdk/MNAGAGOHIGH.h"

class CBKCCDGFNHH;
class HHMKCBFMIGN;

#define MLHLJPEMONE_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x11F58EC0)
#define MLHLJPEMONE_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x11F58FD0)
#define MLHLJPEMONE_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x11F590E0)
#define MLHLJPEMONE_GEFJFKGMGHC_OFFSET UNITYSDK_OFFSET(0x11F59090)
#define MLHLJPEMONE_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x11F59180)
#define MLHLJPEMONE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F58BA0)
#define MLHLJPEMONE__CTOR_OFFSET UNITYSDK_OFFSET(0x11F59050)

inline static constexpr unsigned int MLHLJPEMONE_TypeDefinitionIndex = 76877;

class MLHLJPEMONE : public ::BBKFNNHAKBP
{
public:
	::HHMKCBFMIGN* KBKOODEAALI; // 0x38
	::CBKCCDGFNHH* ILNIJPFOPOA; // 0x40
	::System::Single PDJKHPKBLFD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHLJPEMONE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHLJPEMONE_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHLJPEMONE_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHLJPEMONE_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void GEFJFKGMGHC(::MNAGAGOHIGH& NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + MLHLJPEMONE_GEFJFKGMGHC_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHLJPEMONE_CMFOIAAGPFL_OFFSET))(this);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHLJPEMONE_KHAEIOINMBG_OFFSET))(this);
	}
};
