#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCAJNMLLIED;
class JINIOBBNJPF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define JINIOBBNJPF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA80E70)
#define JINIOBBNJPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA81360)
#define JINIOBBNJPF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA80690)
#define JINIOBBNJPF_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1FA80790)
#define JINIOBBNJPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA805E0)
#define JINIOBBNJPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA805D0)
#define JINIOBBNJPF_EOOJEDIKKEL_OFFSET UNITYSDK_OFFSET(0x1FA80760)
#define JINIOBBNJPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA809E0)
#define JINIOBBNJPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA807B0)
#define JINIOBBNJPF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FA80780)
#define JINIOBBNJPF_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1FA807A0)
#define JINIOBBNJPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA80C10)
#define JINIOBBNJPF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA80590)
#define JINIOBBNJPF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA810E0)
#define JINIOBBNJPF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA80F80)
#define JINIOBBNJPF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FA80770)
#define JINIOBBNJPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA805C0)
#define JINIOBBNJPF_PDHEAGHGFBI_OFFSET UNITYSDK_OFFSET(0x1FA80750)
#define JINIOBBNJPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA80CD0)
#define JINIOBBNJPF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA80D30)

inline static constexpr unsigned int JINIOBBNJPF_TypeDefinitionIndex = 33371;

	class JINIOBBNJPF : public ::System::Object
	{
	public:
		::BCAJNMLLIED* OOPMJECACJK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Proto::ItemList* JDAFJANAEBG; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::JINIOBBNJPF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JINIOBBNJPF*>**)UnitySDK::FromName("", "JINIOBBNJPF")->GetStaticField(0x4C770);
		}

		// static const ::System::Object CMNPBEMLKOF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINIOBBNJPF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JINIOBBNJPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JINIOBBNJPF*))((::PBYTE)hIl2Cpp + JINIOBBNJPF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JINIOBBNJPF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JINIOBBNJPF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JINIOBBNJPF*>*(*)())((::PBYTE)hIl2Cpp + JINIOBBNJPF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JINIOBBNJPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JINIOBBNJPF* Clone()
		{
			return ((::JINIOBBNJPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JINIOBBNJPF_CLONE_OFFSET))(this);
		}

		::BCAJNMLLIED* PDHEAGHGFBI()
		{
			return ((::BCAJNMLLIED*(*)(::PVOID))((::PBYTE)hIl2Cpp + JINIOBBNJPF_PDHEAGHGFBI_OFFSET))(this);
		}

		::System::Void EOOJEDIKKEL(::BCAJNMLLIED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCAJNMLLIED*))((::PBYTE)hIl2Cpp + JINIOBBNJPF_EOOJEDIKKEL_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JINIOBBNJPF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JINIOBBNJPF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + JINIOBBNJPF_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + JINIOBBNJPF_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JINIOBBNJPF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JINIOBBNJPF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JINIOBBNJPF*))((::PBYTE)hIl2Cpp + JINIOBBNJPF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JINIOBBNJPF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JINIOBBNJPF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JINIOBBNJPF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JINIOBBNJPF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JINIOBBNJPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JINIOBBNJPF*))((::PBYTE)hIl2Cpp + JINIOBBNJPF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JINIOBBNJPF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
