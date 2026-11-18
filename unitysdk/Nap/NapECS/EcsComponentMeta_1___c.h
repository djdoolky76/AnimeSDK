#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponentMetaInfo_CreateDataComponentList; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsComponentMeta_1___c_TypeDefinitionIndex = 35960;

	template <typename T>
	class EcsComponentMeta_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EcsComponentMeta_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Nap::NapECS::EcsComponentMetaInfo_CreateDataComponentList** StaticGet___9__14_0()
		{
			return (::Nap::NapECS::EcsComponentMetaInfo_CreateDataComponentList**)Il2CppClass::FromTypeDefinitionIndex(EcsComponentMeta_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
