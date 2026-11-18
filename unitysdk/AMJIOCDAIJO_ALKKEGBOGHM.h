#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMJIOCDAIJO;
namespace MoleMole { class UIHollowEventWidgetChildWindowController; }

#define AMJIOCDAIJO_ALKKEGBOGHM_LLMGBPPDIAD_OFFSET UNITYSDK_OFFSET(0x1820F0E0)
#define AMJIOCDAIJO_ALKKEGBOGHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1820F0D0)

inline static constexpr unsigned int AMJIOCDAIJO_ALKKEGBOGHM_TypeDefinitionIndex = 83692;

class AMJIOCDAIJO_ALKKEGBOGHM : public ::System::Object
{
public:
	::AMJIOCDAIJO* KLHPEBKNIFB; // 0x10
	::MoleMole::UIHollowEventWidgetChildWindowController* IOICKCIIBOL; // 0x18
	::System::Boolean ANAOEPLLBPB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJIOCDAIJO_ALKKEGBOGHM__CTOR_OFFSET))(this);
	}

	::System::Void LLMGBPPDIAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJIOCDAIJO_ALKKEGBOGHM_LLMGBPPDIAD_OFFSET))(this);
	}
};
