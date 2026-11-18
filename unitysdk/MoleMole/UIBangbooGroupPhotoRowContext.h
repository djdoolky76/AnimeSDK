#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JLCMJJOJAFL;

#define MOLEMOLE_UIBANGBOOGROUPPHOTOROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC0AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooGroupPhotoRowContext_TypeDefinitionIndex = 47023;

	class UIBangbooGroupPhotoRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JLCMJJOJAFL* CheckPoint; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
