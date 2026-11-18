#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponentMetaInfo_CreateComponentList; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsComponentMeta_1___c__13_1_TypeDefinitionIndex = 35961;

	template <typename T>
	class EcsComponentMeta_1___c__13_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EcsComponentMeta_1___c__13_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Nap::NapECS::EcsComponentMetaInfo_CreateComponentList** StaticGet___9__13_0()
		{
			return (::Nap::NapECS::EcsComponentMetaInfo_CreateComponentList**)Il2CppClass::FromTypeDefinitionIndex(EcsComponentMeta_1___c__13_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
