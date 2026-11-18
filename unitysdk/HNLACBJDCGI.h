#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBBCFJKMFNF.h"

namespace MoleMole { class UIBaseController; }

#define HNLACBJDCGI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16CFFF70)
#define HNLACBJDCGI_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x16CFFFE0)
#define HNLACBJDCGI_FFAEMLDKOCI_OFFSET UNITYSDK_OFFSET(0x16CFFC20)
#define HNLACBJDCGI_JOCBAOCIJID_OFFSET UNITYSDK_OFFSET(0x16CFFDA0)
#define HNLACBJDCGI_LJCKEGCONED_OFFSET UNITYSDK_OFFSET(0x16D00110)
#define HNLACBJDCGI_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x16D00120)
#define HNLACBJDCGI_LOMEDBKHGJP_OFFSET UNITYSDK_OFFSET(0x16D00100)
#define HNLACBJDCGI_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x16D002E0)
#define HNLACBJDCGI__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFFF60)

inline static constexpr unsigned int HNLACBJDCGI_TypeDefinitionIndex = 60314;

class HNLACBJDCGI : public ::MBBCFJKMFNF
{
public:
	::MoleMole::UIBaseController* FEFFFPGCIIO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLACBJDCGI__CTOR_OFFSET))(this);
	}

	::System::Boolean FFAEMLDKOCI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLACBJDCGI_FFAEMLDKOCI_OFFSET))(this);
	}

	::System::Boolean JOCBAOCIJID()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLACBJDCGI_JOCBAOCIJID_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::UIBaseController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + HNLACBJDCGI_BBOMJDBNHIC_OFFSET))(this, NCIMBHDKIJM);
	}

	static ::HNLACBJDCGI* BBPCBEEHALC(::MoleMole::UIBaseController* NCIMBHDKIJM)
	{
		return ((::HNLACBJDCGI*(*)(::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + HNLACBJDCGI_BBPCBEEHALC_OFFSET))(NCIMBHDKIJM);
	}

	::System::Boolean LOMEDBKHGJP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLACBJDCGI_LOMEDBKHGJP_OFFSET))(this);
	}

	::System::Boolean LJCKEGCONED()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLACBJDCGI_LJCKEGCONED_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP(::MoleMole::UIBaseController* KDEHMPGOCEP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + HNLACBJDCGI_LJMIPGJJELP_OFFSET))(this, KDEHMPGOCEP);
	}

	static ::System::Void MBKDOMFJFIG(::HNLACBJDCGI* CENDLIKDNJA)
	{
		return ((::System::Void(*)(::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + HNLACBJDCGI_MBKDOMFJFIG_OFFSET))(CENDLIKDNJA);
	}
};
