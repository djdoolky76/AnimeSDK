#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NODEGRAPH_VARIANTUNIONCASTREGISTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xEEBA950)

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnionCastRegister_TypeDefinitionIndex = 74415;

	class VariantUnionCastRegister : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTREGISTER__CCTOR_OFFSET))();
		}
	};
}
