#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOEFFECTPLUGINDESTROY_ANIMATORLAYERSTATES__CTOR_OFFSET UNITYSDK_OFFSET(0x162DC950)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginDestroy_AnimatorLayerStates_TypeDefinitionIndex = 38347;

	class MonoEffectPluginDestroy_AnimatorLayerStates : public ::System::Object
	{
	public:
		::System::Int32 layerIndex; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* timeSegments; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINDESTROY_ANIMATORLAYERSTATES__CTOR_OFFSET))(this);
		}
	};
}
