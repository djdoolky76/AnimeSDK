#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOFKMJPPAKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LOFKMJPPAKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x200D2A40)
#define LOFKMJPPAKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x200D2D30)
#define LOFKMJPPAKF_CLONE_OFFSET UNITYSDK_OFFSET(0x200D25B0)
#define LOFKMJPPAKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x200D2520)
#define LOFKMJPPAKF_CTOR_OFFSET UNITYSDK_OFFSET(0x200D24D0)
#define LOFKMJPPAKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x200D2710)
#define LOFKMJPPAKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x200D2610)
#define LOFKMJPPAKF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x200D2600)
#define LOFKMJPPAKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x200D2800)
#define LOFKMJPPAKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x200D2490)
#define LOFKMJPPAKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x200D2B80)
#define LOFKMJPPAKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x200D2B30)
#define LOFKMJPPAKF_NOHOEGEJKDC_OFFSET UNITYSDK_OFFSET(0x200D25E0)
#define LOFKMJPPAKF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x200D25F0)
#define LOFKMJPPAKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x200D24C0)
#define LOFKMJPPAKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x200D2900)
#define LOFKMJPPAKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x200D2960)

inline static constexpr unsigned int LOFKMJPPAKF_TypeDefinitionIndex = 27544;

	class LOFKMJPPAKF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ICEEAEBPOJK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LOFKMJPPAKF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LOFKMJPPAKF*>**)UnitySDK::FromName("", "LOFKMJPPAKF")->GetStaticField(0x45490);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_ABCFKHEEHAP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LOFKMJPPAKF")->GetStaticField(0x45498);
		}

		// static const ::System::Object ONHJIFCPFKE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFKMJPPAKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LOFKMJPPAKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOFKMJPPAKF*))((::PBYTE)hIl2Cpp + LOFKMJPPAKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOFKMJPPAKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LOFKMJPPAKF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LOFKMJPPAKF*>*(*)())((::PBYTE)hIl2Cpp + LOFKMJPPAKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFKMJPPAKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LOFKMJPPAKF* Clone()
		{
			return ((::LOFKMJPPAKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFKMJPPAKF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NOHOEGEJKDC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFKMJPPAKF_NOHOEGEJKDC_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFKMJPPAKF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LOFKMJPPAKF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOFKMJPPAKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LOFKMJPPAKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LOFKMJPPAKF*))((::PBYTE)hIl2Cpp + LOFKMJPPAKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFKMJPPAKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFKMJPPAKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LOFKMJPPAKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFKMJPPAKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LOFKMJPPAKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOFKMJPPAKF*))((::PBYTE)hIl2Cpp + LOFKMJPPAKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LOFKMJPPAKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
