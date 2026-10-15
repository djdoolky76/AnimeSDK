#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INPJIEHGCEG;
class KEHOGIENDKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define INPJIEHGCEG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6C7AD0)
#define INPJIEHGCEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C7F30)
#define INPJIEHGCEG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6C7680)
#define INPJIEHGCEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6C7570)
#define INPJIEHGCEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C7500)
#define INPJIEHGCEG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6C7720)
#define INPJIEHGCEG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6C76F0)
#define INPJIEHGCEG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6C76C0)
#define INPJIEHGCEG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6C7870)
#define INPJIEHGCEG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6C74C0)
#define INPJIEHGCEG_KIGOKLJICON_OFFSET UNITYSDK_OFFSET(0x1E6C76E0)
#define INPJIEHGCEG_LNOAKMCOBFO_OFFSET UNITYSDK_OFFSET(0x1E6C76D0)
#define INPJIEHGCEG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6C7D10)
#define INPJIEHGCEG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6C7C10)
#define INPJIEHGCEG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6C76B0)
#define INPJIEHGCEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6C74F0)
#define INPJIEHGCEG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6C7900)
#define INPJIEHGCEG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6C7960)

inline static constexpr unsigned int INPJIEHGCEG_TypeDefinitionIndex = 32217;

	class INPJIEHGCEG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KEHOGIENDKC*>* JCBHLCMNAPO; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* FOOECIHLNOF; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_JEOPIHDPNOC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "INPJIEHGCEG")->GetStaticField(0x58BD0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "INPJIEHGCEG")->GetStaticField(0x58BD8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JNNLPFIKNJF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "INPJIEHGCEG")->GetStaticField(0x58BE0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BMCFBKDGLNG; // 0x0
		// static const ::System::Object BDFIJFHMINA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPJIEHGCEG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INPJIEHGCEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INPJIEHGCEG*))((::PBYTE)hIl2Cpp + INPJIEHGCEG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INPJIEHGCEG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + INPJIEHGCEG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPJIEHGCEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INPJIEHGCEG* Clone()
		{
			return ((::INPJIEHGCEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPJIEHGCEG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INPJIEHGCEG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INPJIEHGCEG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KEHOGIENDKC*>* LNOAKMCOBFO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KEHOGIENDKC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPJIEHGCEG_LNOAKMCOBFO_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* KIGOKLJICON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPJIEHGCEG_KIGOKLJICON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INPJIEHGCEG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INPJIEHGCEG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INPJIEHGCEG*))((::PBYTE)hIl2Cpp + INPJIEHGCEG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INPJIEHGCEG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPJIEHGCEG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INPJIEHGCEG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INPJIEHGCEG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INPJIEHGCEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INPJIEHGCEG*))((::PBYTE)hIl2Cpp + INPJIEHGCEG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INPJIEHGCEG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
