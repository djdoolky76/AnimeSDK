#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x174AEF10)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x174AEF50)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_0_OFFSET UNITYSDK_OFFSET(0x174AEF60)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_1_OFFSET UNITYSDK_OFFSET(0x174AF000)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_2_OFFSET UNITYSDK_OFFSET(0x174AF0A0)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_3_OFFSET UNITYSDK_OFFSET(0x174AF2D0)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_4_OFFSET UNITYSDK_OFFSET(0x174AF3E0)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_5_OFFSET UNITYSDK_OFFSET(0x174AF500)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_6_OFFSET UNITYSDK_OFFSET(0x174AF620)
#define MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_8_OFFSET UNITYSDK_OFFSET(0x174AF730)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicGenericResolverGetFormatterHelper___c_TypeDefinitionIndex = 7321;

	class DynamicGenericResolverGetFormatterHelper___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__1_5()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DB40);
		}

		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__1_8()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DB48);
		}

		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DB50);
		}

		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DB58);
		}

		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__1_4()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DB60);
		}

		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DB68);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DB70);
		}

		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__1_6()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DB78);
		}

		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__1_3()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x2DB80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFormatter_b__1_0(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormatter_b__1_1(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_1_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormatter_b__1_2(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_2_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormatter_b__1_3(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_3_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormatter_b__1_4(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_4_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormatter_b__1_5(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_5_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormatter_b__1_6(::System::Reflection::ConstructorInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_6_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormatter_b__1_8(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER___C__GETFORMATTER_B__1_8_OFFSET))(this, a1);
		}

	};
}
