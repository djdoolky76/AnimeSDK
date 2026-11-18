#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_PHOTOTASKROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1194E950)

namespace MoleMole
{
	inline static constexpr unsigned int PhotoTaskRowContext_TypeDefinitionIndex = 58832;

	class PhotoTaskRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsShowBG; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTOTASKROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
