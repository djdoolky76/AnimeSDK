#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleFunc.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_PUZZLESTATIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x17456820)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PuzzleStatic_TypeDefinitionIndex = 81517;

	class PuzzleStatic : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_ProbeResetNumCounter()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.Prop", "PuzzleStatic")->GetStaticField(0x135B0);
		}

		static ::RPG::GameCore::PuzzleFunc* StaticGet_CurPuzzleFunc()
		{
			return (::RPG::GameCore::PuzzleFunc*)UnitySDK::FromName("RPG.Client.Prop", "PuzzleStatic")->GetStaticField(0x135B4);
		}

		static ::System::UInt32* StaticGet_ProbeResetNum()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.Prop", "PuzzleStatic")->GetStaticField(0x135B8);
		}

		static ::System::UInt32* StaticGet_InfoItemID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.Prop", "PuzzleStatic")->GetStaticField(0x135BC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLESTATIC_CCTOR_OFFSET))();
		}

	};
}
