#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { template <typename T> class IMaterialPropertyAccessor_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertyAccessorInst_1_TypeDefinitionIndex = 69820;

	template <typename T>
	class MaterialPropertyAccessorInst_1 : public ::System::Object
	{
	public:
		static ::RPG::Client::IMaterialPropertyAccessor_1<T>** StaticGet_Inst()
		{
			return (::RPG::Client::IMaterialPropertyAccessor_1<T>**)UnitySDK::FromName("RPG.Client", "MaterialPropertyAccessorInst`1")->GetStaticField(0x0);
		}

	};
}
