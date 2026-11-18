#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace MoleMole { class UIBigScenePersonalOutWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class MEKABAIJMNM_1;

#define AMIFODDPLBB_ONLODGDEOJK_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x12D08D60)
#define AMIFODDPLBB_ONLODGDEOJK__CTOR_OFFSET UNITYSDK_OFFSET(0x12D08EB0)

inline static constexpr unsigned int AMIFODDPLBB_ONLODGDEOJK_TypeDefinitionIndex = 55741;

class AMIFODDPLBB_ONLODGDEOJK : public ::PIOMHDMPINF
{
public:
	::UnityEngine::GameObject* NMNEBDNDEFO; // 0x10
	::MEKABAIJMNM_1<::MoleMole::UIBigScenePersonalOutWidgetController*>* LFCEENDJEMO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFODDPLBB_ONLODGDEOJK__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFODDPLBB_ONLODGDEOJK_LBJEOHBBBPN_OFFSET))(this);
	}
};
