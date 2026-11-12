#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleFunc.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_PUZZLESTATIC_CCTOR_OFFSET UNITYSDK_OFFSET(0xE7E6620)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PuzzleStatic_TypeDefinitionIndex = 81518;

	class PuzzleStatic : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_InfoItemID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.Prop", "PuzzleStatic")->GetStaticField(0x13960);
		}

		static ::System::UInt32* StaticGet_ProbeResetNumCounter()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.Prop", "PuzzleStatic")->GetStaticField(0x13964);
		}

		static ::System::UInt32* StaticGet_ProbeResetNum()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.Prop", "PuzzleStatic")->GetStaticField(0x13968);
		}

		static ::RPG::GameCore::PuzzleFunc* StaticGet_CurPuzzleFunc()
		{
			return (::RPG::GameCore::PuzzleFunc*)UnitySDK::FromName("RPG.Client.Prop", "PuzzleStatic")->GetStaticField(0x1396C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLESTATIC_CCTOR_OFFSET))();
		}

	};
}
