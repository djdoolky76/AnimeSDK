#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

namespace RPG::Client
{
	inline static constexpr unsigned int PendingRspEntry_1___O_TypeDefinitionIndex = 69408;

	template <typename T>
	class PendingRspEntry_1___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0____OnAwaitCtCanceled()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x0);
		}

	};
}
