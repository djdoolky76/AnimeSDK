#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

namespace System::Threading
{
	inline static constexpr unsigned int ThreadLocal_1_TypeDefinitionIndex = 801;

	template <typename T>
	class ThreadLocal_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_ts_slotArray()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ThreadLocal_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Object** StaticGet_ts_finalizationHelper()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ThreadLocal_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Object** StaticGet_s_idManager()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ThreadLocal_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Func_1<T>* m_valueFactory; // 0x0
		::System::Int32 m_idComplement; // 0x0
		::System::Boolean m_initialized; // 0x0
		::System::Object* m_linkedSlot; // 0x0
		::System::Boolean m_trackAllValues; // 0x0
	};
}
