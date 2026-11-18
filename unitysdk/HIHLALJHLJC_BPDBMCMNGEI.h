#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HIHLALJHLJC_LKAJOKLPNBE;
namespace MoleMole { class ConfigDynamicOverrideWeather; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIHLALJHLJC_BPDBMCMNGEI_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x16CF3FC0)
#define HIHLALJHLJC_BPDBMCMNGEI__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF3FB0)

inline static constexpr unsigned int HIHLALJHLJC_BPDBMCMNGEI_TypeDefinitionIndex = 87561;

class HIHLALJHLJC_BPDBMCMNGEI : public ::System::Object
{
public:
	::System::Int32 GIBDHABECBD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHLALJHLJC_BPDBMCMNGEI__CTOR_OFFSET))(this);
	}

	::HIHLALJHLJC_LKAJOKLPNBE* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicOverrideWeather*>* KEJJKECGLOP)
	{
		return ((::HIHLALJHLJC_LKAJOKLPNBE*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicOverrideWeather*>*))((::PBYTE)hIl2Cpp + HIHLALJHLJC_BPDBMCMNGEI_FLIAEJGDMLI_OFFSET))(this, KEJJKECGLOP);
	}
};
