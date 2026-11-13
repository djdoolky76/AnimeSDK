#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFGCHHHMFNE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IFGCHHHMFNE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x202953A0)
#define IFGCHHHMFNE_CCTOR_OFFSET UNITYSDK_OFFSET(0x20295440)
#define IFGCHHHMFNE_CLONE_OFFSET UNITYSDK_OFFSET(0x20295040)
#define IFGCHHHMFNE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20295010)
#define IFGCHHHMFNE_CTOR_OFFSET UNITYSDK_OFFSET(0x20295000)
#define IFGCHHHMFNE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202951A0)
#define IFGCHHHMFNE_EQUALS_OFFSET UNITYSDK_OFFSET(0x202950B0)
#define IFGCHHHMFNE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20295300)
#define IFGCHHHMFNE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20294F90)
#define IFGCHHHMFNE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x202953F0)
#define IFGCHHHMFNE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x202953C0)
#define IFGCHHHMFNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20294FF0)
#define IFGCHHHMFNE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20295330)
#define IFGCHHHMFNE_WRITETO_OFFSET UNITYSDK_OFFSET(0x20295390)

inline static constexpr unsigned int IFGCHHHMFNE_TypeDefinitionIndex = 29947;

	class IFGCHHHMFNE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::IFGCHHHMFNE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IFGCHHHMFNE*>**)UnitySDK::FromName("", "IFGCHHHMFNE")->GetStaticField(0x46190);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCHHHMFNE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IFGCHHHMFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFGCHHHMFNE*))((::PBYTE)hIl2Cpp + IFGCHHHMFNE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFGCHHHMFNE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IFGCHHHMFNE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IFGCHHHMFNE*>*(*)())((::PBYTE)hIl2Cpp + IFGCHHHMFNE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCHHHMFNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IFGCHHHMFNE* Clone()
		{
			return ((::IFGCHHHMFNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCHHHMFNE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFGCHHHMFNE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IFGCHHHMFNE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFGCHHHMFNE*))((::PBYTE)hIl2Cpp + IFGCHHHMFNE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCHHHMFNE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCHHHMFNE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IFGCHHHMFNE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCHHHMFNE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IFGCHHHMFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFGCHHHMFNE*))((::PBYTE)hIl2Cpp + IFGCHHHMFNE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IFGCHHHMFNE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
