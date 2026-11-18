#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDCKHDEBKKK;
namespace System { class String; }

#define PECOJLPGNBM_JKCBNMOAJJE_OFFSET UNITYSDK_OFFSET(0x17322610)
#define PECOJLPGNBM_LADFBEHMOMH_OFFSET UNITYSDK_OFFSET(0x17322580)
#define PECOJLPGNBM_MHNNIGMCDHP_OFFSET UNITYSDK_OFFSET(0x17322520)
#define PECOJLPGNBM__CTOR_OFFSET UNITYSDK_OFFSET(0x17322510)

inline static constexpr unsigned int PECOJLPGNBM_TypeDefinitionIndex = 57634;

class PECOJLPGNBM : public ::System::Object
{
public:
	::BDCKHDEBKKK* PMIHBDNMHDB; // 0x10
	::System::Boolean JGCECGBEKHA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PECOJLPGNBM__CTOR_OFFSET))(this);
	}

	::System::String* MHNNIGMCDHP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PECOJLPGNBM_MHNNIGMCDHP_OFFSET))(this);
	}

	::System::Boolean LADFBEHMOMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PECOJLPGNBM_LADFBEHMOMH_OFFSET))(this);
	}

	::System::Boolean JKCBNMOAJJE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PECOJLPGNBM_JKCBNMOAJJE_OFFSET))(this);
	}
};
