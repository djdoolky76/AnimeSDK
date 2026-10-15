#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CakeRaceActionBase; }

#define MDEHBIFFHNB_AIJPNHJPHMG_OFFSET UNITYSDK_OFFSET(0x1C7489B0)
#define MDEHBIFFHNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C748990)
#define MDEHBIFFHNB_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1C748A00)
#define MDEHBIFFHNB_GET_EXECUTEBEFOREBEGINDELAY_OFFSET UNITYSDK_OFFSET(0x1C748A60)
#define MDEHBIFFHNB_GET_REMAINEXECUTETIMES_OFFSET UNITYSDK_OFFSET(0x1C748A40)
#define MDEHBIFFHNB_GET_SHOWDURATIONMS_OFFSET UNITYSDK_OFFSET(0x1C748A20)
#define MDEHBIFFHNB_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1C748A10)
#define MDEHBIFFHNB_SET_EXECUTEBEFOREBEGINDELAY_OFFSET UNITYSDK_OFFSET(0x1C748A70)
#define MDEHBIFFHNB_SET_REMAINEXECUTETIMES_OFFSET UNITYSDK_OFFSET(0x1C748A50)
#define MDEHBIFFHNB_SET_SHOWDURATIONMS_OFFSET UNITYSDK_OFFSET(0x1C748A30)

	class MDEHBIFFHNB : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceActionBase* _Action_k__BackingField; // 0x10
		::System::UInt64 _ShowDurationMs_k__BackingField; // 0x18
		::System::UInt32 _RemainExecuteTimes_k__BackingField; // 0x20
		::System::Boolean _ExecuteBeforeBeginDelay_k__BackingField; // 0x24
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionBase* a1, ::System::UInt64 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionBase*, ::System::UInt64, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEHBIFFHNB_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AIJPNHJPHMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEHBIFFHNB_AIJPNHJPHMG_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceActionBase* get_Action()
		{
			return ((::RPG::GameCore::CakeRaceActionBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEHBIFFHNB_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::RPG::GameCore::CakeRaceActionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionBase*))((::PBYTE)hIl2Cpp + MDEHBIFFHNB_SET_ACTION_OFFSET))(this, a1);
		}

		::System::UInt64 get_ShowDurationMs()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEHBIFFHNB_GET_SHOWDURATIONMS_OFFSET))(this);
		}

		::System::Void set_ShowDurationMs(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MDEHBIFFHNB_SET_SHOWDURATIONMS_OFFSET))(this, a1);
		}

		::System::UInt32 get_RemainExecuteTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEHBIFFHNB_GET_REMAINEXECUTETIMES_OFFSET))(this);
		}

		::System::Void set_RemainExecuteTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDEHBIFFHNB_SET_REMAINEXECUTETIMES_OFFSET))(this, a1);
		}

		::System::Boolean get_ExecuteBeforeBeginDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEHBIFFHNB_GET_EXECUTEBEFOREBEGINDELAY_OFFSET))(this);
		}

		::System::Void set_ExecuteBeforeBeginDelay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEHBIFFHNB_SET_EXECUTEBEFOREBEGINDELAY_OFFSET))(this, a1);
		}

	};
