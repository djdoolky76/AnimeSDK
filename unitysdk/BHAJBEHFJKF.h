#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBACBMHNGBL.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define BHAJBEHFJKF_CCNCFOBJCHG_OFFSET UNITYSDK_OFFSET(0x14250450)
#define BHAJBEHFJKF_MMJNFKGOADK_OFFSET UNITYSDK_OFFSET(0x14250B10)
#define BHAJBEHFJKF__CTOR_OFFSET UNITYSDK_OFFSET(0x14250440)

inline static constexpr unsigned int BHAJBEHFJKF_TypeDefinitionIndex = 39241;

class BHAJBEHFJKF : public ::BBACBMHNGBL
{
public:
	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* NKAKNBFNKAN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + BHAJBEHFJKF__CTOR_OFFSET))(this, NKAKNBFNKAN);
	}

	::System::Void CCNCFOBJCHG(::System::String* MCOHLHMKLIP, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BHAJBEHFJKF_CCNCFOBJCHG_OFFSET))(this, MCOHLHMKLIP, FLMNJOFKIKI);
	}

	::System::Void MMJNFKGOADK(::System::String* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BHAJBEHFJKF_MMJNFKGOADK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
