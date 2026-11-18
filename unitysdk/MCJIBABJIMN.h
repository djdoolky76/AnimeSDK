#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBACBMHNGBL.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define MCJIBABJIMN_CCNCFOBJCHG_OFFSET UNITYSDK_OFFSET(0x11F30350)
#define MCJIBABJIMN_HLGMHAJCAIO_OFFSET UNITYSDK_OFFSET(0x11F31500)
#define MCJIBABJIMN_LCMAHAGIHOJ_OFFSET UNITYSDK_OFFSET(0x11F31120)
#define MCJIBABJIMN_MMJNFKGOADK_OFFSET UNITYSDK_OFFSET(0x11F31710)
#define MCJIBABJIMN__CTOR_OFFSET UNITYSDK_OFFSET(0x11F30340)

inline static constexpr unsigned int MCJIBABJIMN_TypeDefinitionIndex = 91068;

class MCJIBABJIMN : public ::BBACBMHNGBL
{
public:
	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* NKAKNBFNKAN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + MCJIBABJIMN__CTOR_OFFSET))(this, NKAKNBFNKAN);
	}

	::System::Void CCNCFOBJCHG(::System::String* MCOHLHMKLIP, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MCJIBABJIMN_CCNCFOBJCHG_OFFSET))(this, MCOHLHMKLIP, FLMNJOFKIKI);
	}

	::System::Void MMJNFKGOADK(::System::String* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MCJIBABJIMN_MMJNFKGOADK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean HLGMHAJCAIO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJIBABJIMN_HLGMHAJCAIO_OFFSET))(this);
	}

	::System::Void LCMAHAGIHOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJIBABJIMN_LCMAHAGIHOJ_OFFSET))(this);
	}
};
