#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define BGJCOEKKMBG_HGFBPLFBMEG_JBEAGFFCJBG_OFFSET UNITYSDK_OFFSET(0x169F13B0)
#define BGJCOEKKMBG_HGFBPLFBMEG__CTOR_OFFSET UNITYSDK_OFFSET(0x169F13A0)

inline static constexpr unsigned int BGJCOEKKMBG_HGFBPLFBMEG_TypeDefinitionIndex = 46533;

class BGJCOEKKMBG_HGFBPLFBMEG : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_HGFBPLFBMEG__CTOR_OFFSET))(this);
	}

	::System::Void JBEAGFFCJBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_HGFBPLFBMEG_JBEAGFFCJBG_OFFSET))(this);
	}
};
