#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelPerformanceInitialize; }

#define BIEBKAENNNE_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A4C50)
#define BIEBKAENNNE_GET_BLOCKNEW_OFFSET UNITYSDK_OFFSET(0xB4A4C30)
#define BIEBKAENNNE_HANFODOBOBM_OFFSET UNITYSDK_OFFSET(0xB4A4B80)
#define BIEBKAENNNE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB4A4B30)
#define BIEBKAENNNE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB4A4A90)
#define BIEBKAENNNE_NOFJENGOJGE_OFFSET UNITYSDK_OFFSET(0xB4A4BE0)
#define BIEBKAENNNE_SET_BLOCKNEW_OFFSET UNITYSDK_OFFSET(0xB4A4C40)

	class BIEBKAENNNE : public ::System::Object
	{
	public:
		::System::Boolean OCCIFHOEJMI; // 0x10
		::System::Boolean _BlockNew_k__BackingField; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBKAENNNE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::LevelPerformanceInitialize* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPerformanceInitialize*, ::System::Boolean))((::PBYTE)hIl2Cpp + BIEBKAENNNE_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBKAENNNE_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void HANFODOBOBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBKAENNNE_HANFODOBOBM_OFFSET))(this);
		}

		::System::Boolean NOFJENGOJGE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BIEBKAENNNE_NOFJENGOJGE_OFFSET))(this, a1);
		}

		::System::Boolean get_BlockNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBKAENNNE_GET_BLOCKNEW_OFFSET))(this);
		}

		::System::Void set_BlockNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BIEBKAENNNE_SET_BLOCKNEW_OFFSET))(this, a1);
		}

	};
