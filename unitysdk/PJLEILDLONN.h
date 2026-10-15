#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOAHBHODMHG;
class PJLEILDLONN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJLEILDLONN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF7D210)
#define PJLEILDLONN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF7D5A0)
#define PJLEILDLONN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF7CD70)
#define PJLEILDLONN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF7CCE0)
#define PJLEILDLONN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7CCA0)
#define PJLEILDLONN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF7CF20)
#define PJLEILDLONN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF7CDD0)
#define PJLEILDLONN_FGEGCGNCFMN_OFFSET UNITYSDK_OFFSET(0x1DF7CDA0)
#define PJLEILDLONN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF7D040)
#define PJLEILDLONN_GJAHHJPLKII_OFFSET UNITYSDK_OFFSET(0x1DF7CDC0)
#define PJLEILDLONN_GLFKMHKKEHM_OFFSET UNITYSDK_OFFSET(0x1DF7CDB0)
#define PJLEILDLONN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF7CC60)
#define PJLEILDLONN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF7D3E0)
#define PJLEILDLONN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF7D340)
#define PJLEILDLONN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF7CC90)
#define PJLEILDLONN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF7D0B0)
#define PJLEILDLONN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF7D110)

inline static constexpr unsigned int PJLEILDLONN_TypeDefinitionIndex = 31274;

	class PJLEILDLONN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::OOAHBHODMHG*>* MFKBNJMCODD; // 0x18
		::System::UInt32 GDPGCPKEFKH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::OOAHBHODMHG*>** StaticGet_HFOMHPDGAIK()
		{
			return (::Google::Protobuf::FieldCodec_1<::OOAHBHODMHG*>**)UnitySDK::FromName("", "PJLEILDLONN")->GetStaticField(0x46A90);
		}

		static ::Google::Protobuf::MessageParser_1<::PJLEILDLONN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PJLEILDLONN*>**)UnitySDK::FromName("", "PJLEILDLONN")->GetStaticField(0x46A98);
		}

		// static const ::System::Object NCOPBFNHNKJ; // 0x0
		// static const ::System::Object JIPLGBKNGHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJLEILDLONN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJLEILDLONN*))((::PBYTE)hIl2Cpp + PJLEILDLONN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJLEILDLONN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PJLEILDLONN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PJLEILDLONN*>*(*)())((::PBYTE)hIl2Cpp + PJLEILDLONN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJLEILDLONN* Clone()
		{
			return ((::PJLEILDLONN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OOAHBHODMHG*>* FGEGCGNCFMN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OOAHBHODMHG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN_FGEGCGNCFMN_OFFSET))(this);
		}

		::System::UInt32 GLFKMHKKEHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN_GLFKMHKKEHM_OFFSET))(this);
		}

		::System::Void GJAHHJPLKII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJLEILDLONN_GJAHHJPLKII_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJLEILDLONN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJLEILDLONN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJLEILDLONN*))((::PBYTE)hIl2Cpp + PJLEILDLONN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJLEILDLONN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLEILDLONN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJLEILDLONN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJLEILDLONN*))((::PBYTE)hIl2Cpp + PJLEILDLONN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJLEILDLONN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
