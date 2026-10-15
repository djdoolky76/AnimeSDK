#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJNKKPCCBMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MJNKKPCCBMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA21F60)
#define MJNKKPCCBMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA22000)
#define MJNKKPCCBMP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA21C50)
#define MJNKKPCCBMP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA21C20)
#define MJNKKPCCBMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA21C10)
#define MJNKKPCCBMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA21D60)
#define MJNKKPCCBMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA21C90)
#define MJNKKPCCBMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA21EC0)
#define MJNKKPCCBMP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA21BD0)
#define MJNKKPCCBMP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA21FB0)
#define MJNKKPCCBMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA21F80)
#define MJNKKPCCBMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA21C00)
#define MJNKKPCCBMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA21EF0)
#define MJNKKPCCBMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA21F50)

inline static constexpr unsigned int MJNKKPCCBMP_TypeDefinitionIndex = 33203;

	class MJNKKPCCBMP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MJNKKPCCBMP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MJNKKPCCBMP*>**)UnitySDK::FromName("", "MJNKKPCCBMP")->GetStaticField(0x53BF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKKPCCBMP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MJNKKPCCBMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNKKPCCBMP*))((::PBYTE)hIl2Cpp + MJNKKPCCBMP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJNKKPCCBMP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MJNKKPCCBMP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MJNKKPCCBMP*>*(*)())((::PBYTE)hIl2Cpp + MJNKKPCCBMP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKKPCCBMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MJNKKPCCBMP* Clone()
		{
			return ((::MJNKKPCCBMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKKPCCBMP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJNKKPCCBMP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MJNKKPCCBMP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJNKKPCCBMP*))((::PBYTE)hIl2Cpp + MJNKKPCCBMP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKKPCCBMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKKPCCBMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MJNKKPCCBMP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKKPCCBMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MJNKKPCCBMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNKKPCCBMP*))((::PBYTE)hIl2Cpp + MJNKKPCCBMP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MJNKKPCCBMP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
