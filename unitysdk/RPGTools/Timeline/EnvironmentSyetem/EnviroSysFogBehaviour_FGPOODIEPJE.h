#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDIAEAMFDIB;

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_FGPOODIEPJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90FED0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_FGPOODIEPJE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1D9102A0)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	inline static constexpr unsigned int EnviroSysFogBehaviour_FGPOODIEPJE_TypeDefinitionIndex = 49680;

	class EnviroSysFogBehaviour_FGPOODIEPJE : public ::System::Object
	{
	public:
		::CDIAEAMFDIB* FKMOKGOBEHJ; // 0x10
		::System::Int32 DPBJJNJDKJL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_FGPOODIEPJE_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_FGPOODIEPJE_KHGIKBFDLFB_OFFSET))(this);
		}

	};
}
