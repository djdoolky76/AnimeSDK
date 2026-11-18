#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FNMGEBCBBHH_BGJOEHIOGJB_OFFSET UNITYSDK_OFFSET(0x125B7000)
#define FNMGEBCBBHH_HGMHBEDEODA_OFFSET UNITYSDK_OFFSET(0x125B6FF0)
#define FNMGEBCBBHH_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x125B7010)
#define FNMGEBCBBHH_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x125B7040)
#define FNMGEBCBBHH_LNAOGMCNGHJ_OFFSET UNITYSDK_OFFSET(0x125B7030)
#define FNMGEBCBBHH__CTOR_OFFSET UNITYSDK_OFFSET(0x125B7020)

inline static constexpr unsigned int FNMGEBCBBHH_TypeDefinitionIndex = 51042;

class FNMGEBCBBHH : public ::System::Object
{
public:
	::System::Boolean _MECHDBEHDIN_k__BackingField; // 0x10
	::System::Byte _padding0[0x3];
	::System::UInt32 _AKLCPMAKAFN_k__BackingField; // 0x14
	::System::UInt32 _JGBBPLPDHEB_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMGEBCBBHH__CTOR_OFFSET))(this);
	}

	::System::UInt32 HGMHBEDEODA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMGEBCBBHH_HGMHBEDEODA_OFFSET))(this);
	}

	::System::UInt32 BGJOEHIOGJB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMGEBCBBHH_BGJOEHIOGJB_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMGEBCBBHH_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Void LNAOGMCNGHJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNMGEBCBBHH_LNAOGMCNGHJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMGEBCBBHH_JJEJHGOJOII_OFFSET))(this);
	}
};
