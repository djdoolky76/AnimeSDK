#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FBHPDPBIGPK;
class IDGDIFDMIDP;

#define MOLEMOLE_UISOCIALCIRCLEINVITEROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1561F680)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleInviteRowContext_TypeDefinitionIndex = 84875;

	class UISocialCircleInviteRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IDGDIFDMIDP* CircleData; // 0x28
		::FBHPDPBIGPK* Info; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEINVITEROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
