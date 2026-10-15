#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBIMENNAEIE.h"
#include "unitysdk/NHHMEPILLHL.h"
class BGCFHJFJGBI;
namespace RPG::Client { class IRogueMiracleInfo; }

#define DOLNICOMJJM_CTOR_OFFSET UNITYSDK_OFFSET(0x11FEAFC0)
#define DOLNICOMJJM_JCEPADMLFPN_OFFSET UNITYSDK_OFFSET(0x11FEAFD0)

inline static constexpr unsigned int DOLNICOMJJM_TypeDefinitionIndex = 67091;

	class DOLNICOMJJM : public ::EBIMENNAEIE
	{
	public:
		::BGCFHJFJGBI* EOGBDMMODCM; // 0x20
		::RPG::Client::IRogueMiracleInfo* CEMHIBCKNHF; // 0x28
		::System::Void _ctor(::NHHMEPILLHL a1, ::RPG::Client::IRogueMiracleInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::RPG::Client::IRogueMiracleInfo*))((::PBYTE)hIl2Cpp + DOLNICOMJJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JCEPADMLFPN(::BGCFHJFJGBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGCFHJFJGBI*))((::PBYTE)hIl2Cpp + DOLNICOMJJM_JCEPADMLFPN_OFFSET))(this, a1);
		}

	};
