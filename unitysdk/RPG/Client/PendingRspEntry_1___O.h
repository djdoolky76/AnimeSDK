#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int PendingRspEntry_1___O_TypeDefinitionIndex = 69408;

	template <typename T>
	class PendingRspEntry_1___O : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet__0____OnAwaitCtCanceled()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x0);
		}

	};
}
