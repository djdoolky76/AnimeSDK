#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define OFABBAJJIBL_CKHPMFLMDGH_BGOHBHCIGFO_OFFSET UNITYSDK_OFFSET(0xE149410)
#define OFABBAJJIBL_CKHPMFLMDGH_LBCKACGIGPK_OFFSET UNITYSDK_OFFSET(0xE149450)
#define OFABBAJJIBL_CKHPMFLMDGH_ONOCCPLGPPL_OFFSET UNITYSDK_OFFSET(0xE149430)
#define OFABBAJJIBL_CKHPMFLMDGH__CTOR_OFFSET UNITYSDK_OFFSET(0xE149400)

inline static constexpr unsigned int OFABBAJJIBL_CKHPMFLMDGH_TypeDefinitionIndex = 48327;

class OFABBAJJIBL_CKHPMFLMDGH : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFABBAJJIBL_CKHPMFLMDGH__CTOR_OFFSET))(this);
	}

	::System::Void BGOHBHCIGFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFABBAJJIBL_CKHPMFLMDGH_BGOHBHCIGFO_OFFSET))(this);
	}

	::System::Void ONOCCPLGPPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFABBAJJIBL_CKHPMFLMDGH_ONOCCPLGPPL_OFFSET))(this);
	}

	::System::Void LBCKACGIGPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFABBAJJIBL_CKHPMFLMDGH_LBCKACGIGPK_OFFSET))(this);
	}
};
