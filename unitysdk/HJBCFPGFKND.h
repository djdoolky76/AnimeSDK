#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

#define HJBCFPGFKND_GET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x15D02880)
#define HJBCFPGFKND_GET_LASTINSERTACTIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x15D02820)
#define HJBCFPGFKND_GET_LASTONEMORETURNCOUNT_OFFSET UNITYSDK_OFFSET(0x15D02800)
#define HJBCFPGFKND_GET_OPERATIONCOUNTER_OFFSET UNITYSDK_OFFSET(0x15D02860)
#define HJBCFPGFKND_GET_RANDOMCOUNTER_OFFSET UNITYSDK_OFFSET(0x15D02840)
#define HJBCFPGFKND_LFMHPLEKINH_OFFSET UNITYSDK_OFFSET(0x15D028A0)
#define HJBCFPGFKND_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15D027B0)
#define HJBCFPGFKND_SET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x15D02890)
#define HJBCFPGFKND_SET_LASTINSERTACTIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x15D02830)
#define HJBCFPGFKND_SET_LASTONEMORETURNCOUNT_OFFSET UNITYSDK_OFFSET(0x15D02810)
#define HJBCFPGFKND_SET_OPERATIONCOUNTER_OFFSET UNITYSDK_OFFSET(0x15D02870)
#define HJBCFPGFKND_SET_RANDOMCOUNTER_OFFSET UNITYSDK_OFFSET(0x15D02850)

	class HJBCFPGFKND : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__OperationCounter_k__BackingField()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "HJBCFPGFKND")->GetStaticField(0x6910);
		}

		static ::RPG::GameCore::TurnState* StaticGet__CurrentTurnState_k__BackingField()
		{
			return (::RPG::GameCore::TurnState*)UnitySDK::FromName("", "HJBCFPGFKND")->GetStaticField(0x6914);
		}

		static ::System::UInt32* StaticGet__LastInsertActionTurnCount_k__BackingField()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "HJBCFPGFKND")->GetStaticField(0x6918);
		}

		static ::System::UInt32* StaticGet__LastOneMoreTurnCount_k__BackingField()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "HJBCFPGFKND")->GetStaticField(0x691C);
		}

		static ::System::Int32* StaticGet__RandomCounter_k__BackingField()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HJBCFPGFKND")->GetStaticField(0x6920);
		}

		static ::System::UInt32* StaticGet_ONPPBOKMMKL()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "HJBCFPGFKND")->GetStaticField(0x6924);
		}

		static ::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJBCFPGFKND_PJPFIHFAHGO_OFFSET))();
		}

		static ::System::UInt32 get_LastOneMoreTurnCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + HJBCFPGFKND_GET_LASTONEMORETURNCOUNT_OFFSET))();
		}

		static ::System::Void set_LastOneMoreTurnCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HJBCFPGFKND_SET_LASTONEMORETURNCOUNT_OFFSET))(a1);
		}

		static ::System::UInt32 get_LastInsertActionTurnCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + HJBCFPGFKND_GET_LASTINSERTACTIONTURNCOUNT_OFFSET))();
		}

		static ::System::Void set_LastInsertActionTurnCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HJBCFPGFKND_SET_LASTINSERTACTIONTURNCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 get_RandomCounter()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + HJBCFPGFKND_GET_RANDOMCOUNTER_OFFSET))();
		}

		static ::System::Void set_RandomCounter(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HJBCFPGFKND_SET_RANDOMCOUNTER_OFFSET))(a1);
		}

		static ::System::UInt32 get_OperationCounter()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + HJBCFPGFKND_GET_OPERATIONCOUNTER_OFFSET))();
		}

		static ::System::Void set_OperationCounter(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HJBCFPGFKND_SET_OPERATIONCOUNTER_OFFSET))(a1);
		}

		static ::RPG::GameCore::TurnState get_CurrentTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)())((::PBYTE)hIl2Cpp + HJBCFPGFKND_GET_CURRENTTURNSTATE_OFFSET))();
		}

		static ::System::Void set_CurrentTurnState(::RPG::GameCore::TurnState a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + HJBCFPGFKND_SET_CURRENTTURNSTATE_OFFSET))(a1);
		}

		static ::System::UInt64 LFMHPLEKINH()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + HJBCFPGFKND_LFMHPLEKINH_OFFSET))();
		}

	};
