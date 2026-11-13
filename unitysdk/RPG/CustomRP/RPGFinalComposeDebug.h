#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CUSTOMRP_RPGFINALCOMPOSEDEBUG_CCTOR_OFFSET UNITYSDK_OFFSET(0x198EEC20)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGFinalComposeDebug_TypeDefinitionIndex = 38739;

	class RPGFinalComposeDebug : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DumpTonemappingDataFileName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.CustomRP", "RPGFinalComposeDebug")->GetStaticField(0x29280);
		}

		static ::System::Boolean* StaticGet_DebugHDROutputIntermediate()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RPGFinalComposeDebug")->GetStaticField(0x8620);
		}

		static ::System::Boolean* StaticGet_NeedDumpTonemappingData()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RPGFinalComposeDebug")->GetStaticField(0x8621);
		}

		static ::System::Boolean* StaticGet_DebugEnableGamutClipping()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RPGFinalComposeDebug")->GetStaticField(0x8622);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSEDEBUG_CCTOR_OFFSET))();
		}

	};
}
