#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CUSTOMRP_RPGFINALCOMPOSEDEBUG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC55EA0)

namespace RPG::CustomRP
{
	class RPGFinalComposeDebug : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DumpTonemappingDataFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.CustomRP", "RPGFinalComposeDebug")->GetStaticField(0x328D0);
		}

		static ::System::Boolean* StaticGet_DebugEnableGamutClipping()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RPGFinalComposeDebug")->GetStaticField(0xAB10);
		}

		static ::System::Boolean* StaticGet_DebugHDROutputIntermediate()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RPGFinalComposeDebug")->GetStaticField(0xAB11);
		}

		static ::System::Boolean* StaticGet_NeedDumpTonemappingData()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RPGFinalComposeDebug")->GetStaticField(0xAB12);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSEDEBUG_CCTOR_OFFSET))();
		}

	};
}
