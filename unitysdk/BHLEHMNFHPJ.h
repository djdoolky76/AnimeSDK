#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHLEHMNFHPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BHLEHMNFHPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDF7420)
#define BHLEHMNFHPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF76C0)
#define BHLEHMNFHPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDF6F10)
#define BHLEHMNFHPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDF6E20)
#define BHLEHMNFHPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF6D90)
#define BHLEHMNFHPJ_DKJOHAMHMBD_OFFSET UNITYSDK_OFFSET(0x1DDF6F50)
#define BHLEHMNFHPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDF6FB0)
#define BHLEHMNFHPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDF6F80)
#define BHLEHMNFHPJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DDF6F70)
#define BHLEHMNFHPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDF70D0)
#define BHLEHMNFHPJ_HHKNFHDPOOD_OFFSET UNITYSDK_OFFSET(0x1DDF6F40)
#define BHLEHMNFHPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDF6D50)
#define BHLEHMNFHPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDF75B0)
#define BHLEHMNFHPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDF7540)
#define BHLEHMNFHPJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DDF6F60)
#define BHLEHMNFHPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDF6D80)
#define BHLEHMNFHPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDF7290)
#define BHLEHMNFHPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDF72F0)

inline static constexpr unsigned int BHLEHMNFHPJ_TypeDefinitionIndex = 32716;

	class BHLEHMNFHPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JFDCOLNGGJC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EHMGJDCEJOE; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::BHLEHMNFHPJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BHLEHMNFHPJ*>**)UnitySDK::FromName("", "BHLEHMNFHPJ")->GetStaticField(0x46210);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NJOPDFMOJNJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BHLEHMNFHPJ")->GetStaticField(0x46218);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIFNGFODAED()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BHLEHMNFHPJ")->GetStaticField(0x46220);
		}

		// static const ::System::Object DFPPCAJDBFK; // 0x0
		// static const ::System::Object NDFHHFGKMAI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BHLEHMNFHPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHLEHMNFHPJ*))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BHLEHMNFHPJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BHLEHMNFHPJ*>*(*)())((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BHLEHMNFHPJ* Clone()
		{
			return ((::BHLEHMNFHPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HHKNFHDPOOD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_HHKNFHDPOOD_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DKJOHAMHMBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_DKJOHAMHMBD_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BHLEHMNFHPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHLEHMNFHPJ*))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BHLEHMNFHPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHLEHMNFHPJ*))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
