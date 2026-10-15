#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPHMAJPGGEK;
class OCBPJLLLJGO;
class OKCCLEEPELM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GPHMAJPGGEK_BCAMAIKKLMA_OFFSET UNITYSDK_OFFSET(0x1E4F9CD0)
#define GPHMAJPGGEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4FA080)
#define GPHMAJPGGEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4FA480)
#define GPHMAJPGGEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4F9C80)
#define GPHMAJPGGEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4F9B80)
#define GPHMAJPGGEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F9B10)
#define GPHMAJPGGEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4F9D50)
#define GPHMAJPGGEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4F9CF0)
#define GPHMAJPGGEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4F9EA0)
#define GPHMAJPGGEK_JJDPIPNGLIH_OFFSET UNITYSDK_OFFSET(0x1E4F9CE0)
#define GPHMAJPGGEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4F9AA0)
#define GPHMAJPGGEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4FA250)
#define GPHMAJPGGEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4FA160)
#define GPHMAJPGGEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4F9B00)
#define GPHMAJPGGEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4F9F30)
#define GPHMAJPGGEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4F9F90)

	class GPHMAJPGGEK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::OCBPJLLLJGO*>* NBKFBCLCPPG; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::OKCCLEEPELM*>* FGBPLHIFABO; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GPHMAJPGGEK")->GetStaticField(0x2BAF0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CPCPNHGKKGM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GPHMAJPGGEK")->GetStaticField(0x2BAF8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_IHAHBIMIICJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GPHMAJPGGEK")->GetStaticField(0x2BB00);
		}

		// static const ::System::Object OHNKDMCLOJL; // 0x0
		// static const ::System::Object IECBFMHEHOL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHMAJPGGEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GPHMAJPGGEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPHMAJPGGEK*))((::PBYTE)hIl2Cpp + GPHMAJPGGEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPHMAJPGGEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GPHMAJPGGEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHMAJPGGEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GPHMAJPGGEK* Clone()
		{
			return ((::GPHMAJPGGEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHMAJPGGEK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OKCCLEEPELM*>* BCAMAIKKLMA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OKCCLEEPELM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHMAJPGGEK_BCAMAIKKLMA_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OCBPJLLLJGO*>* JJDPIPNGLIH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OCBPJLLLJGO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHMAJPGGEK_JJDPIPNGLIH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPHMAJPGGEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GPHMAJPGGEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GPHMAJPGGEK*))((::PBYTE)hIl2Cpp + GPHMAJPGGEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHMAJPGGEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHMAJPGGEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GPHMAJPGGEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHMAJPGGEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GPHMAJPGGEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPHMAJPGGEK*))((::PBYTE)hIl2Cpp + GPHMAJPGGEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GPHMAJPGGEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
