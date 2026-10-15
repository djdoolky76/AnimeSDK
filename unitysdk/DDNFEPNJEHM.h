#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAGBNGJFCMG;
class DDNFEPNJEHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDNFEPNJEHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1895C0)
#define DDNFEPNJEHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E189930)
#define DDNFEPNJEHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E189130)
#define DDNFEPNJEHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1890A0)
#define DDNFEPNJEHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E189060)
#define DDNFEPNJEHM_EHEPKECPKFL_OFFSET UNITYSDK_OFFSET(0x1E189180)
#define DDNFEPNJEHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1892E0)
#define DDNFEPNJEHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E189190)
#define DDNFEPNJEHM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E189170)
#define DDNFEPNJEHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E189410)
#define DDNFEPNJEHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E189020)
#define DDNFEPNJEHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E189770)
#define DDNFEPNJEHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1896D0)
#define DDNFEPNJEHM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E189160)
#define DDNFEPNJEHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E189050)
#define DDNFEPNJEHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E189480)
#define DDNFEPNJEHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1894E0)

inline static constexpr unsigned int DDNFEPNJEHM_TypeDefinitionIndex = 33960;

	class DDNFEPNJEHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::DAGBNGJFCMG*>* BDNMIHJHJHF; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_CMBNFCPMEDK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DDNFEPNJEHM")->GetStaticField(0x2F090);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DDNFEPNJEHM")->GetStaticField(0x2F098);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BNOLPINGBKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFEPNJEHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DDNFEPNJEHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDNFEPNJEHM*))((::PBYTE)hIl2Cpp + DDNFEPNJEHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDNFEPNJEHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DDNFEPNJEHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFEPNJEHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDNFEPNJEHM* Clone()
		{
			return ((::DDNFEPNJEHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFEPNJEHM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFEPNJEHM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDNFEPNJEHM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DAGBNGJFCMG*>* EHEPKECPKFL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DAGBNGJFCMG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFEPNJEHM_EHEPKECPKFL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDNFEPNJEHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DDNFEPNJEHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DDNFEPNJEHM*))((::PBYTE)hIl2Cpp + DDNFEPNJEHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFEPNJEHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFEPNJEHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DDNFEPNJEHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFEPNJEHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DDNFEPNJEHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDNFEPNJEHM*))((::PBYTE)hIl2Cpp + DDNFEPNJEHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DDNFEPNJEHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
