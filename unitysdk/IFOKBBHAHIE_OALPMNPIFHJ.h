#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IFOKBBHAHIE_OALPMNPIFHJ_FPFFEOLJDBK_OFFSET UNITYSDK_OFFSET(0x1A462790)
#define IFOKBBHAHIE_OALPMNPIFHJ_IKPPFAGPFLM_OFFSET UNITYSDK_OFFSET(0x1A4627A0)
#define IFOKBBHAHIE_OALPMNPIFHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A462780)

inline static constexpr unsigned int IFOKBBHAHIE_OALPMNPIFHJ_TypeDefinitionIndex = 67423;

class IFOKBBHAHIE_OALPMNPIFHJ : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_OALPMNPIFHJ__CTOR_OFFSET))(this);
	}

	::System::Void FPFFEOLJDBK(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_OALPMNPIFHJ_FPFFEOLJDBK_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void IKPPFAGPFLM(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_OALPMNPIFHJ_IKPPFAGPFLM_OFFSET))(this, PIIPCLCCOIG);
	}
};
