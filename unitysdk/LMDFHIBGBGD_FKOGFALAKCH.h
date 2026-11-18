#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LMDFHIBGBGD;

#define LMDFHIBGBGD_FKOGFALAKCH_AIKACHFJAFD_OFFSET UNITYSDK_OFFSET(0x13D07850)
#define LMDFHIBGBGD_FKOGFALAKCH_BIBMIFJDPLI_OFFSET UNITYSDK_OFFSET(0x13D078B0)
#define LMDFHIBGBGD_FKOGFALAKCH_JFEBCLALPNE_OFFSET UNITYSDK_OFFSET(0x13D07910)
#define LMDFHIBGBGD_FKOGFALAKCH__CTOR_OFFSET UNITYSDK_OFFSET(0x13D07840)

inline static constexpr unsigned int LMDFHIBGBGD_FKOGFALAKCH_TypeDefinitionIndex = 79904;

class LMDFHIBGBGD_FKOGFALAKCH : public ::System::Object
{
public:
	::LMDFHIBGBGD* KLHPEBKNIFB; // 0x10
	::System::Int32 FKMHMOELCIO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDFHIBGBGD_FKOGFALAKCH__CTOR_OFFSET))(this);
	}

	::System::Void AIKACHFJAFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDFHIBGBGD_FKOGFALAKCH_AIKACHFJAFD_OFFSET))(this);
	}

	::System::Void BIBMIFJDPLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDFHIBGBGD_FKOGFALAKCH_BIBMIFJDPLI_OFFSET))(this);
	}

	::System::Void JFEBCLALPNE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDFHIBGBGD_FKOGFALAKCH_JFEBCLALPNE_OFFSET))(this);
	}
};
