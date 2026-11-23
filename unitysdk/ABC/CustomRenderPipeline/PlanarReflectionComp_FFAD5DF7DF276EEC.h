#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABC_CUSTOMRENDERPIPELINE_PLANARREFLECTIONCOMP_FFAD5DF7DF276EEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x28365D0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int PlanarReflectionComp_FFAD5DF7DF276EEC_TypeDefinitionIndex = 16939;

	class PlanarReflectionComp_FFAD5DF7DF276EEC : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_F4F258B2E13CA7BC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PlanarReflectionComp_FFAD5DF7DF276EEC_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_PLANARREFLECTIONCOMP_FFAD5DF7DF276EEC__CCTOR_OFFSET))();
		}
	};
}
