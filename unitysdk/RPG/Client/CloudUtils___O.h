#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int CloudUtils___O_TypeDefinitionIndex = 59866;

	class CloudUtils___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___OnGetClipBoardData()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x17E40);
		}

	};
}
