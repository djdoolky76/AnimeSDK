#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHPBJOMBCAD;
class NEJPAGJBMDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BHPBJOMBCAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDFDE20)
#define BHPBJOMBCAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFE1C0)
#define BHPBJOMBCAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDFD8A0)
#define BHPBJOMBCAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDFD800)
#define BHPBJOMBCAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFD7C0)
#define BHPBJOMBCAD_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1DDFD8D0)
#define BHPBJOMBCAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDFDA80)
#define BHPBJOMBCAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDFD920)
#define BHPBJOMBCAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDFDBC0)
#define BHPBJOMBCAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDFD780)
#define BHPBJOMBCAD_LHOBOHHKHKN_OFFSET UNITYSDK_OFFSET(0x1DDFD900)
#define BHPBJOMBCAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDFDFE0)
#define BHPBJOMBCAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDFDF30)
#define BHPBJOMBCAD_NJJPJAAPLNF_OFFSET UNITYSDK_OFFSET(0x1DDFD910)
#define BHPBJOMBCAD_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1DDFD8E0)
#define BHPBJOMBCAD_OOJEIPOEALG_OFFSET UNITYSDK_OFFSET(0x1DDFD8F0)
#define BHPBJOMBCAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDFD7B0)
#define BHPBJOMBCAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDFDC30)
#define BHPBJOMBCAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDFDC90)

	class BHPBJOMBCAD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NEJPAGJBMDA*>* OIBJCELPBML; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x20
		::System::Boolean PEODDLFBOMA; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BHPBJOMBCAD")->GetStaticField(0x47850);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JLOMKHMIEGB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BHPBJOMBCAD")->GetStaticField(0x47858);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object CJNBODFHAPO; // 0x0
		// static const ::System::Object JPENJEPFBNO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BHPBJOMBCAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHPBJOMBCAD*))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHPBJOMBCAD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BHPBJOMBCAD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BHPBJOMBCAD* Clone()
		{
			return ((::BHPBJOMBCAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean OOJEIPOEALG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_OOJEIPOEALG_OFFSET))(this);
		}

		::System::Void LHOBOHHKHKN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_LHOBOHHKHKN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NEJPAGJBMDA*>* NJJPJAAPLNF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NEJPAGJBMDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_NJJPJAAPLNF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BHPBJOMBCAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHPBJOMBCAD*))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BHPBJOMBCAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHPBJOMBCAD*))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
