#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JGAOCMLAJBA;
namespace MoleMole { class UICinemaCollectPageController; }

#define MOLEMOLE_UICINEMACOLLECTPROPOINTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A36DA90)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaCollectProPointContext_TypeDefinitionIndex = 58015;

	class UICinemaCollectProPointContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UICinemaCollectPageController* collectPage; // 0x28
		::JGAOCMLAJBA* rewardData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPROPOINTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
