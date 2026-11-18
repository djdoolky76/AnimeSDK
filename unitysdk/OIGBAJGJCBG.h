#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"
#include "unitysdk/MNAGAGOHIGH.h"

class CBKCCDGFNHH;
class HHMKCBFMIGN;

#define OIGBAJGJCBG_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x16F7EE30)
#define OIGBAJGJCBG_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x16F7EF40)
#define OIGBAJGJCBG_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x16F7F0E0)
#define OIGBAJGJCBG_DODFKFHMCJN_OFFSET UNITYSDK_OFFSET(0x16F7F000)
#define OIGBAJGJCBG_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x16F7F050)
#define OIGBAJGJCBG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F7EB10)
#define OIGBAJGJCBG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7EFC0)

inline static constexpr unsigned int OIGBAJGJCBG_TypeDefinitionIndex = 70899;

class OIGBAJGJCBG : public ::BBKFNNHAKBP
{
public:
	::CBKCCDGFNHH* ILNIJPFOPOA; // 0x38
	::HHMKCBFMIGN* DLGPBEEMDAI; // 0x40
	::System::Single PDJKHPKBLFD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGBAJGJCBG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGBAJGJCBG_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGBAJGJCBG_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGBAJGJCBG_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void DODFKFHMCJN(::MNAGAGOHIGH& NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + OIGBAJGJCBG_DODFKFHMCJN_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGBAJGJCBG_KHAEIOINMBG_OFFSET))(this);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGBAJGJCBG_CMFOIAAGPFL_OFFSET))(this);
	}
};
