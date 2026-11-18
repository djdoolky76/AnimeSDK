#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace MoleMole { class UIMainCityMessageBtnWidgetController; }
template <typename T> class MEKABAIJMNM_1;

#define AHPJBLCEBBJ_KGMBDLPNMGH_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x12CF6870)
#define AHPJBLCEBBJ_KGMBDLPNMGH__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF68C0)

inline static constexpr unsigned int AHPJBLCEBBJ_KGMBDLPNMGH_TypeDefinitionIndex = 45032;

class AHPJBLCEBBJ_KGMBDLPNMGH : public ::PIOMHDMPINF
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIMainCityMessageBtnWidgetController*>* JENFPEJCALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPJBLCEBBJ_KGMBDLPNMGH__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPJBLCEBBJ_KGMBDLPNMGH_LBJEOHBBBPN_OFFSET))(this);
	}
};
