#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class LittleGameCustomLoadConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameEntityVarConfig; }

#define CKOLIMBFFBD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA12F10)
#define CKOLIMBFFBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA13060)
#define CKOLIMBFFBD_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA12F90)
#define CKOLIMBFFBD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA13020)

	class CKOLIMBFFBD : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameEntityVarConfig* JNEACCAPCHE; // 0x10
		::RPG::GameCore::LittleGameCustomLoadConfig* LEPGEFCALCH; // 0x18
		::RPG::GameCore::LittleGameEntityConfig* HEOPJACOFPI; // 0x20
		::RPG::PoolList_1<::System::UInt32>* EGGCADJJJOD; // 0x28
		::System::Int32 NJGKCPOOHDM; // 0x30
		::System::UInt32 DFEJABODPGM; // 0x34
		::System::UInt32 BNLCCCCMABF; // 0x38
		::System::Boolean ANEDAPKOFBC; // 0x3C
		::System::Boolean IOBJFEJFLJP; // 0x3D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOLIMBFFBD_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOLIMBFFBD_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOLIMBFFBD_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOLIMBFFBD_ONRECYCLE_OFFSET))(this);
		}

	};
