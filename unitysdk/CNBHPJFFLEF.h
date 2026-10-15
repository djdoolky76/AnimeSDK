#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNBHPJFFLEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CNBHPJFFLEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1067F0)
#define CNBHPJFFLEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E106AB0)
#define CNBHPJFFLEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1062A0)
#define CNBHPJFFLEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E106210)
#define CNBHPJFFLEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1061C0)
#define CNBHPJFFLEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E106450)
#define CNBHPJFFLEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E106320)
#define CNBHPJFFLEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E106550)
#define CNBHPJFFLEF_GJICONOOFDK_OFFSET UNITYSDK_OFFSET(0x1E1062F0)
#define CNBHPJFFLEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E106150)
#define CNBHPJFFLEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1068D0)
#define CNBHPJFFLEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E106880)
#define CNBHPJFFLEF_MJCJJKIEBLO_OFFSET UNITYSDK_OFFSET(0x1E106300)
#define CNBHPJFFLEF_NKNMJCMIPEJ_OFFSET UNITYSDK_OFFSET(0x1E106310)
#define CNBHPJFFLEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1061B0)
#define CNBHPJFFLEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E106650)
#define CNBHPJFFLEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1066B0)

inline static constexpr unsigned int CNBHPJFFLEF_TypeDefinitionIndex = 29278;

	class CNBHPJFFLEF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EGEPHMNAHMH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean EGHIEFOAJFH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CLBNOJGHGCJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CNBHPJFFLEF")->GetStaticField(0x1F350);
		}

		static ::Google::Protobuf::MessageParser_1<::CNBHPJFFLEF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CNBHPJFFLEF*>**)UnitySDK::FromName("", "CNBHPJFFLEF")->GetStaticField(0x1F358);
		}

		// static const ::System::Object NDALIHMMDJC; // 0x0
		// static const ::System::Object JBADBFFKHGJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBHPJFFLEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNBHPJFFLEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNBHPJFFLEF*))((::PBYTE)hIl2Cpp + CNBHPJFFLEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNBHPJFFLEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CNBHPJFFLEF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CNBHPJFFLEF*>*(*)())((::PBYTE)hIl2Cpp + CNBHPJFFLEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBHPJFFLEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNBHPJFFLEF* Clone()
		{
			return ((::CNBHPJFFLEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBHPJFFLEF_CLONE_OFFSET))(this);
		}

		::System::Boolean GJICONOOFDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBHPJFFLEF_GJICONOOFDK_OFFSET))(this);
		}

		::System::Void MJCJJKIEBLO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CNBHPJFFLEF_MJCJJKIEBLO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NKNMJCMIPEJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBHPJFFLEF_NKNMJCMIPEJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNBHPJFFLEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNBHPJFFLEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNBHPJFFLEF*))((::PBYTE)hIl2Cpp + CNBHPJFFLEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBHPJFFLEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBHPJFFLEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNBHPJFFLEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBHPJFFLEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNBHPJFFLEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNBHPJFFLEF*))((::PBYTE)hIl2Cpp + CNBHPJFFLEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNBHPJFFLEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
