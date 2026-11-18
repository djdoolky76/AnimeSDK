#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define BGJCOEKKMBG_AHIPGGCDMAM_HPCBNFBJKNP_OFFSET UNITYSDK_OFFSET(0x14ECE1F0)
#define BGJCOEKKMBG_AHIPGGCDMAM_PGIDPAOOLLJ_OFFSET UNITYSDK_OFFSET(0x12684FD0)
#define BGJCOEKKMBG_AHIPGGCDMAM__CTOR_OFFSET UNITYSDK_OFFSET(0x12684FC0)

inline static constexpr unsigned int BGJCOEKKMBG_AHIPGGCDMAM_TypeDefinitionIndex = 46536;

class BGJCOEKKMBG_AHIPGGCDMAM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Int32 NNLADMOGMCK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_AHIPGGCDMAM__CTOR_OFFSET))(this);
	}

	::System::Void PGIDPAOOLLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_AHIPGGCDMAM_PGIDPAOOLLJ_OFFSET))(this);
	}

	::System::Void HPCBNFBJKNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_AHIPGGCDMAM_HPCBNFBJKNP_OFFSET))(this);
	}
};
