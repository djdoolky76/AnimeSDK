#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INBMHMPKACI;
class KNBIPFELFOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define INBMHMPKACI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6BFD50)
#define INBMHMPKACI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C01E0)
#define INBMHMPKACI_CFLFNKJPMDM_OFFSET UNITYSDK_OFFSET(0x1E6BF830)
#define INBMHMPKACI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6BF800)
#define INBMHMPKACI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6BF740)
#define INBMHMPKACI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6BF6F0)
#define INBMHMPKACI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6BF9E0)
#define INBMHMPKACI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6BF880)
#define INBMHMPKACI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6BFB10)
#define INBMHMPKACI_IFEDLJKNCKG_OFFSET UNITYSDK_OFFSET(0x1E6BF850)
#define INBMHMPKACI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6BF6B0)
#define INBMHMPKACI_MEDDFLDIABK_OFFSET UNITYSDK_OFFSET(0x1E6BF870)
#define INBMHMPKACI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6BFFF0)
#define INBMHMPKACI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6BFF40)
#define INBMHMPKACI_OCLBFNICOHN_OFFSET UNITYSDK_OFFSET(0x1E6BF860)
#define INBMHMPKACI_OHODKHCHLKM_OFFSET UNITYSDK_OFFSET(0x1E6BF840)
#define INBMHMPKACI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6BF6E0)
#define INBMHMPKACI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6BFB90)
#define INBMHMPKACI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6BFBF0)

inline static constexpr unsigned int INBMHMPKACI_TypeDefinitionIndex = 30567;

	class INBMHMPKACI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KNBIPFELFOG*>* LHIIKEEFNPJ; // 0x18
		::System::UInt32 KCMIMKALMNK; // 0x20
		::System::Byte _padding0[0x4];
		::System::Int64 DCLPDMKBCFP; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "INBMHMPKACI")->GetStaticField(0x17FE0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_HBLEEBCIDOO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "INBMHMPKACI")->GetStaticField(0x17FE8);
		}

		// static const ::System::Object MCCLNACNCCB; // 0x0
		// static const ::System::Object IOBKEKAOKPD; // 0x0
		// static const ::System::Object EHMKMJNLNHA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INBMHMPKACI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INBMHMPKACI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INBMHMPKACI*))((::PBYTE)hIl2Cpp + INBMHMPKACI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INBMHMPKACI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + INBMHMPKACI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBMHMPKACI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INBMHMPKACI* Clone()
		{
			return ((::INBMHMPKACI*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBMHMPKACI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KNBIPFELFOG*>* CFLFNKJPMDM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KNBIPFELFOG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBMHMPKACI_CFLFNKJPMDM_OFFSET))(this);
		}

		::System::Int64 OHODKHCHLKM()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + INBMHMPKACI_OHODKHCHLKM_OFFSET))(this);
		}

		::System::Void IFEDLJKNCKG(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + INBMHMPKACI_IFEDLJKNCKG_OFFSET))(this, a1);
		}

		::System::UInt32 OCLBFNICOHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBMHMPKACI_OCLBFNICOHN_OFFSET))(this);
		}

		::System::Void MEDDFLDIABK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INBMHMPKACI_MEDDFLDIABK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INBMHMPKACI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INBMHMPKACI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INBMHMPKACI*))((::PBYTE)hIl2Cpp + INBMHMPKACI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBMHMPKACI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBMHMPKACI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INBMHMPKACI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBMHMPKACI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INBMHMPKACI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INBMHMPKACI*))((::PBYTE)hIl2Cpp + INBMHMPKACI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INBMHMPKACI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
