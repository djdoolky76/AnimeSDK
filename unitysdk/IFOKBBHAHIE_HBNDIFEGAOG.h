#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IFOKBBHAHIE_HBNDIFEGAOG_ABAOEKDGKJP_OFFSET UNITYSDK_OFFSET(0x12EA9CA0)
#define IFOKBBHAHIE_HBNDIFEGAOG_ENIGFCLIOIF_OFFSET UNITYSDK_OFFSET(0x12EA9CB0)
#define IFOKBBHAHIE_HBNDIFEGAOG__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA9C90)

inline static constexpr unsigned int IFOKBBHAHIE_HBNDIFEGAOG_TypeDefinitionIndex = 67443;

class IFOKBBHAHIE_HBNDIFEGAOG : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_HBNDIFEGAOG__CTOR_OFFSET))(this);
	}

	::System::Void ABAOEKDGKJP(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_HBNDIFEGAOG_ABAOEKDGKJP_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void ENIGFCLIOIF(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_HBNDIFEGAOG_ENIGFCLIOIF_OFFSET))(this, PIIPCLCCOIG);
	}
};
