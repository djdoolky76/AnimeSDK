#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOLCCDIJBGO;
class LMOPAFOIJNF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LMOPAFOIJNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9AE1A0)
#define LMOPAFOIJNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9AE550)
#define LMOPAFOIJNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9ADD00)
#define LMOPAFOIJNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9ADBD0)
#define LMOPAFOIJNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9ADB40)
#define LMOPAFOIJNF_DKIONCANBMJ_OFFSET UNITYSDK_OFFSET(0x1E9ADD60)
#define LMOPAFOIJNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9ADDD0)
#define LMOPAFOIJNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9ADD70)
#define LMOPAFOIJNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9ADF20)
#define LMOPAFOIJNF_GLFDJKGMPMM_OFFSET UNITYSDK_OFFSET(0x1E9ADD50)
#define LMOPAFOIJNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9ADAD0)
#define LMOPAFOIJNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9AE330)
#define LMOPAFOIJNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9AE280)
#define LMOPAFOIJNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9ADB30)
#define LMOPAFOIJNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9AE060)
#define LMOPAFOIJNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9AE0C0)

	class LMOPAFOIJNF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FMAIMNNIOBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::KOLCCDIJBGO*>* DGCHLNFHENL; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_LPAGAJCAKAP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LMOPAFOIJNF")->GetStaticField(0x4DFF0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LMOPAFOIJNF")->GetStaticField(0x4DFF8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PLDBFECJPHF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LMOPAFOIJNF")->GetStaticField(0x4E000);
		}

		// static const ::System::Object ICBHKAODHPL; // 0x0
		// static const ::System::Object AFPNINPAOMG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMOPAFOIJNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMOPAFOIJNF*))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMOPAFOIJNF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LMOPAFOIJNF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LMOPAFOIJNF* Clone()
		{
			return ((::LMOPAFOIJNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GLFDJKGMPMM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_GLFDJKGMPMM_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KOLCCDIJBGO*>* DKIONCANBMJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KOLCCDIJBGO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_DKIONCANBMJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LMOPAFOIJNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMOPAFOIJNF*))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LMOPAFOIJNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMOPAFOIJNF*))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LMOPAFOIJNF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
