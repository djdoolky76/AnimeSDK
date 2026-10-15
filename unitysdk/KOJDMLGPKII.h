#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOJDMLGPKII;
class LEFIDLICEMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOJDMLGPKII_AOJAPMPEHBG_OFFSET UNITYSDK_OFFSET(0x1E8B22B0)
#define KOJDMLGPKII_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8B2770)
#define KOJDMLGPKII_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B2B10)
#define KOJDMLGPKII_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8B2200)
#define KOJDMLGPKII_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8B2170)
#define KOJDMLGPKII_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B2160)
#define KOJDMLGPKII_DOMJNCIAHOA_OFFSET UNITYSDK_OFFSET(0x1E8B22A0)
#define KOJDMLGPKII_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8B2460)
#define KOJDMLGPKII_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8B22E0)
#define KOJDMLGPKII_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8B22D0)
#define KOJDMLGPKII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8B25E0)
#define KOJDMLGPKII_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8B2120)
#define KOJDMLGPKII_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8B2920)
#define KOJDMLGPKII_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8B2840)
#define KOJDMLGPKII_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8B22C0)
#define KOJDMLGPKII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8B2150)
#define KOJDMLGPKII_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8B2630)
#define KOJDMLGPKII_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8B2690)

inline static constexpr unsigned int KOJDMLGPKII_TypeDefinitionIndex = 27965;

	class KOJDMLGPKII : public ::System::Object
	{
	public:
		::LEFIDLICEMH* OCLCAKOKLIJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KOJDMLGPKII*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KOJDMLGPKII*>**)UnitySDK::FromName("", "KOJDMLGPKII")->GetStaticField(0x2B940);
		}

		// static const ::System::Object IMNBAGMPBGN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJDMLGPKII_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KOJDMLGPKII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOJDMLGPKII*))((::PBYTE)hIl2Cpp + KOJDMLGPKII_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOJDMLGPKII_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KOJDMLGPKII*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KOJDMLGPKII*>*(*)())((::PBYTE)hIl2Cpp + KOJDMLGPKII_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJDMLGPKII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KOJDMLGPKII* Clone()
		{
			return ((::KOJDMLGPKII*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJDMLGPKII_CLONE_OFFSET))(this);
		}

		::LEFIDLICEMH* DOMJNCIAHOA()
		{
			return ((::LEFIDLICEMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJDMLGPKII_DOMJNCIAHOA_OFFSET))(this);
		}

		::System::Void AOJAPMPEHBG(::LEFIDLICEMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEFIDLICEMH*))((::PBYTE)hIl2Cpp + KOJDMLGPKII_AOJAPMPEHBG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJDMLGPKII_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOJDMLGPKII_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOJDMLGPKII_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KOJDMLGPKII* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOJDMLGPKII*))((::PBYTE)hIl2Cpp + KOJDMLGPKII_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJDMLGPKII_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJDMLGPKII_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KOJDMLGPKII_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJDMLGPKII_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KOJDMLGPKII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOJDMLGPKII*))((::PBYTE)hIl2Cpp + KOJDMLGPKII_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KOJDMLGPKII_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
