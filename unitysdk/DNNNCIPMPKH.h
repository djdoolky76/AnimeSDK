#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNNNCIPMPKH;
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

#define DNNNCIPMPKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1FA400)
#define DNNNCIPMPKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1FA6E0)
#define DNNNCIPMPKH_CHBPFJKAAEA_OFFSET UNITYSDK_OFFSET(0x1E1F9E00)
#define DNNNCIPMPKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1F9DC0)
#define DNNNCIPMPKH_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E1F9E20)
#define DNNNCIPMPKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1F9D00)
#define DNNNCIPMPKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F9CB0)
#define DNNNCIPMPKH_DOBADLGINPO_OFFSET UNITYSDK_OFFSET(0x1E1F9E10)
#define DNNNCIPMPKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1F9F60)
#define DNNNCIPMPKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1F9E40)
#define DNNNCIPMPKH_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E1F9E30)
#define DNNNCIPMPKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1FA110)
#define DNNNCIPMPKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1F9C70)
#define DNNNCIPMPKH_JMPKKEDGNMG_OFFSET UNITYSDK_OFFSET(0x1E1F9DF0)
#define DNNNCIPMPKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1FA5C0)
#define DNNNCIPMPKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1FA510)
#define DNNNCIPMPKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1F9CA0)
#define DNNNCIPMPKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1FA270)
#define DNNNCIPMPKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1FA2D0)

inline static constexpr unsigned int DNNNCIPMPKH_TypeDefinitionIndex = 28463;

	class DNNNCIPMPKH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CPCNEHMMPBC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Proto::ItemList* JDAFJANAEBG; // 0x20
		::System::UInt32 IHIJEFLBCEM; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_OCEJMIJFEJC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DNNNCIPMPKH")->GetStaticField(0x40DF0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DNNNCIPMPKH")->GetStaticField(0x40DF8);
		}

		// static const ::System::Object GBOFOCLMOHJ; // 0x0
		// static const ::System::Object FKIPBCDBIFP; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DNNNCIPMPKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNNNCIPMPKH*))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNNNCIPMPKH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DNNNCIPMPKH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DNNNCIPMPKH* Clone()
		{
			return ((::DNNNCIPMPKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_CLONE_OFFSET))(this);
		}

		::System::UInt32 JMPKKEDGNMG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_JMPKKEDGNMG_OFFSET))(this);
		}

		::System::Void CHBPFJKAAEA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_CHBPFJKAAEA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DOBADLGINPO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_DOBADLGINPO_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DNNNCIPMPKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNNNCIPMPKH*))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DNNNCIPMPKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNNNCIPMPKH*))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DNNNCIPMPKH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
