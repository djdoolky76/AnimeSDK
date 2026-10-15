#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFAGAEJHEJH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class SceneEntityInfo; }
namespace System { class Object; }
namespace System { class String; }

#define BFAGAEJHEJH_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x1EA66600)
#define BFAGAEJHEJH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA66A40)
#define BFAGAEJHEJH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA66E60)
#define BFAGAEJHEJH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA66590)
#define BFAGAEJHEJH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA664B0)
#define BFAGAEJHEJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA66450)
#define BFAGAEJHEJH_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1EA665D0)
#define BFAGAEJHEJH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA66650)
#define BFAGAEJHEJH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA66620)
#define BFAGAEJHEJH_FMEIAEAMKPP_OFFSET UNITYSDK_OFFSET(0x1EA665F0)
#define BFAGAEJHEJH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA667B0)
#define BFAGAEJHEJH_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0x1EA66610)
#define BFAGAEJHEJH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA66410)
#define BFAGAEJHEJH_KKGOFMBMMAC_OFFSET UNITYSDK_OFFSET(0x1EA665C0)
#define BFAGAEJHEJH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA66D20)
#define BFAGAEJHEJH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA66C40)
#define BFAGAEJHEJH_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1EA665E0)
#define BFAGAEJHEJH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA66440)
#define BFAGAEJHEJH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA66840)
#define BFAGAEJHEJH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA668A0)

inline static constexpr unsigned int BFAGAEJHEJH_TypeDefinitionIndex = 33950;

	class BFAGAEJHEJH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* EJJJNMKINKP; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* DFFEGIMOJGB; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 CLADFMOEPCK; // 0x28
		::System::UInt32 FLBKCMIIFFP; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_MODIEGGDDBH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BFAGAEJHEJH")->GetStaticField(0x18120);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BFAGAEJHEJH")->GetStaticField(0x18128);
		}

		static ::System::Object** StaticGet_LHGPCNNBOCL()
		{
			return (::System::Object**)UnitySDK::FromName("", "BFAGAEJHEJH")->GetStaticField(0x18130);
		}

		// static const ::System::Object JEALEDAFMPN; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object GHAAPPEBMBH; // 0x0
		// static const ::System::Object MIPCBMDOFEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BFAGAEJHEJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAGAEJHEJH*))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFAGAEJHEJH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BFAGAEJHEJH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BFAGAEJHEJH* Clone()
		{
			return ((::BFAGAEJHEJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* KKGOFMBMMAC()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_KKGOFMBMMAC_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* FMEIAEAMKPP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_FMEIAEAMKPP_OFFSET))(this);
		}

		::System::UInt32 BGDKFHEBDFJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void HEHJAJFJJMP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_HEHJAJFJJMP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BFAGAEJHEJH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFAGAEJHEJH*))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BFAGAEJHEJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAGAEJHEJH*))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BFAGAEJHEJH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
