#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBFJJFDFABF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LBFJJFDFABF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8ADF50)
#define LBFJJFDFABF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8AE100)
#define LBFJJFDFABF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8ADA40)
#define LBFJJFDFABF_COOJCNNMGGP_OFFSET UNITYSDK_OFFSET(0x1E8ADAB0)
#define LBFJJFDFABF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8AD9A0)
#define LBFJJFDFABF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AD950)
#define LBFJJFDFABF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8ADB50)
#define LBFJJFDFABF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8ADAC0)
#define LBFJJFDFABF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8ADC60)
#define LBFJJFDFABF_GOBCLJFPCAF_OFFSET UNITYSDK_OFFSET(0x1E8ADAA0)
#define LBFJJFDFABF_IEDOGJFAGIE_OFFSET UNITYSDK_OFFSET(0x1E8ADA70)
#define LBFJJFDFABF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8AD910)
#define LBFJJFDFABF_JJHAEJOCKPB_OFFSET UNITYSDK_OFFSET(0x1E8ADA80)
#define LBFJJFDFABF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8AE030)
#define LBFJJFDFABF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8ADFD0)
#define LBFJJFDFABF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8AD940)
#define LBFJJFDFABF_PLJDMOIAGBN_OFFSET UNITYSDK_OFFSET(0x1E8ADA90)
#define LBFJJFDFABF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8ADD60)
#define LBFJJFDFABF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8ADDC0)

inline static constexpr unsigned int LBFJJFDFABF_TypeDefinitionIndex = 30222;

	class LBFJJFDFABF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HIBIIFNLNJJ; // 0x18
		::System::Boolean DKDLLJDGCCB; // 0x20
		::System::Boolean HILCFELNGOM; // 0x21
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FLJBJMDPFHH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LBFJJFDFABF")->GetStaticField(0x25AC0);
		}

		static ::Google::Protobuf::MessageParser_1<::LBFJJFDFABF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LBFJJFDFABF*>**)UnitySDK::FromName("", "LBFJJFDFABF")->GetStaticField(0x25AC8);
		}

		// static const ::System::Object IICKCIKPOKO; // 0x0
		// static const ::System::Object IOFFJNOAHAM; // 0x0
		// static const ::System::Object DGBMBFCBOMK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFJJFDFABF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LBFJJFDFABF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBFJJFDFABF*))((::PBYTE)hIl2Cpp + LBFJJFDFABF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBFJJFDFABF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LBFJJFDFABF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LBFJJFDFABF*>*(*)())((::PBYTE)hIl2Cpp + LBFJJFDFABF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFJJFDFABF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LBFJJFDFABF* Clone()
		{
			return ((::LBFJJFDFABF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFJJFDFABF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IEDOGJFAGIE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFJJFDFABF_IEDOGJFAGIE_OFFSET))(this);
		}

		::System::Boolean JJHAEJOCKPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFJJFDFABF_JJHAEJOCKPB_OFFSET))(this);
		}

		::System::Void PLJDMOIAGBN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LBFJJFDFABF_PLJDMOIAGBN_OFFSET))(this, a1);
		}

		::System::Boolean GOBCLJFPCAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFJJFDFABF_GOBCLJFPCAF_OFFSET))(this);
		}

		::System::Void COOJCNNMGGP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LBFJJFDFABF_COOJCNNMGGP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBFJJFDFABF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LBFJJFDFABF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBFJJFDFABF*))((::PBYTE)hIl2Cpp + LBFJJFDFABF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFJJFDFABF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFJJFDFABF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LBFJJFDFABF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFJJFDFABF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LBFJJFDFABF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBFJJFDFABF*))((::PBYTE)hIl2Cpp + LBFJJFDFABF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LBFJJFDFABF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
