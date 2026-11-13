#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTemplateEquipTraitEffect___O_TypeDefinitionIndex = 67267;

	class GridFightTemplateEquipTraitEffect___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet__0___GetConfig()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x13990);
		}

	};
}
