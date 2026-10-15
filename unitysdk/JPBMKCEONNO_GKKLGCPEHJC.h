#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define JPBMKCEONNO_GKKLGCPEHJC_CTOR_OFFSET UNITYSDK_OFFSET(0xB2B27E0)
#define JPBMKCEONNO_GKKLGCPEHJC_DCOMLHJNOML_OFFSET UNITYSDK_OFFSET(0xB2B2910)
#define JPBMKCEONNO_GKKLGCPEHJC_GECHHOANKHM_OFFSET UNITYSDK_OFFSET(0xB2B3D60)
#define JPBMKCEONNO_GKKLGCPEHJC_GET_DEFAULTFULLHPPROGRESS_OFFSET UNITYSDK_OFFSET(0xB2B3D30)
#define JPBMKCEONNO_GKKLGCPEHJC_GET_DEFAULTFULLKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xB2B3D50)
#define JPBMKCEONNO_GKKLGCPEHJC_GET_FORCEFULLHPPROGRESS_OFFSET UNITYSDK_OFFSET(0xB2B3CF0)
#define JPBMKCEONNO_GKKLGCPEHJC_GET_FORCEFULLKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xB2B3D10)
#define JPBMKCEONNO_GKKLGCPEHJC_INJFACJMOJE_OFFSET UNITYSDK_OFFSET(0xB2B3A50)
#define JPBMKCEONNO_GKKLGCPEHJC_LFGKBMIFGHM_OFFSET UNITYSDK_OFFSET(0xB2B3AB0)
#define JPBMKCEONNO_GKKLGCPEHJC_OIAKKMGGJBI_OFFSET UNITYSDK_OFFSET(0xB2B27F0)
#define JPBMKCEONNO_GKKLGCPEHJC_SET_DEFAULTFULLHPPROGRESS_OFFSET UNITYSDK_OFFSET(0xB2B3D20)
#define JPBMKCEONNO_GKKLGCPEHJC_SET_DEFAULTFULLKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xB2B3D40)
#define JPBMKCEONNO_GKKLGCPEHJC_SET_FORCEFULLHPPROGRESS_OFFSET UNITYSDK_OFFSET(0xB2B3CE0)
#define JPBMKCEONNO_GKKLGCPEHJC_SET_FORCEFULLKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xB2B3D00)

	class JPBMKCEONNO_GKKLGCPEHJC : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint _ForceFullKillProgress_k__BackingField; // 0x10
		::System::Boolean MCKHLMBBMDF; // 0x18
		::System::Boolean DBGPMFAAJGD; // 0x19
		::System::Byte _padding0[0x6];
		::RPG::GameCore::FixPoint _ForceFullHPProgress_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _DefaultFullHPProgress_k__BackingField; // 0x28
		::RPG::GameCore::FixPoint _DefaultFullKillProgress_k__BackingField; // 0x30
		::RPG::GameCore::FixPoint OJPEMACGBBG; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_GKKLGCPEHJC_CTOR_OFFSET))(this);
		}

		::System::Void set_ForceFullHPProgress(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JPBMKCEONNO_GKKLGCPEHJC_SET_FORCEFULLHPPROGRESS_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_ForceFullHPProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_GKKLGCPEHJC_GET_FORCEFULLHPPROGRESS_OFFSET))(this);
		}

		::System::Void set_ForceFullKillProgress(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JPBMKCEONNO_GKKLGCPEHJC_SET_FORCEFULLKILLPROGRESS_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_ForceFullKillProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_GKKLGCPEHJC_GET_FORCEFULLKILLPROGRESS_OFFSET))(this);
		}

		::System::Void set_DefaultFullHPProgress(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JPBMKCEONNO_GKKLGCPEHJC_SET_DEFAULTFULLHPPROGRESS_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_DefaultFullHPProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_GKKLGCPEHJC_GET_DEFAULTFULLHPPROGRESS_OFFSET))(this);
		}

		::System::Void set_DefaultFullKillProgress(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JPBMKCEONNO_GKKLGCPEHJC_SET_DEFAULTFULLKILLPROGRESS_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_DefaultFullKillProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_GKKLGCPEHJC_GET_DEFAULTFULLKILLPROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint INJFACJMOJE()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_GKKLGCPEHJC_INJFACJMOJE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint LFGKBMIFGHM()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_GKKLGCPEHJC_LFGKBMIFGHM_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint DCOMLHJNOML()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_GKKLGCPEHJC_DCOMLHJNOML_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint OIAKKMGGJBI()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_GKKLGCPEHJC_OIAKKMGGJBI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GECHHOANKHM()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBMKCEONNO_GKKLGCPEHJC_GECHHOANKHM_OFFSET))(this);
		}

	};
