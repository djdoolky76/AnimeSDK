#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFHOEGBMPKN;
namespace MoleMole { class RadarStateChangeImageConfig; }
template <typename T> class BFMLEHMAGAK_1;

#define CACLMPKMPHM_BIBKKBNOHIC_OFFSET UNITYSDK_OFFSET(0x16A07E40)
#define CACLMPKMPHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A07CA0)
#define CACLMPKMPHM__CTOR_OFFSET UNITYSDK_OFFSET(0x16A07B80)

inline static constexpr unsigned int CACLMPKMPHM_TypeDefinitionIndex = 83560;

class CACLMPKMPHM : public ::System::Object
{
public:
	::MoleMole::RadarStateChangeImageConfig* AHMFPFACACD; // 0x10
	::CFHOEGBMPKN* EDKGMLLKLJM; // 0x18
	::BFMLEHMAGAK_1<::System::Boolean>* HFBPONNNLBA; // 0x20

	::System::Void _ctor(::MoleMole::RadarStateChangeImageConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::RadarStateChangeImageConfig*))((::PBYTE)hIl2Cpp + CACLMPKMPHM__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACLMPKMPHM_DISPOSE_OFFSET))(this);
	}

	::System::Boolean BIBKKBNOHIC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CACLMPKMPHM_BIBKKBNOHIC_OFFSET))(this);
	}
};
