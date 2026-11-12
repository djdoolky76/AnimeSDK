#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_OBJECTEXTENSIONS_ISEQUALSNULL_OFFSET UNITYSDK_OFFSET(0xE473580)
#define RPG_CLIENT_OBJECTEXTENSIONS_ISNOTNULL_OFFSET UNITYSDK_OFFSET(0xE473520)
#define RPG_CLIENT_OBJECTEXTENSIONS_ISNULL_OFFSET UNITYSDK_OFFSET(0xE4734C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ObjectExtensions_TypeDefinitionIndex = 74859;

	class ObjectExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsNull(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OBJECTEXTENSIONS_ISNULL_OFFSET))(a1);
		}

		static ::System::Boolean IsNotNull(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OBJECTEXTENSIONS_ISNOTNULL_OFFSET))(a1);
		}

		static ::System::Boolean IsEqualsNull(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OBJECTEXTENSIONS_ISEQUALSNULL_OFFSET))(a1);
		}

	};
}
