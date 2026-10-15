#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

namespace System
{
	inline static constexpr unsigned int Lazy_1_TypeDefinitionIndex = 158;

	template <typename T>
	class Lazy_1 : public ::System::Object
	{
	public:
		::System::Object* m_boxed; // 0x0
		::System::Func_1<T>* m_valueFactory; // 0x0
		::System::Object* m_threadSafeObj; // 0x0
		static ::System::Func_1<T>** StaticGet_ALREADY_INVOKED_SENTINEL()
		{
			return (::System::Func_1<T>**)UnitySDK::FromName("System", "Lazy`1")->GetStaticField(0x0);
		}

	};
}
