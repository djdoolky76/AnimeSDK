#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"
class GNFDPONFLJD;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueWorkBenchComposeMagicUnit; }
namespace RPG::Client { class RogueWorkBenchCost; }

#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_CTOR_OFFSET UNITYSDK_OFFSET(0xE057950)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_GETFUNCID_OFFSET UNITYSDK_OFFSET(0xE057C20)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xE057BD0)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_GET_COSTDATA_OFFSET UNITYSDK_OFFSET(0xE057DE0)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_GET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0xE057DC0)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xE057C60)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_REFRESH_OFFSET UNITYSDK_OFFSET(0xE057AD0)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_SET_COSTDATA_OFFSET UNITYSDK_OFFSET(0xE057DF0)
#define RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_SET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0xE057DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchComposeMagicUnit_TypeDefinitionIndex = 67350;

	class RogueWorkBenchComposeMagicUnit : public ::System::Object
	{
	public:
		::RPG::Client::RogueWorkBenchCost* _CostData_k__BackingField; // 0x10
		::System::Boolean _IsDisable_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 _FuncID; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::GNFDPONFLJD* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::GNFDPONFLJD*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchComposeMagicUnit* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchComposeMagicUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_REFRESH_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_GET_ISDISABLE_OFFSET))(this);
		}

		::System::Void set_IsDisable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_SET_ISDISABLE_OFFSET))(this, a1);
		}

		::RPG::Client::RogueWorkBenchCost* get_CostData()
		{
			return ((::RPG::Client::RogueWorkBenchCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_GET_COSTDATA_OFFSET))(this);
		}

		::System::Void set_CostData(::RPG::Client::RogueWorkBenchCost* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchCost*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHCOMPOSEMAGICUNIT_SET_COSTDATA_OFFSET))(this, a1);
		}

	};
}
