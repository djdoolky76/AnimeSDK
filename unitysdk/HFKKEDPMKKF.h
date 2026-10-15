#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFKKEDPMKKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFKKEDPMKKF_ADHJDJICGAH_OFFSET UNITYSDK_OFFSET(0x1E5403E0)
#define HFKKEDPMKKF_AKBNGOCLOCI_OFFSET UNITYSDK_OFFSET(0x1E540400)
#define HFKKEDPMKKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E540890)
#define HFKKEDPMKKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E540BE0)
#define HFKKEDPMKKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E540390)
#define HFKKEDPMKKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E540300)
#define HFKKEDPMKKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5402B0)
#define HFKKEDPMKKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E540540)
#define HFKKEDPMKKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E540410)
#define HFKKEDPMKKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E540630)
#define HFKKEDPMKKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E540240)
#define HFKKEDPMKKF_MBHDGNNCJGH_OFFSET UNITYSDK_OFFSET(0x1E5403F0)
#define HFKKEDPMKKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E540A10)
#define HFKKEDPMKKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5409C0)
#define HFKKEDPMKKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5402A0)
#define HFKKEDPMKKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E540730)
#define HFKKEDPMKKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E540790)

inline static constexpr unsigned int HFKKEDPMKKF_TypeDefinitionIndex = 34370;

	class HFKKEDPMKKF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MFJDMBIHNKB; // 0x18
		::System::UInt32 CIIPNEBKCLI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HFKKEDPMKKF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HFKKEDPMKKF*>**)UnitySDK::FromName("", "HFKKEDPMKKF")->GetStaticField(0x2FA50);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EBOHODABBGB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HFKKEDPMKKF")->GetStaticField(0x2FA58);
		}

		// static const ::System::Object CPHGFKFOKAF; // 0x0
		// static const ::System::Object GOBJOHKBCFI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFKKEDPMKKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFKKEDPMKKF*))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFKKEDPMKKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HFKKEDPMKKF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HFKKEDPMKKF*>*(*)())((::PBYTE)hIl2Cpp + HFKKEDPMKKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFKKEDPMKKF* Clone()
		{
			return ((::HFKKEDPMKKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ADHJDJICGAH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_ADHJDJICGAH_OFFSET))(this);
		}

		::System::UInt32 MBHDGNNCJGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_MBHDGNNCJGH_OFFSET))(this);
		}

		::System::Void AKBNGOCLOCI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_AKBNGOCLOCI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFKKEDPMKKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFKKEDPMKKF*))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFKKEDPMKKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFKKEDPMKKF*))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
