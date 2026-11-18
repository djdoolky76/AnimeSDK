#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EACCOEMPDFK_CDANMHJMGGH;
class PHMINMBMMHE;

#define EACCOEMPDFK_DEBKELBBLHI_EKBGJODMHIN_OFFSET UNITYSDK_OFFSET(0x1EB6D290)
#define EACCOEMPDFK_DEBKELBBLHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6D280)

inline static constexpr unsigned int EACCOEMPDFK_DEBKELBBLHI_TypeDefinitionIndex = 96488;

class EACCOEMPDFK_DEBKELBBLHI : public ::System::Object
{
public:
	::PHMINMBMMHE* MFOMPJFNPPL; // 0x10
	::EACCOEMPDFK_CDANMHJMGGH* EEMOEMFLABI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOEMPDFK_DEBKELBBLHI__CTOR_OFFSET))(this);
	}

	::System::Void EKBGJODMHIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOEMPDFK_DEBKELBBLHI_EKBGJODMHIN_OFFSET))(this);
	}
};
