#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIFontSize; }
namespace System { class Action; }

#define JHAKIJFJMLI_LALOLNCNMIH_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x19812050)
#define JHAKIJFJMLI_LALOLNCNMIH__CTOR_OFFSET UNITYSDK_OFFSET(0x19812040)

inline static constexpr unsigned int JHAKIJFJMLI_LALOLNCNMIH_TypeDefinitionIndex = 61874;

class JHAKIJFJMLI_LALOLNCNMIH : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHAKIJFJMLI_LALOLNCNMIH__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigUIFontSize* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIFontSize*))((::PBYTE)hIl2Cpp + JHAKIJFJMLI_LALOLNCNMIH_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
