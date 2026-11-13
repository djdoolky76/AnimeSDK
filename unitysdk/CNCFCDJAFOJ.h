#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNCFCDJAFOJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CNCFCDJAFOJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205EE360)
#define CNCFCDJAFOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x205EE5C0)
#define CNCFCDJAFOJ_CLONE_OFFSET UNITYSDK_OFFSET(0x205EDF60)
#define CNCFCDJAFOJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205EDED0)
#define CNCFCDJAFOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x205EDE80)
#define CNCFCDJAFOJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205EE090)
#define CNCFCDJAFOJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x205EDFA0)
#define CNCFCDJAFOJ_FILHNNGIBDO_OFFSET UNITYSDK_OFFSET(0x205EDF90)
#define CNCFCDJAFOJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x205EE180)
#define CNCFCDJAFOJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205EDE40)
#define CNCFCDJAFOJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205EE420)
#define CNCFCDJAFOJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205EE3D0)
#define CNCFCDJAFOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x205EDE70)
#define CNCFCDJAFOJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205EE280)
#define CNCFCDJAFOJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x205EE2E0)

inline static constexpr unsigned int CNCFCDJAFOJ_TypeDefinitionIndex = 31320;

	class CNCFCDJAFOJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PBABMGJANOE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CNCFCDJAFOJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CNCFCDJAFOJ*>**)UnitySDK::FromName("", "CNCFCDJAFOJ")->GetStaticField(0x161F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_ICLNDLFDLJJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CNCFCDJAFOJ")->GetStaticField(0x161F8);
		}

		// static const ::System::Object GENOFLDIEEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCFCDJAFOJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNCFCDJAFOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNCFCDJAFOJ*))((::PBYTE)hIl2Cpp + CNCFCDJAFOJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNCFCDJAFOJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CNCFCDJAFOJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CNCFCDJAFOJ*>*(*)())((::PBYTE)hIl2Cpp + CNCFCDJAFOJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCFCDJAFOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNCFCDJAFOJ* Clone()
		{
			return ((::CNCFCDJAFOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCFCDJAFOJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FILHNNGIBDO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCFCDJAFOJ_FILHNNGIBDO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNCFCDJAFOJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNCFCDJAFOJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNCFCDJAFOJ*))((::PBYTE)hIl2Cpp + CNCFCDJAFOJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCFCDJAFOJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCFCDJAFOJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNCFCDJAFOJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCFCDJAFOJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNCFCDJAFOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNCFCDJAFOJ*))((::PBYTE)hIl2Cpp + CNCFCDJAFOJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNCFCDJAFOJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
