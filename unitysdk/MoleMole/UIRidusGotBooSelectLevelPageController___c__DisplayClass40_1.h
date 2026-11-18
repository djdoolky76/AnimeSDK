#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MFEKBBCCCFE;

#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS40_1__CTOR_OFFSET UNITYSDK_OFFSET(0x167B3B40)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS40_1__GETDEFAULTTABINDEXANDLEVELINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x167B3B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSelectLevelPageController___c__DisplayClass40_1_TypeDefinitionIndex = 77078;

	template <typename T>
	class UIRidusGotBooSelectLevelPageController___c__DisplayClass40_1 : public ::System::Object
	{
	public:
		::System::Int32 levelType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS40_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDefaultTabIndexAndLevelIndex_b__0(::MFEKBBCCCFE* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFEKBBCCCFE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS40_1__GETDEFAULTTABINDEXANDLEVELINDEX_B__0_OFFSET))(this, x);
		}
	};
}
