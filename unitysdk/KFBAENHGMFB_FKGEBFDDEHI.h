#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFBAENHGMFB_FKGEBFDDEHI_JPHCMIKFCPI_OFFSET UNITYSDK_OFFSET(0x1A2C5100)
#define KFBAENHGMFB_FKGEBFDDEHI_OIGCADBGGEB_OFFSET UNITYSDK_OFFSET(0x1A2C5110)
#define KFBAENHGMFB_FKGEBFDDEHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C50F0)

inline static constexpr unsigned int KFBAENHGMFB_FKGEBFDDEHI_TypeDefinitionIndex = 78595;

class KFBAENHGMFB_FKGEBFDDEHI : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18
	::System::UInt32 HHEGANCPILH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_FKGEBFDDEHI__CTOR_OFFSET))(this);
	}

	::System::Void JPHCMIKFCPI(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_FKGEBFDDEHI_JPHCMIKFCPI_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void OIGCADBGGEB(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_FKGEBFDDEHI_OIGCADBGGEB_OFFSET))(this, PIIPCLCCOIG);
	}
};
