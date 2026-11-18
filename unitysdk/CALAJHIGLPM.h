#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECALIGBJBNA.h"
#include "unitysdk/NEBMLAKOAPP.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigNewbie_HighLightData; }
namespace MoleMole { class ConfigNewbie_TargetPath; }
namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define CALAJHIGLPM_BAIIJJFBHCA_OFFSET UNITYSDK_OFFSET(0x1685F040)
#define CALAJHIGLPM_BHAIPLKBKEN_OFFSET UNITYSDK_OFFSET(0x1685F2E0)
#define CALAJHIGLPM_CMBBEEADFMH_OFFSET UNITYSDK_OFFSET(0x1685F2C0)
#define CALAJHIGLPM_HAGNFFBIFLD_OFFSET UNITYSDK_OFFSET(0x1685FB60)
#define CALAJHIGLPM_HOLDNGCHMPI_OFFSET UNITYSDK_OFFSET(0x1685F2A0)
#define CALAJHIGLPM_JAOKABAIAGG_OFFSET UNITYSDK_OFFSET(0x1685F2D0)
#define CALAJHIGLPM_JMFILENAOPM_OFFSET UNITYSDK_OFFSET(0x1685F2B0)
#define CALAJHIGLPM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1685EF70)
#define CALAJHIGLPM__CTOR_OFFSET UNITYSDK_OFFSET(0x1685EEB0)

inline static constexpr unsigned int CALAJHIGLPM_TypeDefinitionIndex = 73551;

class CALAJHIGLPM : public ::System::Object
{
public:
	::MoleMole::UIBaseController* _LHGDKOJCDNN_k__BackingField; // 0x10
	::UnityEngine::UI::Extension::UIButtonBase* IHHANMBFFNC; // 0x18
	::MoleMole::UIBaseController* FHMMBGECDDK; // 0x20
	::MoleMole::ConfigNewbie_TargetPath* NOIIOJEKIKM; // 0x28
	::UnityEngine::GameObject* CFCNNFMLGOC; // 0x30
	::System::String* HIMFBEPDNPN; // 0x38
	::System::Boolean PHEEOFBPPLG; // 0x40
	::System::Boolean FKGOEEEDBBB; // 0x41
	::System::Boolean FHMBLELANOK; // 0x42
	::System::Boolean _HJLFINEOHIB_k__BackingField; // 0x43
	::NEBMLAKOAPP OBNIAHNMHPF; // 0x44

	::System::Void _ctor(::MoleMole::ConfigNewbie_TargetPath* DFMKILICPFB, ::MoleMole::UIBaseController* DBEGNAMMHKA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigNewbie_TargetPath*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CALAJHIGLPM__CTOR_OFFSET))(this, DFMKILICPFB, DBEGNAMMHKA);
	}

	::System::Void _ctor_1(::MoleMole::ConfigNewbie_HighLightData* DFMKILICPFB, ::MoleMole::UIBaseController* DBEGNAMMHKA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightData*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CALAJHIGLPM__CTOR_1_OFFSET))(this, DFMKILICPFB, DBEGNAMMHKA);
	}

	::System::Boolean BAIIJJFBHCA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CALAJHIGLPM_BAIIJJFBHCA_OFFSET))(this);
	}

	::System::Void HOLDNGCHMPI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CALAJHIGLPM_HOLDNGCHMPI_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::ConfigNewbie_TargetPath* JMFILENAOPM()
	{
		return ((::MoleMole::ConfigNewbie_TargetPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + CALAJHIGLPM_JMFILENAOPM_OFFSET))(this);
	}

	::System::Boolean CMBBEEADFMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CALAJHIGLPM_CMBBEEADFMH_OFFSET))(this);
	}

	::MoleMole::UIBaseController* JAOKABAIAGG()
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CALAJHIGLPM_JAOKABAIAGG_OFFSET))(this);
	}

	::System::Boolean BHAIPLKBKEN(::ECALIGBJBNA& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::ECALIGBJBNA&))((::PBYTE)hIl2Cpp + CALAJHIGLPM_BHAIPLKBKEN_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::Void HAGNFFBIFLD(::MoleMole::UIBaseController* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CALAJHIGLPM_HAGNFFBIFLD_OFFSET))(this, EGEGIMGMJHN);
	}
};
