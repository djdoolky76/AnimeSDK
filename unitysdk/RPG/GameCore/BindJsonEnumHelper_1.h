#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonEnumCategory.h"
#include "unitysdk/System/Object.h"
namespace System { class Nullable; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int BindJsonEnumHelper_1_TypeDefinitionIndex = 24850;

	template <typename T>
	class BindJsonEnumHelper_1 : public ::System::Object
	{
	public:
		static ::System::Nullable** StaticGet_BindCategory()
		{
			return (::System::Nullable**)UnitySDK::FromName("RPG.GameCore", "BindJsonEnumHelper`1")->GetStaticField(0x0);
		}

	};
}
