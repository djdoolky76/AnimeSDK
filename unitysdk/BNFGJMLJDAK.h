#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNFGJMLJDAK;
class GHBICGMEFPL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BNFGJMLJDAK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0326A0)
#define BNFGJMLJDAK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E032980)
#define BNFGJMLJDAK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E032280)
#define BNFGJMLJDAK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0321F0)
#define BNFGJMLJDAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0321B0)
#define BNFGJMLJDAK_DMDKCJAKPMA_OFFSET UNITYSDK_OFFSET(0x1E0322B0)
#define BNFGJMLJDAK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E032400)
#define BNFGJMLJDAK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0322C0)
#define BNFGJMLJDAK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E032520)
#define BNFGJMLJDAK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E032170)
#define BNFGJMLJDAK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0327E0)
#define BNFGJMLJDAK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E032740)
#define BNFGJMLJDAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0321A0)
#define BNFGJMLJDAK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E032590)
#define BNFGJMLJDAK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0325F0)

inline static constexpr unsigned int BNFGJMLJDAK_TypeDefinitionIndex = 26129;

	class BNFGJMLJDAK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::GHBICGMEFPL*>* ILJJCHCOIBO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BNFGJMLJDAK")->GetStaticField(0x523B0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NKDPEEHHFCP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BNFGJMLJDAK")->GetStaticField(0x523B8);
		}

		// static const ::System::Object FJAPCLLOJCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGJMLJDAK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BNFGJMLJDAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNFGJMLJDAK*))((::PBYTE)hIl2Cpp + BNFGJMLJDAK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNFGJMLJDAK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BNFGJMLJDAK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGJMLJDAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BNFGJMLJDAK* Clone()
		{
			return ((::BNFGJMLJDAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGJMLJDAK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GHBICGMEFPL*>* DMDKCJAKPMA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GHBICGMEFPL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGJMLJDAK_DMDKCJAKPMA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNFGJMLJDAK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BNFGJMLJDAK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BNFGJMLJDAK*))((::PBYTE)hIl2Cpp + BNFGJMLJDAK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGJMLJDAK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGJMLJDAK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BNFGJMLJDAK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGJMLJDAK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BNFGJMLJDAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNFGJMLJDAK*))((::PBYTE)hIl2Cpp + BNFGJMLJDAK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BNFGJMLJDAK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
