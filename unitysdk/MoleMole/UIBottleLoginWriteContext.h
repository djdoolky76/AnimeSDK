#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBottleLoginWriteContext_EUse.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;
namespace System { class Action; }

#define MOLEMOLE_UIBOTTLELOGINWRITECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15978410)

namespace MoleMole
{
	inline static constexpr unsigned int UIBottleLoginWriteContext_TypeDefinitionIndex = 73999;

	class UIBottleLoginWriteContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* closeCallback; // 0x28
		::CJIEIHEDMME* activityData; // 0x30
		::System::Action* successCallback; // 0x38
		::System::Int32 questSpecificID; // 0x40
		::System::Int32 itemID; // 0x44
		::MoleMole::UIBottleLoginWriteContext_EUse use; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOTTLELOGINWRITECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
