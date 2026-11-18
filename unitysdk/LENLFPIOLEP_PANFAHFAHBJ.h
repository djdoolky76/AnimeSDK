#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILineupSelectContext; }

#define LENLFPIOLEP_PANFAHFAHBJ_OKJFHCPMPPE_OFFSET UNITYSDK_OFFSET(0x15184450)
#define LENLFPIOLEP_PANFAHFAHBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15184440)

inline static constexpr unsigned int LENLFPIOLEP_PANFAHFAHBJ_TypeDefinitionIndex = 73420;

class LENLFPIOLEP_PANFAHFAHBJ : public ::System::Object
{
public:
	::MoleMole::UILineupSelectContext* AAOCANGHBDG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLFPIOLEP_PANFAHFAHBJ__CTOR_OFFSET))(this);
	}

	::System::Void OKJFHCPMPPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLFPIOLEP_PANFAHFAHBJ_OKJFHCPMPPE_OFFSET))(this);
	}
};
