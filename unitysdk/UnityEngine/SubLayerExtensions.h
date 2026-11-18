#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_LDGDJLOILCG.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_SUBLAYEREXTENSIONS_TOTAG_OFFSET UNITYSDK_OFFSET(0x194CC330)

namespace UnityEngine
{
	inline static constexpr unsigned int SubLayerExtensions_TypeDefinitionIndex = 57878;

	class SubLayerExtensions : public ::System::Object
	{
	public:
		static ::System::String* ToTag(::MoleMole::LayerMaskStatic_LDGDJLOILCG subLayer)
		{
			return ((::System::String*(*)(::MoleMole::LayerMaskStatic_LDGDJLOILCG))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBLAYEREXTENSIONS_TOTAG_OFFSET))(subLayer);
		}
	};
}
