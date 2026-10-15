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

#define KNHKBNKAJAN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8A3940)
#define KNHKBNKAJAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A3D00)
#define KNHKBNKAJAN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8A3480)
#define KNHKBNKAJAN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8A33E0)
#define KNHKBNKAJAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A33A0)
#define KNHKBNKAJAN_ENHIOKHHKDE_OFFSET UNITYSDK_OFFSET(0x1E8A34D0)
#define KNHKBNKAJAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8A3550)
#define KNHKBNKAJAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8A3520)
#define KNHKBNKAJAN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8A34C0)
#define KNHKBNKAJAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8A3690)
#define KNHKBNKAJAN_IMFHFKFAIEP_OFFSET UNITYSDK_OFFSET(0x1E8A34F0)
#define KNHKBNKAJAN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8A3360)
#define KNHKBNKAJAN_LALFOHLNBPF_OFFSET UNITYSDK_OFFSET(0x1E8A34E0)
#define KNHKBNKAJAN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8A3C10)
#define KNHKBNKAJAN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8A3B50)
#define KNHKBNKAJAN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8A34B0)
#define KNHKBNKAJAN_OKBFMMFNLOM_OFFSET UNITYSDK_OFFSET(0x1E8A3500)
#define KNHKBNKAJAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8A3390)
#define KNHKBNKAJAN_PONHHILCPOM_OFFSET UNITYSDK_OFFSET(0x1E8A3510)
#define KNHKBNKAJAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8A3710)
#define KNHKBNKAJAN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8A3770)

inline static constexpr unsigned int KNHKBNKAJAN_TypeDefinitionIndex = 26378;

	class KNHKBNKAJAN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CFMDKNCDDAL>* GHOPIJOMOLL; // 0x18
		::System::UInt32 BHGBIAIECLI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 AIICGDFLHJB; // 0x28
		static ::Google::Protobuf::MessageParser_1<::KNHKBNKAJAN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KNHKBNKAJAN*>**)UnitySDK::FromName("", "KNHKBNKAJAN")->GetStaticField(0x24090);
		}

		static ::Google::Protobuf::FieldCodec_1<::CFMDKNCDDAL>** StaticGet_LBDBGMJICNM()
		{
			return (::Google::Protobuf::FieldCodec_1<::CFMDKNCDDAL>**)UnitySDK::FromName("", "KNHKBNKAJAN")->GetStaticField(0x24098);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FNJENALBBMG; // 0x0
		// static const ::System::Object AECCGOBPHGM; // 0x0
		// static const ::System::Object FCALMHEGJJB; // 0x0
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

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 ENHIOKHHKDE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_ENHIOKHHKDE_OFFSET))(this);
		}

		::System::Void LALFOHLNBPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_LALFOHLNBPF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CFMDKNCDDAL>* IMFHFKFAIEP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CFMDKNCDDAL>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_IMFHFKFAIEP_OFFSET))(this);
		}

		::System::UInt32 OKBFMMFNLOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_OKBFMMFNLOM_OFFSET))(this);
		}

		::System::Void PONHHILCPOM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNHKBNKAJAN_PONHHILCPOM_OFFSET))(this, a1);
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
