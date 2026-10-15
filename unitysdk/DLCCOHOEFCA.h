#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCBHFBPADEE;
class DLCCOHOEFCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DLCCOHOEFCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1DDEA0)
#define DLCCOHOEFCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DE210)
#define DLCCOHOEFCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1DD9E0)
#define DLCCOHOEFCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1DD950)
#define DLCCOHOEFCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DD910)
#define DLCCOHOEFCA_EPMPBNPNBEN_OFFSET UNITYSDK_OFFSET(0x1E1DDA30)
#define DLCCOHOEFCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1DDB90)
#define DLCCOHOEFCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1DDA40)
#define DLCCOHOEFCA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1DDA20)
#define DLCCOHOEFCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1DDCC0)
#define DLCCOHOEFCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1DD8D0)
#define DLCCOHOEFCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1DE050)
#define DLCCOHOEFCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1DDFB0)
#define DLCCOHOEFCA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1DDA10)
#define DLCCOHOEFCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1DD900)
#define DLCCOHOEFCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1DDD30)
#define DLCCOHOEFCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1DDD90)

inline static constexpr unsigned int DLCCOHOEFCA_TypeDefinitionIndex = 30807;

	class DLCCOHOEFCA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BCBHFBPADEE*>* PEILCDMPOEO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::BCBHFBPADEE*>** StaticGet_EJBCKICMACE()
		{
			return (::Google::Protobuf::FieldCodec_1<::BCBHFBPADEE*>**)UnitySDK::FromName("", "DLCCOHOEFCA")->GetStaticField(0x3BCD0);
		}

		static ::Google::Protobuf::MessageParser_1<::DLCCOHOEFCA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DLCCOHOEFCA*>**)UnitySDK::FromName("", "DLCCOHOEFCA")->GetStaticField(0x3BCD8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NCEKMHIELNF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCCOHOEFCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DLCCOHOEFCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLCCOHOEFCA*))((::PBYTE)hIl2Cpp + DLCCOHOEFCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLCCOHOEFCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DLCCOHOEFCA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DLCCOHOEFCA*>*(*)())((::PBYTE)hIl2Cpp + DLCCOHOEFCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCCOHOEFCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DLCCOHOEFCA* Clone()
		{
			return ((::DLCCOHOEFCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCCOHOEFCA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCCOHOEFCA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLCCOHOEFCA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BCBHFBPADEE*>* EPMPBNPNBEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BCBHFBPADEE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCCOHOEFCA_EPMPBNPNBEN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLCCOHOEFCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DLCCOHOEFCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DLCCOHOEFCA*))((::PBYTE)hIl2Cpp + DLCCOHOEFCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCCOHOEFCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCCOHOEFCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DLCCOHOEFCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCCOHOEFCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DLCCOHOEFCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLCCOHOEFCA*))((::PBYTE)hIl2Cpp + DLCCOHOEFCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DLCCOHOEFCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
