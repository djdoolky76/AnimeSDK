#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJHOCMLPMJD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJHOCMLPMJD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0DD750)
#define CJHOCMLPMJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0DDA10)
#define CJHOCMLPMJD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0DD2D0)
#define CJHOCMLPMJD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0DD240)
#define CJHOCMLPMJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DD1F0)
#define CJHOCMLPMJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0DD450)
#define CJHOCMLPMJD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0DD330)
#define CJHOCMLPMJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0DD540)
#define CJHOCMLPMJD_JALJFGMDLOJ_OFFSET UNITYSDK_OFFSET(0x1E0DD320)
#define CJHOCMLPMJD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0DD180)
#define CJHOCMLPMJD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0DD840)
#define CJHOCMLPMJD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0DD7F0)
#define CJHOCMLPMJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0DD1E0)
#define CJHOCMLPMJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0DD640)
#define CJHOCMLPMJD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0DD6A0)

inline static constexpr unsigned int CJHOCMLPMJD_TypeDefinitionIndex = 27630;

	class CJHOCMLPMJD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IOJLMOKPCGL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CJHOCMLPMJD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CJHOCMLPMJD*>**)UnitySDK::FromName("", "CJHOCMLPMJD")->GetStaticField(0x19380);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIOPCFCBHJJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CJHOCMLPMJD")->GetStaticField(0x19388);
		}

		// static const ::System::Object GNBGDANLDAO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHOCMLPMJD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJHOCMLPMJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJHOCMLPMJD*))((::PBYTE)hIl2Cpp + CJHOCMLPMJD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJHOCMLPMJD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CJHOCMLPMJD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CJHOCMLPMJD*>*(*)())((::PBYTE)hIl2Cpp + CJHOCMLPMJD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHOCMLPMJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJHOCMLPMJD* Clone()
		{
			return ((::CJHOCMLPMJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHOCMLPMJD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JALJFGMDLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHOCMLPMJD_JALJFGMDLOJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJHOCMLPMJD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJHOCMLPMJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJHOCMLPMJD*))((::PBYTE)hIl2Cpp + CJHOCMLPMJD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHOCMLPMJD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHOCMLPMJD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJHOCMLPMJD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHOCMLPMJD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJHOCMLPMJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJHOCMLPMJD*))((::PBYTE)hIl2Cpp + CJHOCMLPMJD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJHOCMLPMJD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
