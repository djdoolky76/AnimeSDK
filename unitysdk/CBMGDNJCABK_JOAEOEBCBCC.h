#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace MoleMole { class UIMainCityMiniMenuWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class MEKABAIJMNM_1;

#define CBMGDNJCABK_JOAEOEBCBCC_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x16A0BE90)
#define CBMGDNJCABK_JOAEOEBCBCC__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0BEE0)

inline static constexpr unsigned int CBMGDNJCABK_JOAEOEBCBCC_TypeDefinitionIndex = 64240;

class CBMGDNJCABK_JOAEOEBCBCC : public ::PIOMHDMPINF
{
public:
	::UnityEngine::GameObject* OFAEPBKEBEE; // 0x10
	::MEKABAIJMNM_1<::MoleMole::UIMainCityMiniMenuWidgetController*>* PIIBFMJEEAF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMGDNJCABK_JOAEOEBCBCC__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMGDNJCABK_JOAEOEBCBCC_LBJEOHBBBPN_OFFSET))(this);
	}
};
