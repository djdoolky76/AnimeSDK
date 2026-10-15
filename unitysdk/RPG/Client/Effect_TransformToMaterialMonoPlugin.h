#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD75550)

namespace RPG::Client
{
	class Effect_TransformToMaterialMonoPlugin
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* PropertyMappings; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
