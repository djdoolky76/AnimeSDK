#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EADGNHBCEPG;
class ILHFAFGOJAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EADGNHBCEPG_BDNFFNIMMDH_OFFSET UNITYSDK_OFFSET(0x1E2232B0)
#define EADGNHBCEPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E223720)
#define EADGNHBCEPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E223AA0)
#define EADGNHBCEPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E223260)
#define EADGNHBCEPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2231D0)
#define EADGNHBCEPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E223190)
#define EADGNHBCEPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E223410)
#define EADGNHBCEPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2232C0)
#define EADGNHBCEPG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2232A0)
#define EADGNHBCEPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E223540)
#define EADGNHBCEPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E223150)
#define EADGNHBCEPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2238D0)
#define EADGNHBCEPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E223830)
#define EADGNHBCEPG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E223290)
#define EADGNHBCEPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E223180)
#define EADGNHBCEPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2235B0)
#define EADGNHBCEPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E223610)

inline static constexpr unsigned int EADGNHBCEPG_TypeDefinitionIndex = 34317;

	class EADGNHBCEPG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ILHFAFGOJAC*>* DALMIFFCDLH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::ILHFAFGOJAC*>** StaticGet_IEMIANCPAOO()
		{
			return (::Google::Protobuf::FieldCodec_1<::ILHFAFGOJAC*>**)UnitySDK::FromName("", "EADGNHBCEPG")->GetStaticField(0x482F0);
		}

		static ::Google::Protobuf::MessageParser_1<::EADGNHBCEPG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EADGNHBCEPG*>**)UnitySDK::FromName("", "EADGNHBCEPG")->GetStaticField(0x482F8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FHAEGABFEJB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADGNHBCEPG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EADGNHBCEPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EADGNHBCEPG*))((::PBYTE)hIl2Cpp + EADGNHBCEPG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EADGNHBCEPG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EADGNHBCEPG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EADGNHBCEPG*>*(*)())((::PBYTE)hIl2Cpp + EADGNHBCEPG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADGNHBCEPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EADGNHBCEPG* Clone()
		{
			return ((::EADGNHBCEPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADGNHBCEPG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EADGNHBCEPG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EADGNHBCEPG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ILHFAFGOJAC*>* BDNFFNIMMDH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ILHFAFGOJAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADGNHBCEPG_BDNFFNIMMDH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EADGNHBCEPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EADGNHBCEPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EADGNHBCEPG*))((::PBYTE)hIl2Cpp + EADGNHBCEPG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EADGNHBCEPG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADGNHBCEPG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EADGNHBCEPG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EADGNHBCEPG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EADGNHBCEPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EADGNHBCEPG*))((::PBYTE)hIl2Cpp + EADGNHBCEPG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EADGNHBCEPG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
