#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define SOFA_CORE_OBSERVABLEOBJECT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC639A0)
#define SOFA_CORE_OBSERVABLEOBJECT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC639E0)
#define SOFA_CORE_OBSERVABLEOBJECT___C___GETPROPERTYCHANGEDEVENTARGS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1EC639F0)

namespace Sofa::Core
{
	inline static constexpr unsigned int ObservableObject___c_TypeDefinitionIndex = 44108;

	class ObservableObject___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::ComponentModel::PropertyChangedEventArgs*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::String*, ::System::ComponentModel::PropertyChangedEventArgs*>**)UnitySDK::FromName("Sofa.Core", "<>c")->GetStaticField(0x4A750);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Sofa.Core", "<>c")->GetStaticField(0x4A758);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_CORE_OBSERVABLEOBJECT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_CORE_OBSERVABLEOBJECT___C_CTOR_OFFSET))(this);
		}

		::System::ComponentModel::PropertyChangedEventArgs* __GetPropertyChangedEventArgs_b__5_0(::System::String* a1)
		{
			return ((::System::ComponentModel::PropertyChangedEventArgs*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SOFA_CORE_OBSERVABLEOBJECT___C___GETPROPERTYCHANGEDEVENTARGS_B__5_0_OFFSET))(this, a1);
		}

	};
}
