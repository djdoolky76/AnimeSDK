#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER_SINGLEDIGITDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD802B60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginNumber_SingleDigitData_TypeDefinitionIndex = 70085;

	class MonoEffectPluginNumber_SingleDigitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* RendererDigits; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER_SINGLEDIGITDATA_CTOR_OFFSET))(this);
		}

	};
}
