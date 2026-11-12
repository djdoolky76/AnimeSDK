#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FANIODAOCGG;
class KFACLOGFNJF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FANIODAOCGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F610170)
#define FANIODAOCGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6104D0)
#define FANIODAOCGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1F60FC20)
#define FANIODAOCGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F60FBB0)
#define FANIODAOCGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F60FBA0)
#define FANIODAOCGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F60FE60)
#define FANIODAOCGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F60FCE0)
#define FANIODAOCGG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F60FCD0)
#define FANIODAOCGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F60FFE0)
#define FANIODAOCGG_IMHIOGCKGIF_OFFSET UNITYSDK_OFFSET(0x1F60FCA0)
#define FANIODAOCGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F60FB60)
#define FANIODAOCGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6102F0)
#define FANIODAOCGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F610240)
#define FANIODAOCGG_NBEIAFHAJOI_OFFSET UNITYSDK_OFFSET(0x1F60FCB0)
#define FANIODAOCGG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F60FCC0)
#define FANIODAOCGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F60FB90)
#define FANIODAOCGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F610030)
#define FANIODAOCGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F610090)

inline static constexpr unsigned int FANIODAOCGG_TypeDefinitionIndex = 27948;

	class FANIODAOCGG : public ::System::Object
	{
	public:
		::KFACLOGFNJF* NJIGKFFGPLD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FANIODAOCGG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FANIODAOCGG*>**)UnitySDK::FromName("", "FANIODAOCGG")->GetStaticField(0x55A70);
		}

		// static const ::System::Object NNOBLNPPJGB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FANIODAOCGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FANIODAOCGG*))((::PBYTE)hIl2Cpp + FANIODAOCGG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FANIODAOCGG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FANIODAOCGG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FANIODAOCGG*>*(*)())((::PBYTE)hIl2Cpp + FANIODAOCGG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FANIODAOCGG* Clone()
		{
			return ((::FANIODAOCGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG_CLONE_OFFSET))(this);
		}

		::KFACLOGFNJF* IMHIOGCKGIF()
		{
			return ((::KFACLOGFNJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG_IMHIOGCKGIF_OFFSET))(this);
		}

		::System::Void NBEIAFHAJOI(::KFACLOGFNJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFACLOGFNJF*))((::PBYTE)hIl2Cpp + FANIODAOCGG_NBEIAFHAJOI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FANIODAOCGG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FANIODAOCGG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FANIODAOCGG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FANIODAOCGG*))((::PBYTE)hIl2Cpp + FANIODAOCGG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FANIODAOCGG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FANIODAOCGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FANIODAOCGG*))((::PBYTE)hIl2Cpp + FANIODAOCGG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FANIODAOCGG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
