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

#define FAMHHDBNNFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F7501E0)
#define FAMHHDBNNFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F750280)
#define FAMHHDBNNFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F74FED0)
#define FAMHHDBNNFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F74FEA0)
#define FAMHHDBNNFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F74FE90)
#define FAMHHDBNNFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F74FFE0)
#define FAMHHDBNNFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F74FF10)
#define FAMHHDBNNFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F750140)
#define FAMHHDBNNFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F74FE50)
#define FAMHHDBNNFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F750230)
#define FAMHHDBNNFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F750200)
#define FAMHHDBNNFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F74FE80)
#define FAMHHDBNNFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F750170)
#define FAMHHDBNNFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7501D0)

inline static constexpr unsigned int FAMHHDBNNFD_TypeDefinitionIndex = 27046;

	class FAMHHDBNNFD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FAMHHDBNNFD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FAMHHDBNNFD*>**)UnitySDK::FromName("", "FAMHHDBNNFD")->GetStaticField(0x3EBB0);
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
