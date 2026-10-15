#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDDIJCBEAHJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDDIJCBEAHJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0820E0)
#define CDDIJCBEAHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0823A0)
#define CDDIJCBEAHJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E081C60)
#define CDDIJCBEAHJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E081BD0)
#define CDDIJCBEAHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E081B80)
#define CDDIJCBEAHJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E081DE0)
#define CDDIJCBEAHJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E081CC0)
#define CDDIJCBEAHJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E081ED0)
#define CDDIJCBEAHJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E081B10)
#define CDDIJCBEAHJ_JNJJNBKBLKL_OFFSET UNITYSDK_OFFSET(0x1E081CB0)
#define CDDIJCBEAHJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0821D0)
#define CDDIJCBEAHJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E082180)
#define CDDIJCBEAHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E081B70)
#define CDDIJCBEAHJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E081FD0)
#define CDDIJCBEAHJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E082030)

inline static constexpr unsigned int CDDIJCBEAHJ_TypeDefinitionIndex = 32678;

	class CDDIJCBEAHJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JKIKLKPLCFJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CDDIJCBEAHJ")->GetStaticField(0xEE00);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PJIHGFFMBMD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CDDIJCBEAHJ")->GetStaticField(0xEE08);
		}

		// static const ::System::Object BKPDCANPNLI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDIJCBEAHJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDDIJCBEAHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDDIJCBEAHJ*))((::PBYTE)hIl2Cpp + CDDIJCBEAHJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDDIJCBEAHJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CDDIJCBEAHJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDIJCBEAHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDDIJCBEAHJ* Clone()
		{
			return ((::CDDIJCBEAHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDIJCBEAHJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JNJJNBKBLKL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDIJCBEAHJ_JNJJNBKBLKL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDDIJCBEAHJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDDIJCBEAHJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDDIJCBEAHJ*))((::PBYTE)hIl2Cpp + CDDIJCBEAHJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDIJCBEAHJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDIJCBEAHJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDDIJCBEAHJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDIJCBEAHJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDDIJCBEAHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDDIJCBEAHJ*))((::PBYTE)hIl2Cpp + CDDIJCBEAHJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDDIJCBEAHJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
