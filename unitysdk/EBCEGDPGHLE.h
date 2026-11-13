#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBCEGDPGHLE;
class IBKDHOIDKJA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBCEGDPGHLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x203F5140)
#define EBCEGDPGHLE_CCCPJJGAPMG_OFFSET UNITYSDK_OFFSET(0x203F4C20)
#define EBCEGDPGHLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x203F54D0)
#define EBCEGDPGHLE_CLONE_OFFSET UNITYSDK_OFFSET(0x203F4B60)
#define EBCEGDPGHLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203F4AF0)
#define EBCEGDPGHLE_CTOR_OFFSET UNITYSDK_OFFSET(0x203F4AE0)
#define EBCEGDPGHLE_DCOCMGGGBLK_OFFSET UNITYSDK_OFFSET(0x203F4C10)
#define EBCEGDPGHLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x203F4DD0)
#define EBCEGDPGHLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x203F4C40)
#define EBCEGDPGHLE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x203F4BF0)
#define EBCEGDPGHLE_GENEPDAFIGA_OFFSET UNITYSDK_OFFSET(0x203F4C30)
#define EBCEGDPGHLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203F4F60)
#define EBCEGDPGHLE_JHBECLOCNML_OFFSET UNITYSDK_OFFSET(0x203F4C00)
#define EBCEGDPGHLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x203F4AA0)
#define EBCEGDPGHLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x203F5310)
#define EBCEGDPGHLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203F5280)
#define EBCEGDPGHLE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x203F4BE0)
#define EBCEGDPGHLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x203F4AD0)
#define EBCEGDPGHLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x203F4FA0)
#define EBCEGDPGHLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x203F5000)

inline static constexpr unsigned int EBCEGDPGHLE_TypeDefinitionIndex = 33148;

	class EBCEGDPGHLE : public ::System::Object
	{
	public:
		::IBKDHOIDKJA* DJBOHGCJIMO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 MEALCOLCNAH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::EBCEGDPGHLE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EBCEGDPGHLE*>**)UnitySDK::FromName("", "EBCEGDPGHLE")->GetStaticField(0x40390);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DONGOAMFBOG; // 0x0
		// static const ::System::Object CPKHFLBNJPA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBCEGDPGHLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBCEGDPGHLE*))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBCEGDPGHLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EBCEGDPGHLE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EBCEGDPGHLE*>*(*)())((::PBYTE)hIl2Cpp + EBCEGDPGHLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBCEGDPGHLE* Clone()
		{
			return ((::EBCEGDPGHLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 JHBECLOCNML()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_JHBECLOCNML_OFFSET))(this);
		}

		::System::Void DCOCMGGGBLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_DCOCMGGGBLK_OFFSET))(this, a1);
		}

		::IBKDHOIDKJA* CCCPJJGAPMG()
		{
			return ((::IBKDHOIDKJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_CCCPJJGAPMG_OFFSET))(this);
		}

		::System::Void GENEPDAFIGA(::IBKDHOIDKJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBKDHOIDKJA*))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_GENEPDAFIGA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBCEGDPGHLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBCEGDPGHLE*))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBCEGDPGHLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBCEGDPGHLE*))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBCEGDPGHLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
