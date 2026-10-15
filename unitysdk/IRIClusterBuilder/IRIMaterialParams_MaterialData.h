#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IRICLUSTERBUILDER_IRIMATERIALPARAMS_MATERIALDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1652C3B0)

namespace IRIClusterBuilder
{
	class IRIMaterialParams_MaterialData : public ::System::Object
	{
	public:
		::System::UInt64 MaterialHash; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* Params; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMATERIALPARAMS_MATERIALDATA_CTOR_OFFSET))(this);
		}

	};
}
