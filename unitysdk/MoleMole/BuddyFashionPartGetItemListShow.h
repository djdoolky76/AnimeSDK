#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GetItemListShow.h"

class HJFOMLOOGBE;

#define MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW_DOPROCESS_OFFSET UNITYSDK_OFFSET(0xFFB5990)
#define MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0xFFB5980)
#define MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW___BASE_DOPROCESS_OFFSET UNITYSDK_OFFSET(0xFFB5D00)

namespace MoleMole
{
	inline static constexpr unsigned int BuddyFashionPartGetItemListShow_TypeDefinitionIndex = 76327;

	class BuddyFashionPartGetItemListShow : public ::MoleMole::GetItemListShow
	{
	public:
		::System::Void _ctor(::HJFOMLOOGBE* context)
		{
			return ((::System::Void(*)(::PVOID, ::HJFOMLOOGBE*))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Void DoProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW_DOPROCESS_OFFSET))(this);
		}

		::System::Void __base_DoProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW___BASE_DOPROCESS_OFFSET))(this);
		}
	};
}
