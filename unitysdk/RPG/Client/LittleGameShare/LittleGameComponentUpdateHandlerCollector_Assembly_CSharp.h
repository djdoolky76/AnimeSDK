#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMECOMPONENTUPDATEHANDLERCOLLECTOR_ASSEMBLY_CSHARP_CTOR_OFFSET UNITYSDK_OFFSET(0xDEF90A0)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMECOMPONENTUPDATEHANDLERCOLLECTOR_ASSEMBLY_CSHARP_INIT_OFFSET UNITYSDK_OFFSET(0xDEF8AF0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGameComponentUpdateHandlerCollector_Assembly_CSharp_TypeDefinitionIndex = 75462;

	class LittleGameComponentUpdateHandlerCollector_Assembly_CSharp : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_DBAHJNANIOG()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.LittleGameShare", "LittleGameComponentUpdateHandlerCollector_Assembly_CSharp")->GetStaticField(0xE490);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMECOMPONENTUPDATEHANDLERCOLLECTOR_ASSEMBLY_CSHARP_CTOR_OFFSET))(this);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMECOMPONENTUPDATEHANDLERCOLLECTOR_ASSEMBLY_CSHARP_INIT_OFFSET))();
		}

	};
}
