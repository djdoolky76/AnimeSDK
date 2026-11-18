#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CCGHDFBDLKD_GPHOBGIHOIM_OFFSET UNITYSDK_OFFSET(0x128C50A0)
#define CCGHDFBDLKD__CTOR_OFFSET UNITYSDK_OFFSET(0x128C5090)

inline static constexpr unsigned int CCGHDFBDLKD_TypeDefinitionIndex = 50812;

class CCGHDFBDLKD : public ::System::Object
{
public:
	::System::Action* JLHPCEJBDGH; // 0x10
	::System::Int32 OGFPEPEEHLP; // 0x18
	::System::Boolean DIGCFGDPGKE; // 0x1C

	::System::Void _ctor(::System::Action* ECDELIEOAHB, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CCGHDFBDLKD__CTOR_OFFSET))(this, ECDELIEOAHB, JHFKDGBCOBA);
	}

	::System::Void GPHOBGIHOIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHDFBDLKD_GPHOBGIHOIM_OFFSET))(this);
	}
};
