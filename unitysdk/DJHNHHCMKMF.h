#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJHNHHCMKMF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJHNHHCMKMF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1C9720)
#define DJHNHHCMKMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C9A00)
#define DJHNHHCMKMF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1C9290)
#define DJHNHHCMKMF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1C9200)
#define DJHNHHCMKMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C91B0)
#define DJHNHHCMKMF_DKJOHAMHMBD_OFFSET UNITYSDK_OFFSET(0x1E1C92E0)
#define DJHNHHCMKMF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1C93F0)
#define DJHNHHCMKMF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1C92F0)
#define DJHNHHCMKMF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1C92D0)
#define DJHNHHCMKMF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1C94E0)
#define DJHNHHCMKMF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1C9170)
#define DJHNHHCMKMF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1C9850)
#define DJHNHHCMKMF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1C9800)
#define DJHNHHCMKMF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1C92C0)
#define DJHNHHCMKMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1C91A0)
#define DJHNHHCMKMF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1C95E0)
#define DJHNHHCMKMF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1C9640)

inline static constexpr unsigned int DJHNHHCMKMF_TypeDefinitionIndex = 27377;

	class DJHNHHCMKMF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JFDCOLNGGJC; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIFNGFODAED()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DJHNHHCMKMF")->GetStaticField(0x37CF0);
		}

		static ::Google::Protobuf::MessageParser_1<::DJHNHHCMKMF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DJHNHHCMKMF*>**)UnitySDK::FromName("", "DJHNHHCMKMF")->GetStaticField(0x37CF8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NDFHHFGKMAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHNHHCMKMF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DJHNHHCMKMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJHNHHCMKMF*))((::PBYTE)hIl2Cpp + DJHNHHCMKMF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJHNHHCMKMF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DJHNHHCMKMF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DJHNHHCMKMF*>*(*)())((::PBYTE)hIl2Cpp + DJHNHHCMKMF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHNHHCMKMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DJHNHHCMKMF* Clone()
		{
			return ((::DJHNHHCMKMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHNHHCMKMF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHNHHCMKMF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJHNHHCMKMF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DKJOHAMHMBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHNHHCMKMF_DKJOHAMHMBD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJHNHHCMKMF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DJHNHHCMKMF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJHNHHCMKMF*))((::PBYTE)hIl2Cpp + DJHNHHCMKMF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHNHHCMKMF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHNHHCMKMF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DJHNHHCMKMF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHNHHCMKMF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DJHNHHCMKMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJHNHHCMKMF*))((::PBYTE)hIl2Cpp + DJHNHHCMKMF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DJHNHHCMKMF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
