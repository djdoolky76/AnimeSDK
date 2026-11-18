#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace MoleMole { class UIMainCityMiniMenuWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class MEKABAIJMNM_1;

#define LKONEILBEJO_NCDBDMGMNAO_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x158F4740)
#define LKONEILBEJO_NCDBDMGMNAO__CTOR_OFFSET UNITYSDK_OFFSET(0x158F4790)

inline static constexpr unsigned int LKONEILBEJO_NCDBDMGMNAO_TypeDefinitionIndex = 82999;

class LKONEILBEJO_NCDBDMGMNAO : public ::PIOMHDMPINF
{
public:
	::UnityEngine::GameObject* OFAEPBKEBEE; // 0x10
	::MEKABAIJMNM_1<::MoleMole::UIMainCityMiniMenuWidgetController*>* PIIBFMJEEAF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKONEILBEJO_NCDBDMGMNAO__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKONEILBEJO_NCDBDMGMNAO_LBJEOHBBBPN_OFFSET))(this);
	}
};
