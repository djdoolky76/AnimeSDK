#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBACBMHNGBL.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define MABFFHEHOHA_CCNCFOBJCHG_OFFSET UNITYSDK_OFFSET(0x13D102E0)
#define MABFFHEHOHA_MMJNFKGOADK_OFFSET UNITYSDK_OFFSET(0x13D10AD0)
#define MABFFHEHOHA__CTOR_OFFSET UNITYSDK_OFFSET(0x13D102D0)

inline static constexpr unsigned int MABFFHEHOHA_TypeDefinitionIndex = 38619;

class MABFFHEHOHA : public ::BBACBMHNGBL
{
public:
	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* NKAKNBFNKAN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + MABFFHEHOHA__CTOR_OFFSET))(this, NKAKNBFNKAN);
	}

	::System::Void CCNCFOBJCHG(::System::String* MCOHLHMKLIP, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MABFFHEHOHA_CCNCFOBJCHG_OFFSET))(this, MCOHLHMKLIP, FLMNJOFKIKI);
	}

	::System::Void MMJNFKGOADK(::System::String* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MABFFHEHOHA_MMJNFKGOADK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
