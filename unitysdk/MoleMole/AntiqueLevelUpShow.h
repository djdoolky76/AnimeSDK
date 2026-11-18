#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GeneralTopTipShow.h"

class NLCBIAFHPFB;

#define MOLEMOLE_ANTIQUELEVELUPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x19217D40)
#define MOLEMOLE_ANTIQUELEVELUPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x19217D20)
#define MOLEMOLE_ANTIQUELEVELUPSHOW___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x19217FD0)

namespace MoleMole
{
	inline static constexpr unsigned int AntiqueLevelUpShow_TypeDefinitionIndex = 45397;

	class AntiqueLevelUpShow : public ::MoleMole::GeneralTopTipShow
	{
	public:
		::NLCBIAFHPFB* _context; // 0x30

		::System::Void _ctor(::NLCBIAFHPFB* context)
		{
			return ((::System::Void(*)(::PVOID, ::NLCBIAFHPFB*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANTIQUELEVELUPSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANTIQUELEVELUPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANTIQUELEVELUPSHOW___BASE_ONPROCESS_OFFSET))(this);
		}
	};
}
