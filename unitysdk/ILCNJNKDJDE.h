#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBCMHADMLOP.h"
#include "unitysdk/FKFLHBCAKFC.h"
class FIBAAIKLAEA;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ILCNJNKDJDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1649B630)
#define ILCNJNKDJDE_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x1649B050)
#define ILCNJNKDJDE_JBDPENNBKPM_OFFSET UNITYSDK_OFFSET(0x1649B4E0)
#define ILCNJNKDJDE_NNCBMAJEMOD_OFFSET UNITYSDK_OFFSET(0x1649B270)
#define ILCNJNKDJDE_ONINIT_OFFSET UNITYSDK_OFFSET(0x1649AE20)
#define ILCNJNKDJDE_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x1649AE80)
#define ILCNJNKDJDE_TICK_OFFSET UNITYSDK_OFFSET(0x1649B060)

inline static constexpr unsigned int ILCNJNKDJDE_TypeDefinitionIndex = 60278;

	class ILCNJNKDJDE : public ::HBCMHADMLOP
	{
	public:
		::System::Collections::Generic::List_1<::FIBAAIKLAEA*>* JOLKBOIGOII; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCNJNKDJDE_CTOR_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCNJNKDJDE_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCNJNKDJDE_ONUNINIT_OFFSET))(this);
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCNJNKDJDE_GET_NEEDTICK_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILCNJNKDJDE_TICK_OFFSET))(this, a1);
		}

		::System::Void NNCBMAJEMOD(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::FKFLHBCAKFC a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::FKFLHBCAKFC))((::PBYTE)hIl2Cpp + ILCNJNKDJDE_NNCBMAJEMOD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JBDPENNBKPM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ILCNJNKDJDE_JBDPENNBKPM_OFFSET))(this, a1);
		}

	};
