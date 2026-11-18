#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBACBMHNGBL.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define FJCKMBONBJM_CCNCFOBJCHG_OFFSET UNITYSDK_OFFSET(0x15E66C50)
#define FJCKMBONBJM_MMJNFKGOADK_OFFSET UNITYSDK_OFFSET(0x15E673F0)
#define FJCKMBONBJM__CTOR_OFFSET UNITYSDK_OFFSET(0x15E66C40)

inline static constexpr unsigned int FJCKMBONBJM_TypeDefinitionIndex = 38313;

class FJCKMBONBJM : public ::BBACBMHNGBL
{
public:
	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* NKAKNBFNKAN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + FJCKMBONBJM__CTOR_OFFSET))(this, NKAKNBFNKAN);
	}

	::System::Void CCNCFOBJCHG(::System::String* MCOHLHMKLIP, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FJCKMBONBJM_CCNCFOBJCHG_OFFSET))(this, MCOHLHMKLIP, FLMNJOFKIKI);
	}

	::System::Void MMJNFKGOADK(::System::String* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FJCKMBONBJM_MMJNFKGOADK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
