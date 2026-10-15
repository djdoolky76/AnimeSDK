#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAMHHDBNNFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FAMHHDBNNFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2FBF50)
#define FAMHHDBNNFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FBFF0)
#define FAMHHDBNNFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2FBC40)
#define FAMHHDBNNFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2FBC10)
#define FAMHHDBNNFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FBC00)
#define FAMHHDBNNFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2FBD50)
#define FAMHHDBNNFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2FBC80)
#define FAMHHDBNNFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2FBEB0)
#define FAMHHDBNNFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2FBBC0)
#define FAMHHDBNNFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2FBFA0)
#define FAMHHDBNNFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2FBF70)
#define FAMHHDBNNFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2FBBF0)
#define FAMHHDBNNFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2FBEE0)
#define FAMHHDBNNFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2FBF40)

inline static constexpr unsigned int FAMHHDBNNFD_TypeDefinitionIndex = 26515;

	class FAMHHDBNNFD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FAMHHDBNNFD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FAMHHDBNNFD*>**)UnitySDK::FromName("", "FAMHHDBNNFD")->GetStaticField(0x4D350);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMHHDBNNFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FAMHHDBNNFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAMHHDBNNFD*))((::PBYTE)hIl2Cpp + FAMHHDBNNFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAMHHDBNNFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FAMHHDBNNFD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FAMHHDBNNFD*>*(*)())((::PBYTE)hIl2Cpp + FAMHHDBNNFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMHHDBNNFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FAMHHDBNNFD* Clone()
		{
			return ((::FAMHHDBNNFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMHHDBNNFD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAMHHDBNNFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FAMHHDBNNFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAMHHDBNNFD*))((::PBYTE)hIl2Cpp + FAMHHDBNNFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMHHDBNNFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMHHDBNNFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FAMHHDBNNFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMHHDBNNFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FAMHHDBNNFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAMHHDBNNFD*))((::PBYTE)hIl2Cpp + FAMHHDBNNFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FAMHHDBNNFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
