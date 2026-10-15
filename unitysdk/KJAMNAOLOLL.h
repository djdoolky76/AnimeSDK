#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJAMNAOLOLL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJAMNAOLOLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8672A0)
#define KJAMNAOLOLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E867570)
#define KJAMNAOLOLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E866EF0)
#define KJAMNAOLOLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E866EC0)
#define KJAMNAOLOLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E866EB0)
#define KJAMNAOLOLL_DIGMHIDCFEA_OFFSET UNITYSDK_OFFSET(0x1E866F50)
#define KJAMNAOLOLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E867060)
#define KJAMNAOLOLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E866F80)
#define KJAMNAOLOLL_FNEBEEIGOEK_OFFSET UNITYSDK_OFFSET(0x1E866F40)
#define KJAMNAOLOLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E867130)
#define KJAMNAOLOLL_HAOCOKIPFPA_OFFSET UNITYSDK_OFFSET(0x1E866F60)
#define KJAMNAOLOLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E866E70)
#define KJAMNAOLOLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8673F0)
#define KJAMNAOLOLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8673B0)
#define KJAMNAOLOLL_NDPFMEIJEAP_OFFSET UNITYSDK_OFFSET(0x1E866F70)
#define KJAMNAOLOLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E866EA0)
#define KJAMNAOLOLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E867160)
#define KJAMNAOLOLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8671C0)

inline static constexpr unsigned int KJAMNAOLOLL_TypeDefinitionIndex = 30279;

	class KJAMNAOLOLL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EIDMLMIIECP; // 0x18
		::System::UInt32 GFCOCFEGDKD; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KJAMNAOLOLL")->GetStaticField(0x1BBF0);
		}

		// static const ::System::Object BOGGAFJDMFA; // 0x0
		// static const ::System::Object EDILMGGKKHF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNAOLOLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJAMNAOLOLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJAMNAOLOLL*))((::PBYTE)hIl2Cpp + KJAMNAOLOLL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJAMNAOLOLL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KJAMNAOLOLL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNAOLOLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJAMNAOLOLL* Clone()
		{
			return ((::KJAMNAOLOLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNAOLOLL_CLONE_OFFSET))(this);
		}

		::System::UInt32 FNEBEEIGOEK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNAOLOLL_FNEBEEIGOEK_OFFSET))(this);
		}

		::System::Void DIGMHIDCFEA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJAMNAOLOLL_DIGMHIDCFEA_OFFSET))(this, a1);
		}

		::System::UInt32 HAOCOKIPFPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNAOLOLL_HAOCOKIPFPA_OFFSET))(this);
		}

		::System::Void NDPFMEIJEAP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJAMNAOLOLL_NDPFMEIJEAP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJAMNAOLOLL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJAMNAOLOLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJAMNAOLOLL*))((::PBYTE)hIl2Cpp + KJAMNAOLOLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNAOLOLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNAOLOLL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJAMNAOLOLL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNAOLOLL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJAMNAOLOLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJAMNAOLOLL*))((::PBYTE)hIl2Cpp + KJAMNAOLOLL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJAMNAOLOLL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
