#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_PGFECKGGNPP__CCTOR_OFFSET UNITYSDK_OFFSET(0x106C87C0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleMainSystem_PGFECKGGNPP_TypeDefinitionIndex = 66628;

	class NPCCrowdModuleMainSystem_PGFECKGGNPP : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_LGLGAJHONDD()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_PGFECKGGNPP_TypeDefinitionIndex)->GetStaticField(0xD0C0);
		}
		static ::System::Boolean* StaticGet_KJOIGBCKFGA()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_PGFECKGGNPP_TypeDefinitionIndex)->GetStaticField(0xD0C1);
		}
		static ::System::Boolean* StaticGet_DJBOAJKOBEH()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_PGFECKGGNPP_TypeDefinitionIndex)->GetStaticField(0xD0C2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_PGFECKGGNPP__CCTOR_OFFSET))();
		}
	};
}
