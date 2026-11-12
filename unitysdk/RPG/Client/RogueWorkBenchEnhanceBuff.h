#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"
class BLICCEHIOLH;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueWorkBenchEnhanceBuff; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0xEACD4B0)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETCOSTENERGY_OFFSET UNITYSDK_OFFSET(0xEACDBC0)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETFUNCID_OFFSET UNITYSDK_OFFSET(0xEACDDE0)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xEACDD90)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GET_CURENERGY_OFFSET UNITYSDK_OFFSET(0xEACDFA0)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0xEACDF80)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GET_MAXENERGY_OFFSET UNITYSDK_OFFSET(0xEACDFC0)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xEACDE20)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_REFRESH_OFFSET UNITYSDK_OFFSET(0xEACD9B0)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_REPORTBUFFSELECTION_OFFSET UNITYSDK_OFFSET(0xEACDC90)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_SET_CURENERGY_OFFSET UNITYSDK_OFFSET(0xEACDFB0)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_SET_ISDISABLE_OFFSET UNITYSDK_OFFSET(0xEACDF90)
#define RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_SET_MAXENERGY_OFFSET UNITYSDK_OFFSET(0xEACDFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchEnhanceBuff_TypeDefinitionIndex = 69298;

	class RogueWorkBenchEnhanceBuff : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueBuffCategory, ::System::UInt32>* _CostData; // 0x10
		::System::UInt32 _MaxEnergy_k__BackingField; // 0x18
		::System::Boolean _IsDisable_k__BackingField; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 _CurEnergy_k__BackingField; // 0x20
		::System::UInt32 _FuncID; // 0x24
		::System::Void _ctor(::System::UInt32 a1, ::BLICCEHIOLH* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::BLICCEHIOLH*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchEnhanceBuff* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchEnhanceBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_REFRESH_OFFSET))(this, a1);
		}

		::System::UInt32 GetCostEnergy(::RPG::GameCore::RogueBuffCategory a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueBuffCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETCOSTENERGY_OFFSET))(this, a1);
		}

		::System::Void ReportBuffSelection(::RPG::Client::RogueBuffData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_REPORTBUFFSELECTION_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_OPENFUNCUIPAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GET_ISDISABLE_OFFSET))(this);
		}

		::System::Void set_IsDisable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_SET_ISDISABLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurEnergy()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GET_CURENERGY_OFFSET))(this);
		}

		::System::Void set_CurEnergy(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_SET_CURENERGY_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxEnergy()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_GET_MAXENERGY_OFFSET))(this);
		}

		::System::Void set_MaxEnergy(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHENHANCEBUFF_SET_MAXENERGY_OFFSET))(this, a1);
		}

	};
}
