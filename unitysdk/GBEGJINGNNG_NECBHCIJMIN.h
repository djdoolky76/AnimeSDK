#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoEventTrigger; }
namespace System { class Action; }
namespace UnityEngine::UI { class Image; }

#define GBEGJINGNNG_NECBHCIJMIN_AINKOMDFELI_OFFSET UNITYSDK_OFFSET(0x156FF950)
#define GBEGJINGNNG_NECBHCIJMIN_BPIDHEMCPCK_OFFSET UNITYSDK_OFFSET(0x156FFE10)
#define GBEGJINGNNG_NECBHCIJMIN_JEGIJLBCNMN_OFFSET UNITYSDK_OFFSET(0x156FFDB0)
#define GBEGJINGNNG_NECBHCIJMIN__CTOR_OFFSET UNITYSDK_OFFSET(0x156FBF40)

inline static constexpr unsigned int GBEGJINGNNG_NECBHCIJMIN_TypeDefinitionIndex = 59381;

class GBEGJINGNNG_NECBHCIJMIN : public ::System::Object
{
public:
	::UnityEngine::UI::Image* BPNLIDMMFML; // 0x10
	::MoleMole::MonoEventTrigger* IDBEDEIKJLL; // 0x18

	::System::Void _ctor(::UnityEngine::UI::Image* KKKFDIEJNPK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NECBHCIJMIN__CTOR_OFFSET))(this, KKKFDIEJNPK);
	}

	::System::Void AINKOMDFELI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NECBHCIJMIN_AINKOMDFELI_OFFSET))(this);
	}

	::System::Void JEGIJLBCNMN(::System::Boolean LDNCGMNHANO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NECBHCIJMIN_JEGIJLBCNMN_OFFSET))(this, LDNCGMNHANO);
	}

	::System::Void BPIDHEMCPCK(::System::Action* BFOMBFMONJG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GBEGJINGNNG_NECBHCIJMIN_BPIDHEMCPCK_OFFSET))(this, BFOMBFMONJG);
	}
};
