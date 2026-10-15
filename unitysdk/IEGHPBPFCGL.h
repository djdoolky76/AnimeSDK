#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEGHPBPFCGL;
class NJEBDKOJNGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEGHPBPFCGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E639BD0)
#define IEGHPBPFCGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E639F70)
#define IEGHPBPFCGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E639730)
#define IEGHPBPFCGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E639670)
#define IEGHPBPFCGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E639620)
#define IEGHPBPFCGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6398E0)
#define IEGHPBPFCGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E639790)
#define IEGHPBPFCGL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E639780)
#define IEGHPBPFCGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E639A00)
#define IEGHPBPFCGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6395E0)
#define IEGHPBPFCGL_LPALIBHPDHP_OFFSET UNITYSDK_OFFSET(0x1E639760)
#define IEGHPBPFCGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E639DA0)
#define IEGHPBPFCGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E639D00)
#define IEGHPBPFCGL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E639770)
#define IEGHPBPFCGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E639610)
#define IEGHPBPFCGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E639A70)
#define IEGHPBPFCGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E639AD0)

	class IEGHPBPFCGL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NJEBDKOJNGA*>* DBEKKECJOJD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IEGHPBPFCGL")->GetStaticField(0x483B0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_AAHKGCJBAEA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IEGHPBPFCGL")->GetStaticField(0x483B8);
		}

		// static const ::System::Object ENDNCBMFFMI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGHPBPFCGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEGHPBPFCGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEGHPBPFCGL*))((::PBYTE)hIl2Cpp + IEGHPBPFCGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEGHPBPFCGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IEGHPBPFCGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGHPBPFCGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEGHPBPFCGL* Clone()
		{
			return ((::IEGHPBPFCGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGHPBPFCGL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NJEBDKOJNGA*>* LPALIBHPDHP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NJEBDKOJNGA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGHPBPFCGL_LPALIBHPDHP_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGHPBPFCGL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEGHPBPFCGL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEGHPBPFCGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEGHPBPFCGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEGHPBPFCGL*))((::PBYTE)hIl2Cpp + IEGHPBPFCGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGHPBPFCGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGHPBPFCGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEGHPBPFCGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGHPBPFCGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEGHPBPFCGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEGHPBPFCGL*))((::PBYTE)hIl2Cpp + IEGHPBPFCGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEGHPBPFCGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
