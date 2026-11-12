#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace RPG::Client
{
	inline static constexpr unsigned int EquipmentData___O_TypeDefinitionIndex = 67601;

	class EquipmentData___O : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet__0____CreateData()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x4CBE0);
		}

	};
}
