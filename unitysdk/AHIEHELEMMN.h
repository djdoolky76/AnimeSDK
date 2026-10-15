#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHIEHELEMMN;
class GFDCKPPKGAC;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHIEHELEMMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E271520)
#define AHIEHELEMMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2719E0)
#define AHIEHELEMMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E270F40)
#define AHIEHELEMMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E270E40)
#define AHIEHELEMMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E270DD0)
#define AHIEHELEMMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E271030)
#define AHIEHELEMMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E271000)
#define AHIEHELEMMN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E270FF0)
#define AHIEHELEMMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2711A0)
#define AHIEHELEMMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E270D90)
#define AHIEHELEMMN_JKCAABIMDDD_OFFSET UNITYSDK_OFFSET(0x1E270FD0)
#define AHIEHELEMMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2717D0)
#define AHIEHELEMMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E271710)
#define AHIEHELEMMN_MLDPCANEIHM_OFFSET UNITYSDK_OFFSET(0x1E270F70)
#define AHIEHELEMMN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E270FE0)
#define AHIEHELEMMN_ONMLEGFDMOI_OFFSET UNITYSDK_OFFSET(0x1E270F80)
#define AHIEHELEMMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E270DC0)
#define AHIEHELEMMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E271320)
#define AHIEHELEMMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E271380)

inline static constexpr unsigned int AHIEHELEMMN_TypeDefinitionIndex = 32120;

	class AHIEHELEMMN : public ::System::Object
	{
	public:
		::Google::Protobuf::ByteString* KBDCIGAEEHF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::GFDCKPPKGAC*>* ECALIBDEFIA; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AHIEHELEMMN")->GetStaticField(0x31E30);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_IHGJBGHGHKB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "AHIEHELEMMN")->GetStaticField(0x31E38);
		}

		// static const ::System::Object EGMDIFCIDGJ; // 0x0
		// static const ::System::Object PBCBHEOABPM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIEHELEMMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHIEHELEMMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHIEHELEMMN*))((::PBYTE)hIl2Cpp + AHIEHELEMMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHIEHELEMMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AHIEHELEMMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIEHELEMMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHIEHELEMMN* Clone()
		{
			return ((::AHIEHELEMMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIEHELEMMN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::ByteString* MLDPCANEIHM()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIEHELEMMN_MLDPCANEIHM_OFFSET))(this);
		}

		::System::Void ONMLEGFDMOI(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + AHIEHELEMMN_ONMLEGFDMOI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GFDCKPPKGAC*>* JKCAABIMDDD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GFDCKPPKGAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIEHELEMMN_JKCAABIMDDD_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIEHELEMMN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHIEHELEMMN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHIEHELEMMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHIEHELEMMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHIEHELEMMN*))((::PBYTE)hIl2Cpp + AHIEHELEMMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIEHELEMMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIEHELEMMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHIEHELEMMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIEHELEMMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHIEHELEMMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHIEHELEMMN*))((::PBYTE)hIl2Cpp + AHIEHELEMMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHIEHELEMMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
