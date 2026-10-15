#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIONJNJEBBF;
class NDIGHHGLNED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NDIGHHGLNED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAE7110)
#define NDIGHHGLNED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE7560)
#define NDIGHHGLNED_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAE6B90)
#define NDIGHHGLNED_CNAEBONDMPH_OFFSET UNITYSDK_OFFSET(0x1EAE6C20)
#define NDIGHHGLNED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAE6A50)
#define NDIGHHGLNED_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE69C0)
#define NDIGHHGLNED_DOMNIAGBEJF_OFFSET UNITYSDK_OFFSET(0x1EAE6BF0)
#define NDIGHHGLNED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAE6C60)
#define NDIGHHGLNED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAE6C30)
#define NDIGHHGLNED_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAE6C10)
#define NDIGHHGLNED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAE6DC0)
#define NDIGHHGLNED_HNJJFPLCIDO_OFFSET UNITYSDK_OFFSET(0x1EAE6BD0)
#define NDIGHHGLNED_ILFHAICFKOD_OFFSET UNITYSDK_OFFSET(0x1EAE6BC0)
#define NDIGHHGLNED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAE6980)
#define NDIGHHGLNED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAE73C0)
#define NDIGHHGLNED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAE72D0)
#define NDIGHHGLNED_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAE6C00)
#define NDIGHHGLNED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAE69B0)
#define NDIGHHGLNED_PPIAGAMNCJH_OFFSET UNITYSDK_OFFSET(0x1EAE6BE0)
#define NDIGHHGLNED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAE6F20)
#define NDIGHHGLNED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAE6F80)

inline static constexpr unsigned int NDIGHHGLNED_TypeDefinitionIndex = 34564;

	class NDIGHHGLNED : public ::System::Object
	{
	public:
		::LIONJNJEBBF* MKEFFODJJJB; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* ANHLBHCJGFB; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* EOIOKFPCCPE; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EFHMOIHGIIL; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x38
		static ::Google::Protobuf::MessageParser_1<::NDIGHHGLNED*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NDIGHHGLNED*>**)UnitySDK::FromName("", "NDIGHHGLNED")->GetStaticField(0x5D540);
		}

		static ::System::Object** StaticGet_NCGKPPNDBPH()
		{
			return (::System::Object**)UnitySDK::FromName("", "NDIGHHGLNED")->GetStaticField(0x5D548);
		}

		static ::System::Object** StaticGet_GMKDGKGJECG()
		{
			return (::System::Object**)UnitySDK::FromName("", "NDIGHHGLNED")->GetStaticField(0x5D550);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IMLLHKKIENC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NDIGHHGLNED")->GetStaticField(0x5D558);
		}

		// static const ::System::Object NAEHMKKGKMJ; // 0x0
		// static const ::System::Object IBKMPKEILLJ; // 0x0
		// static const ::System::Object OCFCIANNKKI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HPLGOEGHNNL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIGHHGLNED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NDIGHHGLNED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDIGHHGLNED*))((::PBYTE)hIl2Cpp + NDIGHHGLNED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDIGHHGLNED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NDIGHHGLNED*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NDIGHHGLNED*>*(*)())((::PBYTE)hIl2Cpp + NDIGHHGLNED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIGHHGLNED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NDIGHHGLNED* Clone()
		{
			return ((::NDIGHHGLNED*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIGHHGLNED_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* ILFHAICFKOD()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIGHHGLNED_ILFHAICFKOD_OFFSET))(this);
		}

		::LIONJNJEBBF* HNJJFPLCIDO()
		{
			return ((::LIONJNJEBBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIGHHGLNED_HNJJFPLCIDO_OFFSET))(this);
		}

		::System::Void PPIAGAMNCJH(::LIONJNJEBBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIONJNJEBBF*))((::PBYTE)hIl2Cpp + NDIGHHGLNED_PPIAGAMNCJH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DOMNIAGBEJF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIGHHGLNED_DOMNIAGBEJF_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIGHHGLNED_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDIGHHGLNED_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* CNAEBONDMPH()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIGHHGLNED_CNAEBONDMPH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDIGHHGLNED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NDIGHHGLNED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NDIGHHGLNED*))((::PBYTE)hIl2Cpp + NDIGHHGLNED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIGHHGLNED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIGHHGLNED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NDIGHHGLNED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDIGHHGLNED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NDIGHHGLNED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDIGHHGLNED*))((::PBYTE)hIl2Cpp + NDIGHHGLNED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NDIGHHGLNED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
