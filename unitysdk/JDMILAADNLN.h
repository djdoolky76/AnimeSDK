#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDMILAADNLN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDMILAADNLN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6E1470)
#define JDMILAADNLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6E1510)
#define JDMILAADNLN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6E1160)
#define JDMILAADNLN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6E1130)
#define JDMILAADNLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E1120)
#define JDMILAADNLN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6E1270)
#define JDMILAADNLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6E11A0)
#define JDMILAADNLN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6E13D0)
#define JDMILAADNLN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6E10E0)
#define JDMILAADNLN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6E14C0)
#define JDMILAADNLN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6E1490)
#define JDMILAADNLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6E1110)
#define JDMILAADNLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6E1400)
#define JDMILAADNLN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6E1460)

inline static constexpr unsigned int JDMILAADNLN_TypeDefinitionIndex = 33834;

	class JDMILAADNLN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JDMILAADNLN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JDMILAADNLN*>**)UnitySDK::FromName("", "JDMILAADNLN")->GetStaticField(0x5AE20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMILAADNLN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDMILAADNLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDMILAADNLN*))((::PBYTE)hIl2Cpp + JDMILAADNLN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDMILAADNLN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JDMILAADNLN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JDMILAADNLN*>*(*)())((::PBYTE)hIl2Cpp + JDMILAADNLN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMILAADNLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDMILAADNLN* Clone()
		{
			return ((::JDMILAADNLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMILAADNLN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDMILAADNLN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDMILAADNLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDMILAADNLN*))((::PBYTE)hIl2Cpp + JDMILAADNLN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMILAADNLN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMILAADNLN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDMILAADNLN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMILAADNLN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDMILAADNLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDMILAADNLN*))((::PBYTE)hIl2Cpp + JDMILAADNLN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDMILAADNLN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
