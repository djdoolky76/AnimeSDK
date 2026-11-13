#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NOAAPIFJKNE_CTOR_OFFSET UNITYSDK_OFFSET(0x17A1D740)
#define NOAAPIFJKNE_GET_ISPRVBATTLEWIN_OFFSET UNITYSDK_OFFSET(0x17A1D720)
#define NOAAPIFJKNE_SET_ISPRVBATTLEWIN_OFFSET UNITYSDK_OFFSET(0x17A1D730)

inline static constexpr unsigned int NOAAPIFJKNE_TypeDefinitionIndex = 77365;

	class NOAAPIFJKNE : public ::System::Object
	{
	public:
		::System::Boolean _IsPrvBattleWin_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAAPIFJKNE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPrvBattleWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAAPIFJKNE_GET_ISPRVBATTLEWIN_OFFSET))(this);
		}

		::System::Void set_IsPrvBattleWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOAAPIFJKNE_SET_ISPRVBATTLEWIN_OFFSET))(this, a1);
		}

	};
