#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KKODJFMONDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D075110)
#define KKODJFMONDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D075150)
#define KKODJFMONDI___C__ISLISTTYPE_B__17_0_OFFSET UNITYSDK_OFFSET(0x1D075160)

inline static constexpr unsigned int KKODJFMONDI___c_TypeDefinitionIndex = 10745;

	class KKODJFMONDI___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35270);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKODJFMONDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKODJFMONDI___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsListType_b__17_0(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + KKODJFMONDI___C__ISLISTTYPE_B__17_0_OFFSET))(this, a1);
		}

	};
