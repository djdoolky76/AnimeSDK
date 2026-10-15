#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity
{
	template <typename T>
	class HEU_PluginStorage_StoreDataArray_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _array; // 0x0
	};
}
