#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class Extension; }
namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace Google::Protobuf::Reflection { class GeneratedClrTypeInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA0A260)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA0A2A0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DETERMINEPUBLICDEPENDENCIES_B__9_0_OFFSET UNITYSDK_OFFSET(0x1CA0A2B0)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__GETALLDEPENDEDEXTENSIONSFROMMESSAGE_B__52_0_OFFSET UNITYSDK_OFFSET(0x1CA0A360)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__GETALLDEPENDEDEXTENSIONS_B__51_0_OFFSET UNITYSDK_OFFSET(0x1CA0A340)
#define GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__GETALLGENERATEDEXTENSIONS_B__50_0_OFFSET UNITYSDK_OFFSET(0x1CA0A330)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptor___c_TypeDefinitionIndex = 5549;

	class FileDescriptor___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x1D540);
		}

		static ::System::Func_2<::Google::Protobuf::Reflection::FieldDescriptor*, ::Google::Protobuf::Extension*>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::Google::Protobuf::Reflection::FieldDescriptor*, ::Google::Protobuf::Extension*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x1D548);
		}

		static ::System::Func_2<::Google::Protobuf::Reflection::FileDescriptor*, ::System::String*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Google::Protobuf::Reflection::FileDescriptor*, ::System::String*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x1D550);
		}

		static ::System::Func_2<::Google::Protobuf::Reflection::GeneratedClrTypeInfo*, ::System::Boolean>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::Google::Protobuf::Reflection::GeneratedClrTypeInfo*, ::System::Boolean>**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x1D558);
		}

		static ::System::Func_2<::Google::Protobuf::Reflection::FieldDescriptor*, ::Google::Protobuf::Extension*>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::Google::Protobuf::Reflection::FieldDescriptor*, ::Google::Protobuf::Extension*>**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x1D560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C_CTOR_OFFSET))(this);
		}

		::System::String* _DeterminePublicDependencies_b__9_0(::Google::Protobuf::Reflection::FileDescriptor* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Google::Protobuf::Reflection::FileDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DETERMINEPUBLICDEPENDENCIES_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetAllGeneratedExtensions_b__50_0(::Google::Protobuf::Reflection::GeneratedClrTypeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::GeneratedClrTypeInfo*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__GETALLGENERATEDEXTENSIONS_B__50_0_OFFSET))(this, a1);
		}

		::Google::Protobuf::Extension* _GetAllDependedExtensions_b__51_0(::Google::Protobuf::Reflection::FieldDescriptor* a1)
		{
			return ((::Google::Protobuf::Extension*(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__GETALLDEPENDEDEXTENSIONS_B__51_0_OFFSET))(this, a1);
		}

		::Google::Protobuf::Extension* _GetAllDependedExtensionsFromMessage_b__52_0(::Google::Protobuf::Reflection::FieldDescriptor* a1)
		{
			return ((::Google::Protobuf::Extension*(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__GETALLDEPENDEDEXTENSIONSFROMMESSAGE_B__52_0_OFFSET))(this, a1);
		}

	};
}
