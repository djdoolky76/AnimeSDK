#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CUSTOMRP_RPGFINALCOMPOSEDEBUG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC27C50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGFinalComposeDebug_TypeDefinitionIndex = 37810;

	class RPGFinalComposeDebug : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DumpTonemappingDataFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.CustomRP", "RPGFinalComposeDebug")->GetStaticField(0x2D970);
		}

		static ::System::Boolean* StaticGet_DebugEnableGamutClipping()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RPGFinalComposeDebug")->GetStaticField(0x9810);
		}

		static ::System::Boolean* StaticGet_DebugHDROutputIntermediate()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RPGFinalComposeDebug")->GetStaticField(0x9811);
		}

		static ::System::Boolean* StaticGet_NeedDumpTonemappingData()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RPGFinalComposeDebug")->GetStaticField(0x9812);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSEDEBUG_CCTOR_OFFSET))();
		}

	};
}
