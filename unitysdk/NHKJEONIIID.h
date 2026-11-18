#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define NHKJEONIIID_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1AE20AB0)
#define NHKJEONIIID_EEDGACHGEAL_OFFSET UNITYSDK_OFFSET(0x1AE20DD0)
#define NHKJEONIIID_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x1AE21050)
#define NHKJEONIIID_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1AE20D80)
#define NHKJEONIIID_PBHMBMCNBKF_OFFSET UNITYSDK_OFFSET(0x1AE20E10)
#define NHKJEONIIID_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1AE20FC0)
#define NHKJEONIIID__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE20AA0)

inline static constexpr unsigned int NHKJEONIIID_TypeDefinitionIndex = 91886;

class NHKJEONIIID : public ::System::Object
{
public:
	::UnityEngine::GameObject* OPDIDCBAPGP; // 0x10
	::UnityEngine::RectTransform* PJAJOFODBDD; // 0x18
	::System::Single HACJFKBLODH; // 0x20
	::System::Single MLKLCEKJGPE; // 0x24
	::UnityEngine::Vector2 BOGPAHGJOJK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKJEONIIID__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::GameObject* JMDHBJMNBCP, ::UnityEngine::RectTransform* PMCLJMMPEEH, ::UnityEngine::RectTransform* JNLBPMKIFNK, ::UnityEngine::Vector2 DICAMPDGIMI, ::System::Single IAPDECBJNKB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + NHKJEONIIID_BBOMJDBNHIC_OFFSET))(this, JMDHBJMNBCP, PMCLJMMPEEH, JNLBPMKIFNK, DICAMPDGIMI, IAPDECBJNKB);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKJEONIIID_NPOLNFDBOOD_OFFSET))(this);
	}

	::UnityEngine::GameObject* EEDGACHGEAL()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKJEONIIID_EEDGACHGEAL_OFFSET))(this);
	}

	::System::Void PBHMBMCNBKF(::UnityEngine::Vector2 PFEIDJKEJOB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NHKJEONIIID_PBHMBMCNBKF_OFFSET))(this, PFEIDJKEJOB);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK, ::UnityEngine::Vector2 PFEIDJKEJOB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NHKJEONIIID_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK, PFEIDJKEJOB);
	}

	::System::Boolean HONMDMHAKNN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKJEONIIID_HONMDMHAKNN_OFFSET))(this);
	}
};
