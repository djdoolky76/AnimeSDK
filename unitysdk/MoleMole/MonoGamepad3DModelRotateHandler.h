#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

namespace MoleMole { class Mono3DModelRotateHandler; }

#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x162E1280)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_FHEBNAJKEFP_OFFSET UNITYSDK_OFFSET(0x162E1930)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_GFMAJJCMDNB_OFFSET UNITYSDK_OFFSET(0x162E1580)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_HEDKEJGHLJK_OFFSET UNITYSDK_OFFSET(0x162E1880)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_ISTEMPWORKABLE_OFFSET UNITYSDK_OFFSET(0x162E1100)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_KJLKHOPODEA_OFFSET UNITYSDK_OFFSET(0x162E0FA0)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_MIHFEBMIPFI_OFFSET UNITYSDK_OFFSET(0x162E1610)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_MLEFMLIIHAJ_OFFSET UNITYSDK_OFFSET(0x162E19C0)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_ONEKHJPOAGO_OFFSET UNITYSDK_OFFSET(0x162E1830)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162E14E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepad3DModelRotateHandler_TypeDefinitionIndex = 43634;

	class MonoGamepad3DModelRotateHandler : public ::MoleMole::MonoGamepadModule
	{
	public:
		::MoleMole::Mono3DModelRotateHandler* _3dModelRotateHandler; // 0xF0
		::MoleMole::InputLogicEventType _rotateEvent; // 0xF8
		::MoleMole::InputLogicEventType _resetEvent; // 0xFC
		::System::Single _speed; // 0x100
		::System::Single _thresholdDelta; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER__CTOR_OFFSET))(this);
		}

		::System::Boolean KJLKHOPODEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_KJLKHOPODEA_OFFSET))(this);
		}

		::System::Boolean IsTempWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_ISTEMPWORKABLE_OFFSET))(this);
		}

		::System::Boolean DIHCGHDHPJP(::MoleMole::InputActionEvent PKBLAMDICKB)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_DIHCGHDHPJP_OFFSET))(this, PKBLAMDICKB);
		}

		::System::Boolean GFMAJJCMDNB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_GFMAJJCMDNB_OFFSET))(this);
		}

		::System::Void MIHFEBMIPFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_MIHFEBMIPFI_OFFSET))(this);
		}

		::System::Boolean HEDKEJGHLJK(::MoleMole::InputActionEvent MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_HEDKEJGHLJK_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ONEKHJPOAGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_ONEKHJPOAGO_OFFSET))(this);
		}

		::System::Boolean FHEBNAJKEFP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_FHEBNAJKEFP_OFFSET))(this);
		}

		::System::Void MLEFMLIIHAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_MLEFMLIIHAJ_OFFSET))(this);
		}
	};
}
