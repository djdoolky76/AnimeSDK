#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHOPFINDFGK;
class PJNLCKLGOGF;

#define EACCOEMPDFK_EMEJHGDBEPC_KOBMGIKOFBA_OFFSET UNITYSDK_OFFSET(0x20008250)
#define EACCOEMPDFK_EMEJHGDBEPC__CTOR_OFFSET UNITYSDK_OFFSET(0x20008240)

inline static constexpr unsigned int EACCOEMPDFK_EMEJHGDBEPC_TypeDefinitionIndex = 96487;

class EACCOEMPDFK_EMEJHGDBEPC : public ::System::Object
{
public:
	::PJNLCKLGOGF* KEACIMLDDPP; // 0x10
	::CHOPFINDFGK* FNIOJLHMOMN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOEMPDFK_EMEJHGDBEPC__CTOR_OFFSET))(this);
	}

	::System::Void KOBMGIKOFBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOEMPDFK_EMEJHGDBEPC_KOBMGIKOFBA_OFFSET))(this);
	}
};
