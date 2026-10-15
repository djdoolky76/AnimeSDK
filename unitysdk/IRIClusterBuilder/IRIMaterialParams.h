#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IRICLUSTERBUILDER_IRIMATERIALPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1652C3A0)

namespace IRIClusterBuilder
{
	class IRIMaterialParams : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* Materials; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMATERIALPARAMS_CTOR_OFFSET))(this);
		}

	};
}
