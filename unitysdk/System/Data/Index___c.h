#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class ListChangedEventArgs; }
namespace System::Data { class DataViewListener; }

#define SYSTEM_DATA_INDEX___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9915B0)
#define SYSTEM_DATA_INDEX___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9915F0)
#define SYSTEM_DATA_INDEX___C__ONLISTCHANGED_B__85_0_OFFSET UNITYSDK_OFFSET(0x1F991610)
#define SYSTEM_DATA_INDEX___C___CTOR_B__22_0_OFFSET UNITYSDK_OFFSET(0x1F991600)

namespace System::Data
{
	inline static constexpr unsigned int Index___c_TypeDefinitionIndex = 37341;

	class Index___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9__85_0()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Index___c_TypeDefinitionIndex)->GetStaticField(0x2BE10);
		}
		static ::System::Object** StaticGet___9__22_0()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Index___c_TypeDefinitionIndex)->GetStaticField(0x2BE18);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Index___c_TypeDefinitionIndex)->GetStaticField(0x2BE20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__22_0(::System::Data::DataViewListener* listener)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataViewListener*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX___C___CTOR_B__22_0_OFFSET))(this, listener);
		}

		::System::Void _OnListChanged_b__85_0(::System::Data::DataViewListener* listener, ::System::ComponentModel::ListChangedEventArgs* args, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedEventArgs*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEX___C__ONLISTCHANGED_B__85_0_OFFSET))(this, listener, args, arg2, arg3);
		}
	};
}
