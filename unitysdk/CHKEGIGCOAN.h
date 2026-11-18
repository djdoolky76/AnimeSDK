#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHKEGIGCOAN_CGMEPLFKIED.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class BNENHEDNODF;

#define CHKEGIGCOAN_BDMPFHKILCB_OFFSET UNITYSDK_OFFSET(0x1F39C1D0)
#define CHKEGIGCOAN_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x1F39C150)
#define CHKEGIGCOAN_ELBOLGJMGEF_OFFSET UNITYSDK_OFFSET(0x1F39C0C0)
#define CHKEGIGCOAN_PFIMLFPCINP_OFFSET UNITYSDK_OFFSET(0x1F39C2E0)
#define CHKEGIGCOAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F39C0B0)

inline static constexpr unsigned int CHKEGIGCOAN_TypeDefinitionIndex = 8080;

class CHKEGIGCOAN : public ::System::Object
{
public:
	::UnityEngine::Color ENBABAHMOED; // 0x10
	::System::Int32 HDPLPOBBFIJ; // 0x20
	::CHKEGIGCOAN_CGMEPLFKIED POJKOPGOHNB; // 0x24
	::System::Boolean LKAILFHOHGN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKEGIGCOAN__CTOR_OFFSET))(this);
	}

	static ::CHKEGIGCOAN* ELBOLGJMGEF(::UnityEngine::Color JBBFCGAMDHI)
	{
		return ((::CHKEGIGCOAN*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + CHKEGIGCOAN_ELBOLGJMGEF_OFFSET))(JBBFCGAMDHI);
	}

	static ::CHKEGIGCOAN* ECEBDPJEKNN(::System::Boolean FOFIDPHMGBE)
	{
		return ((::CHKEGIGCOAN*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CHKEGIGCOAN_ECEBDPJEKNN_OFFSET))(FOFIDPHMGBE);
	}

	::System::Void BDMPFHKILCB(::BNENHEDNODF* EOBMPPJGEIE)
	{
		return ((::System::Void(*)(::PVOID, ::BNENHEDNODF*))((::PBYTE)hIl2Cpp + CHKEGIGCOAN_BDMPFHKILCB_OFFSET))(this, EOBMPPJGEIE);
	}

	static ::CHKEGIGCOAN* PFIMLFPCINP(::System::Int32 FNALCEABMMP)
	{
		return ((::CHKEGIGCOAN*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CHKEGIGCOAN_PFIMLFPCINP_OFFSET))(FNALCEABMMP);
	}
};
