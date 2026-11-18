#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGPBDIEHGOO;
namespace MoleMole { class TextureSheetAnimCurveParam; }
namespace System { class Action; }

#define GGPBDIEHGOO_LHJKABENOEO_AOJLHFJHOFC_OFFSET UNITYSDK_OFFSET(0x13DD6B60)
#define GGPBDIEHGOO_LHJKABENOEO_HBKKBBNIEOI_OFFSET UNITYSDK_OFFSET(0x13DD6C30)
#define GGPBDIEHGOO_LHJKABENOEO__CTOR_OFFSET UNITYSDK_OFFSET(0x13DD6B50)

inline static constexpr unsigned int GGPBDIEHGOO_LHJKABENOEO_TypeDefinitionIndex = 68853;

class GGPBDIEHGOO_LHJKABENOEO : public ::System::Object
{
public:
	::GGPBDIEHGOO* KLHPEBKNIFB; // 0x10
	::System::Action* OCIKNBPALGG; // 0x18
	::MoleMole::TextureSheetAnimCurveParam* ALLOPLHJOMK; // 0x20
	::System::Int32 DBHFIJGFPOK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPBDIEHGOO_LHJKABENOEO__CTOR_OFFSET))(this);
	}

	::System::Void AOJLHFJHOFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPBDIEHGOO_LHJKABENOEO_AOJLHFJHOFC_OFFSET))(this);
	}

	::System::Void HBKKBBNIEOI(::System::Single HACJFKBLODH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GGPBDIEHGOO_LHJKABENOEO_HBKKBBNIEOI_OFFSET))(this, HACJFKBLODH);
	}
};
