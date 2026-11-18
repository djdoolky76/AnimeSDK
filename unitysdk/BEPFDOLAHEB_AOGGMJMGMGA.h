#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BEPFDOLAHEB;
class HLBCEIJMFKD;

#define BEPFDOLAHEB_AOGGMJMGMGA_EEHOIPNMKOK_OFFSET UNITYSDK_OFFSET(0x14386210)
#define BEPFDOLAHEB_AOGGMJMGMGA__CTOR_OFFSET UNITYSDK_OFFSET(0x14386200)

inline static constexpr unsigned int BEPFDOLAHEB_AOGGMJMGMGA_TypeDefinitionIndex = 39536;

class BEPFDOLAHEB_AOGGMJMGMGA : public ::System::Object
{
public:
	::HLBCEIJMFKD* IBDADOPEBFC; // 0x10
	::BEPFDOLAHEB* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPFDOLAHEB_AOGGMJMGMGA__CTOR_OFFSET))(this);
	}

	::System::Void EEHOIPNMKOK(::System::Int32 PPKEDEIDCGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEPFDOLAHEB_AOGGMJMGMGA_EEHOIPNMKOK_OFFSET))(this, PPKEDEIDCGD);
	}
};
