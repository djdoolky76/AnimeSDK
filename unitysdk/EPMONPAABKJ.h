#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPMONPAABKJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPMONPAABKJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E318210)
#define EPMONPAABKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E318590)
#define EPMONPAABKJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E317DF0)
#define EPMONPAABKJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E317DB0)
#define EPMONPAABKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E317DA0)
#define EPMONPAABKJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E317F80)
#define EPMONPAABKJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E317EA0)
#define EPMONPAABKJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E317E70)
#define EPMONPAABKJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E318050)
#define EPMONPAABKJ_HPGLDOOFONJ_OFFSET UNITYSDK_OFFSET(0x1E317E40)
#define EPMONPAABKJ_JAIBDNHIIEP_OFFSET UNITYSDK_OFFSET(0x1E317E80)
#define EPMONPAABKJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E317D60)
#define EPMONPAABKJ_LHHNFAAPDNJ_OFFSET UNITYSDK_OFFSET(0x1E317E90)
#define EPMONPAABKJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3183F0)
#define EPMONPAABKJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3183A0)
#define EPMONPAABKJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E317E60)
#define EPMONPAABKJ_PAJHAHFHLEI_OFFSET UNITYSDK_OFFSET(0x1E317E50)
#define EPMONPAABKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E317D90)
#define EPMONPAABKJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E318080)
#define EPMONPAABKJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3180E0)

	class EPMONPAABKJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IOJPFPKAAOP; // 0x18
		::System::UInt32 HCEBEMOCOPC; // 0x1C
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EPMONPAABKJ")->GetStaticField(0x56AD0);
		}

		// static const ::System::Object EBNBMOHHABN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EMDNBPGMNCO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMONPAABKJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPMONPAABKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPMONPAABKJ*))((::PBYTE)hIl2Cpp + EPMONPAABKJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPMONPAABKJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EPMONPAABKJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMONPAABKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPMONPAABKJ* Clone()
		{
			return ((::EPMONPAABKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMONPAABKJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 HPGLDOOFONJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMONPAABKJ_HPGLDOOFONJ_OFFSET))(this);
		}

		::System::Void PAJHAHFHLEI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPMONPAABKJ_PAJHAHFHLEI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMONPAABKJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPMONPAABKJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 JAIBDNHIIEP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMONPAABKJ_JAIBDNHIIEP_OFFSET))(this);
		}

		::System::Void LHHNFAAPDNJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPMONPAABKJ_LHHNFAAPDNJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPMONPAABKJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPMONPAABKJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPMONPAABKJ*))((::PBYTE)hIl2Cpp + EPMONPAABKJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMONPAABKJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMONPAABKJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPMONPAABKJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMONPAABKJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPMONPAABKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPMONPAABKJ*))((::PBYTE)hIl2Cpp + EPMONPAABKJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPMONPAABKJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
