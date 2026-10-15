#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define INCONTROL_REFLECTOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA77270)
#define INCONTROL_REFLECTOR_GETALLASSEMBLYTYPES_OFFSET UNITYSDK_OFFSET(0x1BA76FD0)
#define INCONTROL_REFLECTOR_GET_ALLASSEMBLYTYPES_OFFSET UNITYSDK_OFFSET(0x1BA76F30)
#define INCONTROL_REFLECTOR_IGNOREASSEMBLYWITHNAME_OFFSET UNITYSDK_OFFSET(0x1BA77150)

namespace InControl
{
	class Reflector : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEnumerable_1<::System::Type*>** StaticGet_assemblyTypes()
		{
			return (::System::Collections::Generic::IEnumerable_1<::System::Type*>**)UnitySDK::FromName("InControl", "Reflector")->GetStaticField(0xBFE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_ignoreAssemblies()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("InControl", "Reflector")->GetStaticField(0xBFE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_REFLECTOR_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_AllAssemblyTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)())((::PBYTE)hIl2Cpp + INCONTROL_REFLECTOR_GET_ALLASSEMBLYTYPES_OFFSET))();
		}

		static ::System::Boolean IgnoreAssemblyWithName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_REFLECTOR_IGNOREASSEMBLYWITHNAME_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllAssemblyTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)())((::PBYTE)hIl2Cpp + INCONTROL_REFLECTOR_GETALLASSEMBLYTYPES_OFFSET))();
		}

	};
}
