#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class IGridFightTraitEffect; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c__7_1_TypeDefinitionIndex = 65438;

	template <typename T>
	class GridFightTraitComponent___c__7_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c__7`1")->GetStaticField(0x0);
		}

		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>*>**)UnitySDK::FromName("RPG.Client", "<>c__7`1")->GetStaticField(0x0);
		}

		static ::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::System::Boolean>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c__7`1")->GetStaticField(0x0);
		}

	};
}
