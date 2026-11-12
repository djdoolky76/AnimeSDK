#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace MessagePack::Internal { template <typename T> class ThreadsafeTypeKeyHashTable_1; }
namespace System { class Object; }
namespace System { class Type; }
namespace System { class TypeInitializationException; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCF7170)
#define MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_GETFORMATTERDYNAMICWITHVERIFY_OFFSET UNITYSDK_OFFSET(0x1CCF70E0)
#define MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_GETFORMATTERDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1CCF6D00)
#define MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_THROW_1_OFFSET UNITYSDK_OFFSET(0x1CCF6B60)
#define MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_THROW_OFFSET UNITYSDK_OFFSET(0x1CCF6B10)

namespace MessagePack
{
	inline static constexpr unsigned int FormatterResolverExtensions_TypeDefinitionIndex = 7174;

	class FormatterResolverExtensions : public ::System::Object
	{
	public:
		static ::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::System::Func_2<::MessagePack::IFormatterResolver*, ::MessagePack::Formatters::IMessagePackFormatter*>*>** StaticGet_FormatterGetters()
		{
			return (::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::System::Func_2<::MessagePack::IFormatterResolver*, ::MessagePack::Formatters::IMessagePackFormatter*>*>**)UnitySDK::FromName("MessagePack", "FormatterResolverExtensions")->GetStaticField(0x465E0);
		}

		static ::System::Reflection::MethodInfo** StaticGet_GetFormatterRuntimeMethod()
		{
			return (::System::Reflection::MethodInfo**)UnitySDK::FromName("MessagePack", "FormatterResolverExtensions")->GetStaticField(0x465E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_CCTOR_OFFSET))();
		}

		static ::System::Void Throw(::System::TypeInitializationException* a1)
		{
			return ((::System::Void(*)(::System::TypeInitializationException*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_THROW_OFFSET))(a1);
		}

		static ::System::Void Throw_1(::System::Type* a1, ::MessagePack::IFormatterResolver* a2)
		{
			return ((::System::Void(*)(::System::Type*, ::MessagePack::IFormatterResolver*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_THROW_1_OFFSET))(a1, a2);
		}

		static ::System::Object* GetFormatterDynamic(::MessagePack::IFormatterResolver* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::MessagePack::IFormatterResolver*, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_GETFORMATTERDYNAMIC_OFFSET))(a1, a2);
		}

		static ::System::Object* GetFormatterDynamicWithVerify(::MessagePack::IFormatterResolver* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::MessagePack::IFormatterResolver*, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERRESOLVEREXTENSIONS_GETFORMATTERDYNAMICWITHVERIFY_OFFSET))(a1, a2);
		}

	};
}
