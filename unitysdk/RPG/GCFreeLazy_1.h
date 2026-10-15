#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_1.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace RPG
{
	template <typename T>
	class GCFreeLazy_1 : public ::System::Object
	{
	public:
		::System::Object* m_boxed; // 0x0
		::RPG::GCFreeClosure::FuncClosureR_1<T> m_valueFactory; // 0x0
		::System::Object* m_threadSafeObj; // 0x0
		static ::RPG::GCFreeClosure::FuncClosureR_1<T>* StaticGet_ALREADY_INVOKED_SENTINEL()
		{
			return (::RPG::GCFreeClosure::FuncClosureR_1<T>*)UnitySDK::FromName("RPG", "GCFreeLazy`1")->GetStaticField(0x0);
		}

	};
}
