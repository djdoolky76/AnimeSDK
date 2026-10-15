#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T> class Func_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int UserPrefs___O_TypeDefinitionIndex = 59368;

	class UserPrefs___O : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet__0____GetResidentActivityIsShowFinishedDefaultValue()
		{
			return (::System::Func_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x3A990);
		}

	};
}
