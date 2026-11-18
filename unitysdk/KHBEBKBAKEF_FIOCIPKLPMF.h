#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KHBEBKBAKEF_DJEBEHNFLLK;
namespace MoleMole { class UIHollowPushBoxGame3DModelController; }

#define KHBEBKBAKEF_FIOCIPKLPMF_OLJBOFELAAP_OFFSET UNITYSDK_OFFSET(0x17654470)
#define KHBEBKBAKEF_FIOCIPKLPMF__CTOR_OFFSET UNITYSDK_OFFSET(0x17654460)

inline static constexpr unsigned int KHBEBKBAKEF_FIOCIPKLPMF_TypeDefinitionIndex = 71731;

class KHBEBKBAKEF_FIOCIPKLPMF : public ::System::Object
{
public:
	::KHBEBKBAKEF_DJEBEHNFLLK* FGBNBFHOKAA; // 0x10
	::MoleMole::UIHollowPushBoxGame3DModelController* ICHPOADPNEG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBEBKBAKEF_FIOCIPKLPMF__CTOR_OFFSET))(this);
	}

	::System::Void OLJBOFELAAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBEBKBAKEF_FIOCIPKLPMF_OLJBOFELAAP_OFFSET))(this);
	}
};
