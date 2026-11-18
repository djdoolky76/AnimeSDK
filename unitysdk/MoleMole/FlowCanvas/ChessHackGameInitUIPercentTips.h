#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSHACKGAMEINITUIPERCENTTIPS_INVOKE_OFFSET UNITYSDK_OFFSET(0x14659200)
#define MOLEMOLE_FLOWCANVAS_CHESSHACKGAMEINITUIPERCENTTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x14659350)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessHackGameInitUIPercentTips_TypeDefinitionIndex = 69972;

	class ChessHackGameInitUIPercentTips
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKGAMEINITUIPERCENTTIPS__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::Single>* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHACKGAMEINITUIPERCENTTIPS_INVOKE_OFFSET))(this, a);
		}
	};
}
