#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class DDALEBPHEMD;
class GDPMKMIPEMB;
class NMNBCJDFDAB;
namespace System { class Action; }

#define GDPMKMIPEMB_EMKHHDHJFEH_FONLOBLGDJL_OFFSET UNITYSDK_OFFSET(0x125C7BD0)
#define GDPMKMIPEMB_EMKHHDHJFEH_GJDCKNMCBEN_OFFSET UNITYSDK_OFFSET(0x125C7AE0)
#define GDPMKMIPEMB_EMKHHDHJFEH__CTOR_OFFSET UNITYSDK_OFFSET(0x125C7AD0)

inline static constexpr unsigned int GDPMKMIPEMB_EMKHHDHJFEH_TypeDefinitionIndex = 87782;

class GDPMKMIPEMB_EMKHHDHJFEH : public ::System::Object
{
public:
	::NMNBCJDFDAB* OFDKNLCFCPL; // 0x10
	::DDALEBPHEMD* ELEIACDBIPL; // 0x18
	::GDPMKMIPEMB* KLHPEBKNIFB; // 0x20
	::System::Action* CILGAJDJOII; // 0x28
	::MoleMole::HollowChessboard::HollowCell ACHBBPJIBIE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPMKMIPEMB_EMKHHDHJFEH__CTOR_OFFSET))(this);
	}

	::System::Void GJDCKNMCBEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPMKMIPEMB_EMKHHDHJFEH_GJDCKNMCBEN_OFFSET))(this);
	}

	::System::Void FONLOBLGDJL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPMKMIPEMB_EMKHHDHJFEH_FONLOBLGDJL_OFFSET))(this);
	}
};
