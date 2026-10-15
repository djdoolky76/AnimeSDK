#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RspHandler; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Application_LogCallback; }

namespace RPG::QA
{
	inline static constexpr unsigned int QAManager___O_TypeDefinitionIndex = 51817;

	class QAManager___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Application_LogCallback** StaticGet__1____OnLogMessageReceivedThreaded()
		{
			return (::UnityEngine::Application_LogCallback**)UnitySDK::FromName("RPG.QA", "<>O")->GetStaticField(0x6F5D0);
		}

		static ::System::Action** StaticGet__2____IsSendLastErrorMessageSuccess()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.QA", "<>O")->GetStaticField(0x6F5D8);
		}

		static ::System::Action** StaticGet__0___SendMessage()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.QA", "<>O")->GetStaticField(0x6F5E0);
		}

		static ::RPG::Client::RspHandler** StaticGet__3____OnCmdGmTalkScNotify()
		{
			return (::RPG::Client::RspHandler**)UnitySDK::FromName("RPG.QA", "<>O")->GetStaticField(0x6F5E8);
		}

	};
}
