#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEIICODCJNC.h"

class ACMODDMMJJF;
class LGINJIKKBJA;
namespace UnityEngine { class Animation; }

#define DGFFKCBIEFA_CLHCBKJMOIB_OFFSET UNITYSDK_OFFSET(0x13E4B7B0)
#define DGFFKCBIEFA_DDBCAMOFNGP_OFFSET UNITYSDK_OFFSET(0x13E4B710)
#define DGFFKCBIEFA_FIPNGDCEALH_OFFSET UNITYSDK_OFFSET(0x13E4B2B0)
#define DGFFKCBIEFA_FNPNONCAGIP_OFFSET UNITYSDK_OFFSET(0x13E4B680)
#define DGFFKCBIEFA_GMMMAKECOPN_OFFSET UNITYSDK_OFFSET(0x13E4B480)
#define DGFFKCBIEFA_HINDHJBMGLE_OFFSET UNITYSDK_OFFSET(0x13E4B3D0)
#define DGFFKCBIEFA_LDAOBIKELKO_OFFSET UNITYSDK_OFFSET(0x13E4B4B0)
#define DGFFKCBIEFA_OGJEJIHLOJP_OFFSET UNITYSDK_OFFSET(0x13E4B3B0)
#define DGFFKCBIEFA_PKOOMIICKNE_OFFSET UNITYSDK_OFFSET(0x13E4B390)
#define DGFFKCBIEFA__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4B4A0)

inline static constexpr unsigned int DGFFKCBIEFA_TypeDefinitionIndex = 88097;

class DGFFKCBIEFA : public ::AEIICODCJNC
{
public:
	::ACMODDMMJJF* KMMKMGDHCOI; // 0x10

	::System::Void _ctor(::ACMODDMMJJF* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::ACMODDMMJJF*))((::PBYTE)hIl2Cpp + DGFFKCBIEFA__CTOR_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void FIPNGDCEALH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFFKCBIEFA_FIPNGDCEALH_OFFSET))(this);
	}

	::LGINJIKKBJA* PKOOMIICKNE()
	{
		return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFFKCBIEFA_PKOOMIICKNE_OFFSET))(this);
	}

	::UnityEngine::Animation* OGJEJIHLOJP()
	{
		return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFFKCBIEFA_OGJEJIHLOJP_OFFSET))(this);
	}

	::System::Void HINDHJBMGLE(::System::Boolean EBFCACIEKBC, ::System::Boolean IJFHKDLHBMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DGFFKCBIEFA_HINDHJBMGLE_OFFSET))(this, EBFCACIEKBC, IJFHKDLHBMH);
	}

	::UnityEngine::Animation* GMMMAKECOPN()
	{
		return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFFKCBIEFA_GMMMAKECOPN_OFFSET))(this);
	}

	::System::Void LDAOBIKELKO(::System::Boolean HCOIINOJPFN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGFFKCBIEFA_LDAOBIKELKO_OFFSET))(this, HCOIINOJPFN);
	}

	::System::Void FNPNONCAGIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFFKCBIEFA_FNPNONCAGIP_OFFSET))(this);
	}

	::System::Void DDBCAMOFNGP(::System::Boolean MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DGFFKCBIEFA_DDBCAMOFNGP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void CLHCBKJMOIB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFFKCBIEFA_CLHCBKJMOIB_OFFSET))(this);
	}
};
