#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLFHJLDBOEA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NLFHJLDBOEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F052DB0)
#define NLFHJLDBOEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F053010)
#define NLFHJLDBOEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F052800)
#define NLFHJLDBOEA_COOJCNNMGGP_OFFSET UNITYSDK_OFFSET(0x1F052880)
#define NLFHJLDBOEA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F052760)
#define NLFHJLDBOEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F052710)
#define NLFHJLDBOEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F052940)
#define NLFHJLDBOEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0528A0)
#define NLFHJLDBOEA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F052840)
#define NLFHJLDBOEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F052A50)
#define NLFHJLDBOEA_GOBCLJFPCAF_OFFSET UNITYSDK_OFFSET(0x1F052870)
#define NLFHJLDBOEA_IEDOGJFAGIE_OFFSET UNITYSDK_OFFSET(0x1F052890)
#define NLFHJLDBOEA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F0526D0)
#define NLFHJLDBOEA_JJHAEJOCKPB_OFFSET UNITYSDK_OFFSET(0x1F052850)
#define NLFHJLDBOEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F052F10)
#define NLFHJLDBOEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F052EB0)
#define NLFHJLDBOEA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F052830)
#define NLFHJLDBOEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F052700)
#define NLFHJLDBOEA_PLJDMOIAGBN_OFFSET UNITYSDK_OFFSET(0x1F052860)
#define NLFHJLDBOEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F052B60)
#define NLFHJLDBOEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F052BC0)

inline static constexpr unsigned int NLFHJLDBOEA_TypeDefinitionIndex = 31122;

	class NLFHJLDBOEA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HIBIIFNLNJJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::Boolean DKDLLJDGCCB; // 0x24
		::System::Boolean HILCFELNGOM; // 0x25
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FLJBJMDPFHH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NLFHJLDBOEA")->GetStaticField(0x70BF0);
		}

		static ::Google::Protobuf::MessageParser_1<::NLFHJLDBOEA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NLFHJLDBOEA*>**)UnitySDK::FromName("", "NLFHJLDBOEA")->GetStaticField(0x70BF8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IOFFJNOAHAM; // 0x0
		// static const ::System::Object DGBMBFCBOMK; // 0x0
		// static const ::System::Object IICKCIKPOKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NLFHJLDBOEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLFHJLDBOEA*))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLFHJLDBOEA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NLFHJLDBOEA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NLFHJLDBOEA*>*(*)())((::PBYTE)hIl2Cpp + NLFHJLDBOEA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NLFHJLDBOEA* Clone()
		{
			return ((::NLFHJLDBOEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean JJHAEJOCKPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_JJHAEJOCKPB_OFFSET))(this);
		}

		::System::Void PLJDMOIAGBN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_PLJDMOIAGBN_OFFSET))(this, a1);
		}

		::System::Boolean GOBCLJFPCAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_GOBCLJFPCAF_OFFSET))(this);
		}

		::System::Void COOJCNNMGGP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_COOJCNNMGGP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IEDOGJFAGIE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_IEDOGJFAGIE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NLFHJLDBOEA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLFHJLDBOEA*))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NLFHJLDBOEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLFHJLDBOEA*))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NLFHJLDBOEA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
