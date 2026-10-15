#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIOCPFLCNLB;
class IDBCDHIOKEG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AIOCPFLCNLB_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E254750)
#define AIOCPFLCNLB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E254BC0)
#define AIOCPFLCNLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E254FA0)
#define AIOCPFLCNLB_CINCCOBLOOC_OFFSET UNITYSDK_OFFSET(0x1E254790)
#define AIOCPFLCNLB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2546E0)
#define AIOCPFLCNLB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E254640)
#define AIOCPFLCNLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E254600)
#define AIOCPFLCNLB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E254800)
#define AIOCPFLCNLB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2547A0)
#define AIOCPFLCNLB_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E254740)
#define AIOCPFLCNLB_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1E254760)
#define AIOCPFLCNLB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E254930)
#define AIOCPFLCNLB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E254590)
#define AIOCPFLCNLB_LEDIGJDPLFE_OFFSET UNITYSDK_OFFSET(0x1E254780)
#define AIOCPFLCNLB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E254EA0)
#define AIOCPFLCNLB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E254DE0)
#define AIOCPFLCNLB_MJMBNPOBAEG_OFFSET UNITYSDK_OFFSET(0x1E254730)
#define AIOCPFLCNLB_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1E254770)
#define AIOCPFLCNLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2545F0)
#define AIOCPFLCNLB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2549A0)
#define AIOCPFLCNLB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E254A00)

inline static constexpr unsigned int AIOCPFLCNLB_TypeDefinitionIndex = 34842;

	class AIOCPFLCNLB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::IDBCDHIOKEG*>* JFDKGKMNLIH; // 0x18
		::System::UInt32 NDFIDCNNGMJ; // 0x20
		::System::UInt32 MLCHFINKHHM; // 0x24
		::System::UInt32 LCFEJAGDGOE; // 0x28
		static ::Google::Protobuf::MessageParser_1<::AIOCPFLCNLB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AIOCPFLCNLB*>**)UnitySDK::FromName("", "AIOCPFLCNLB")->GetStaticField(0x3BD30);
		}

		static ::Google::Protobuf::FieldCodec_1<::IDBCDHIOKEG*>** StaticGet_ONFFGAGCDBJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::IDBCDHIOKEG*>**)UnitySDK::FromName("", "AIOCPFLCNLB")->GetStaticField(0x3BD38);
		}

		// static const ::System::Object BDBOPPOJIEA; // 0x0
		// static const ::System::Object HBIJBPKKMNN; // 0x0
		// static const ::System::Object KLJANMLJHEF; // 0x0
		// static const ::System::Object LPINGDBBCOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AIOCPFLCNLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIOCPFLCNLB*))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIOCPFLCNLB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AIOCPFLCNLB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AIOCPFLCNLB*>*(*)())((::PBYTE)hIl2Cpp + AIOCPFLCNLB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AIOCPFLCNLB* Clone()
		{
			return ((::AIOCPFLCNLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IDBCDHIOKEG*>* MJMBNPOBAEG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IDBCDHIOKEG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_MJMBNPOBAEG_OFFSET))(this);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::UInt32 LEDIGJDPLFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_LEDIGJDPLFE_OFFSET))(this);
		}

		::System::Void CINCCOBLOOC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_CINCCOBLOOC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AIOCPFLCNLB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIOCPFLCNLB*))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AIOCPFLCNLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIOCPFLCNLB*))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AIOCPFLCNLB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
