#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHFGDCMBDBA;
class POFDBDHOJNG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define POFDBDHOJNG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFC93B0)
#define POFDBDHOJNG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFC96B0)
#define POFDBDHOJNG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFC8F90)
#define POFDBDHOJNG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFC8EE0)
#define POFDBDHOJNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC8E90)
#define POFDBDHOJNG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFC9110)
#define POFDBDHOJNG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFC8FD0)
#define POFDBDHOJNG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFC9230)
#define POFDBDHOJNG_HLJPGIAMGBD_OFFSET UNITYSDK_OFFSET(0x1DFC8FC0)
#define POFDBDHOJNG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFC8E50)
#define POFDBDHOJNG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFC94F0)
#define POFDBDHOJNG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFC9450)
#define POFDBDHOJNG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFC8E80)
#define POFDBDHOJNG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFC92A0)
#define POFDBDHOJNG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFC9300)

inline static constexpr unsigned int POFDBDHOJNG_TypeDefinitionIndex = 31824;

	class POFDBDHOJNG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PHFGDCMBDBA*>* GKEOPFNABME; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::PHFGDCMBDBA*>** StaticGet_FNHJCKOIEON()
		{
			return (::Google::Protobuf::FieldCodec_1<::PHFGDCMBDBA*>**)UnitySDK::FromName("", "POFDBDHOJNG")->GetStaticField(0x43490);
		}

		static ::Google::Protobuf::MessageParser_1<::POFDBDHOJNG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::POFDBDHOJNG*>**)UnitySDK::FromName("", "POFDBDHOJNG")->GetStaticField(0x43498);
		}

		// static const ::System::Object NIEBGNHGDIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFDBDHOJNG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::POFDBDHOJNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POFDBDHOJNG*))((::PBYTE)hIl2Cpp + POFDBDHOJNG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POFDBDHOJNG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::POFDBDHOJNG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::POFDBDHOJNG*>*(*)())((::PBYTE)hIl2Cpp + POFDBDHOJNG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFDBDHOJNG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::POFDBDHOJNG* Clone()
		{
			return ((::POFDBDHOJNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFDBDHOJNG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PHFGDCMBDBA*>* HLJPGIAMGBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PHFGDCMBDBA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFDBDHOJNG_HLJPGIAMGBD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POFDBDHOJNG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::POFDBDHOJNG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POFDBDHOJNG*))((::PBYTE)hIl2Cpp + POFDBDHOJNG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFDBDHOJNG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFDBDHOJNG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + POFDBDHOJNG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFDBDHOJNG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::POFDBDHOJNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POFDBDHOJNG*))((::PBYTE)hIl2Cpp + POFDBDHOJNG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + POFDBDHOJNG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
