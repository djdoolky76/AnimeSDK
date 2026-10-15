#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDEAABODKCP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDEAABODKCP_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E083EB0)
#define CDEAABODKCP_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1E083E50)
#define CDEAABODKCP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0844E0)
#define CDEAABODKCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E084AB0)
#define CDEAABODKCP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E083DF0)
#define CDEAABODKCP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E083D20)
#define CDEAABODKCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E083C70)
#define CDEAABODKCP_ECLJEIOLMND_OFFSET UNITYSDK_OFFSET(0x1E083ED0)
#define CDEAABODKCP_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E083E90)
#define CDEAABODKCP_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E083EC0)
#define CDEAABODKCP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E083F50)
#define CDEAABODKCP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E083EF0)
#define CDEAABODKCP_FJPGINAECGD_OFFSET UNITYSDK_OFFSET(0x1E083E60)
#define CDEAABODKCP_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E083EA0)
#define CDEAABODKCP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E084050)
#define CDEAABODKCP_HLAFLBKLBKA_OFFSET UNITYSDK_OFFSET(0x1E083E80)
#define CDEAABODKCP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E083C00)
#define CDEAABODKCP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0848B0)
#define CDEAABODKCP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0847E0)
#define CDEAABODKCP_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1E083E40)
#define CDEAABODKCP_ONGKCOIDDOK_OFFSET UNITYSDK_OFFSET(0x1E083E70)
#define CDEAABODKCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E083C60)
#define CDEAABODKCP_PDJIOGFEPLI_OFFSET UNITYSDK_OFFSET(0x1E083EE0)
#define CDEAABODKCP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0841C0)
#define CDEAABODKCP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E084220)

inline static constexpr unsigned int CDEAABODKCP_TypeDefinitionIndex = 29135;

	class CDEAABODKCP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AHDDICLFLFB; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* DKHECDLNPLE; // 0x20
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* DAHFLBDBCGP; // 0x28
		::System::UInt32 NNLJKKAEICI; // 0x30
		::System::UInt32 KLINKNMHOCI; // 0x34
		::System::UInt32 NPFBAFODCBI; // 0x38
		::System::UInt32 GEMFJILOPLL; // 0x3C
		static ::System::Object** StaticGet_BCIPHACJLJN()
		{
			return (::System::Object**)UnitySDK::FromName("", "CDEAABODKCP")->GetStaticField(0xF020);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CDEAABODKCP")->GetStaticField(0xF028);
		}

		static ::System::Object** StaticGet_KGCBHCJMKMI()
		{
			return (::System::Object**)UnitySDK::FromName("", "CDEAABODKCP")->GetStaticField(0xF030);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NANHKNECMEF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CDEAABODKCP")->GetStaticField(0xF038);
		}

		// static const ::System::Object GKKKEHJAKII; // 0x0
		// static const ::System::Object LIOCIDAKJOJ; // 0x0
		// static const ::System::Object OOHBAONFDKM; // 0x0
		// static const ::System::Object DMICCEIDIPA; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object BFMLFALLFGN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEAABODKCP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + CDEAABODKCP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDEAABODKCP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CDEAABODKCP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEAABODKCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDEAABODKCP* Clone()
		{
			return ((::CDEAABODKCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEAABODKCP_CLONE_OFFSET))(this);
		}

		::System::UInt32 MHHDBKELGIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEAABODKCP_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDEAABODKCP_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FJPGINAECGD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEAABODKCP_FJPGINAECGD_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* ONGKCOIDDOK()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEAABODKCP_ONGKCOIDDOK_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* HLAFLBKLBKA()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEAABODKCP_HLAFLBKLBKA_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEAABODKCP_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDEAABODKCP_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEAABODKCP_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDEAABODKCP_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 ECLJEIOLMND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEAABODKCP_ECLJEIOLMND_OFFSET))(this);
		}

		::System::Void PDJIOGFEPLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDEAABODKCP_PDJIOGFEPLI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDEAABODKCP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDEAABODKCP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + CDEAABODKCP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEAABODKCP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEAABODKCP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDEAABODKCP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEAABODKCP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + CDEAABODKCP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDEAABODKCP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
