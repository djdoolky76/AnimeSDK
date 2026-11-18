#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NBPIIFHHEPK_IGJIGJCLNKJ_OFFSET UNITYSDK_OFFSET(0x13B56EB0)
#define NBPIIFHHEPK__CTOR_OFFSET UNITYSDK_OFFSET(0x13B56EA0)

inline static constexpr unsigned int NBPIIFHHEPK_TypeDefinitionIndex = 88914;

class NBPIIFHHEPK : public ::System::Object
{
public:
	::System::Action* JLHPCEJBDGH; // 0x10
	::System::Boolean DIGCFGDPGKE; // 0x18

	::System::Void _ctor(::System::Action* ECDELIEOAHB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NBPIIFHHEPK__CTOR_OFFSET))(this, ECDELIEOAHB);
	}

	::System::Void IGJIGJCLNKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPIIFHHEPK_IGJIGJCLNKJ_OFFSET))(this);
	}
};
