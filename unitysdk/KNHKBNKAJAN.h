#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFMDKNCDDAL.h"
#include "unitysdk/System/Object.h"
class KNHKBNKAJAN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNHKBNKAJAN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBDEEF0)
#define KNHKBNKAJAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBDF2A0)
#define KNHKBNKAJAN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBDEA40)
#define KNHKBNKAJAN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBDE9A0)
#define KNHKBNKAJAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBDE960)
#define KNHKBNKAJAN_ENHIOKHHKDE_OFFSET UNITYSDK_OFFSET(0x1FBDEA70)
#define KNHKBNKAJAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBDEB10)
#define KNHKBNKAJAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBDEAE0)
#define KNHKBNKAJAN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FBDEAA0)
#define KNHKBNKAJAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBDEC50)
#define KNHKBNKAJAN_IMFHFKFAIEP_OFFSET UNITYSDK_OFFSET(0x1FBDEAD0)
#define KNHKBNKAJAN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBDE920)
#define KNHKBNKAJAN_LALFOHLNBPF_OFFSET UNITYSDK_OFFSET(0x1FBDEA80)
#define KNHKBNKAJAN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBDF1B0)
#define KNHKBNKAJAN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBDF0F0)
#define KNHKBNKAJAN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FBDEA90)
#define KNHKBNKAJAN_OKBFMMFNLOM_OFFSET UNITYSDK_OFFSET(0x1FBDEAB0)
#define KNHKBNKAJAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBDE950)
#define KNHKBNKAJAN_PONHHILCPOM_OFFSET UNITYSDK_OFFSET(0x1FBDEAC0)
#define KNHKBNKAJAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBDECD0)
#define KNHKBNKAJAN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBDED30)

inline static constexpr unsigned int KNHKBNKAJAN_TypeDefinitionIndex = 26905;

	class KNHKBNKAJAN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CFMDKNCDDAL>* GHOPIJOMOLL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 AIICGDFLHJB; // 0x24
		::System::UInt32 BHGBIAIECLI; // 0x28
		static ::Google::Protobuf::MessageParser_1<::KNHKBNKAJAN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KNHKBNKAJAN*>**)UnitySDK::FromName("", "KNHKBNKAJAN")->GetStaticField(0x1CAE0);
		}

		static ::Google::Protobuf::FieldCodec_1<::CFMDKNCDDAL>** StaticGet_LBDBGMJICNM()
		{
			return (::Google::Protobuf::FieldCodec_1<::CFMDKNCDDAL>**)UnitySDK::FromName("", "KNHKBNKAJAN")->GetStaticField(0x1CAE8);
		}

		// static const ::System::Object FNJENALBBMG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FCALMHEGJJB; // 0x0
		// static const ::System::Object AECCGOBPHGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNHKBNKAJAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNHKBNKAJAN*))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNHKBNKAJAN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KNHKBNKAJAN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KNHKBNKAJAN*>*(*)())((::PBYTE)hIl2Cpp + KNHKBNKAJAN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNHKBNKAJAN* Clone()
		{
			return ((::KNHKBNKAJAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_CLONE_OFFSET))(this);
		}

		::System::UInt32 ENHIOKHHKDE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_ENHIOKHHKDE_OFFSET))(this);
		}

		::System::Void LALFOHLNBPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_LALFOHLNBPF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 OKBFMMFNLOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_OKBFMMFNLOM_OFFSET))(this);
		}

		::System::Void PONHHILCPOM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_PONHHILCPOM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CFMDKNCDDAL>* IMFHFKFAIEP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CFMDKNCDDAL>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_IMFHFKFAIEP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNHKBNKAJAN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNHKBNKAJAN*))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNHKBNKAJAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNHKBNKAJAN*))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
