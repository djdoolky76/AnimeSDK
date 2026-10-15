#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIJHAJAIFFH;
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

#define OIJHAJAIFFH_ABJBCBDIBAA_OFFSET UNITYSDK_OFFSET(0x1DE436C0)
#define OIJHAJAIFFH_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1DE43690)
#define OIJHAJAIFFH_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1DE43670)
#define OIJHAJAIFFH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE43BB0)
#define OIJHAJAIFFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE44000)
#define OIJHAJAIFFH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE43610)
#define OIJHAJAIFFH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE434D0)
#define OIJHAJAIFFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE43440)
#define OIJHAJAIFFH_ECLJEIOLMND_OFFSET UNITYSDK_OFFSET(0x1DE436A0)
#define OIJHAJAIFFH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE43740)
#define OIJHAJAIFFH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE436E0)
#define OIJHAJAIFFH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE43800)
#define OIJHAJAIFFH_HLAFLBKLBKA_OFFSET UNITYSDK_OFFSET(0x1DE436D0)
#define OIJHAJAIFFH_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1DE43680)
#define OIJHAJAIFFH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE433D0)
#define OIJHAJAIFFH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE43E80)
#define OIJHAJAIFFH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE43DE0)
#define OIJHAJAIFFH_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1DE43660)
#define OIJHAJAIFFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE43430)
#define OIJHAJAIFFH_PDJIOGFEPLI_OFFSET UNITYSDK_OFFSET(0x1DE436B0)
#define OIJHAJAIFFH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE43960)
#define OIJHAJAIFFH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE439C0)

inline static constexpr unsigned int OIJHAJAIFFH_TypeDefinitionIndex = 25661;

	class OIJHAJAIFFH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GPAACBEDJAL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* DAHFLBDBCGP; // 0x20
		::System::UInt32 KLINKNMHOCI; // 0x28
		::System::UInt32 PPNELLDGNPC; // 0x2C
		::System::UInt32 NNLJKKAEICI; // 0x30
		static ::System::Object** StaticGet_BCIPHACJLJN()
		{
			return (::System::Object**)UnitySDK::FromName("", "OIJHAJAIFFH")->GetStaticField(0x1ABF0);
		}

		static ::Google::Protobuf::MessageParser_1<::OIJHAJAIFFH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OIJHAJAIFFH*>**)UnitySDK::FromName("", "OIJHAJAIFFH")->GetStaticField(0x1ABF8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CEBEHEIEICH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OIJHAJAIFFH")->GetStaticField(0x1AC00);
		}

		// static const ::System::Object GKKKEHJAKII; // 0x0
		// static const ::System::Object GLIJLPOGDAK; // 0x0
		// static const ::System::Object BFMLFALLFGN; // 0x0
		// static const ::System::Object OPHEPKPJAFK; // 0x0
		// static const ::System::Object DMICCEIDIPA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OIJHAJAIFFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJHAJAIFFH*))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIJHAJAIFFH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OIJHAJAIFFH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OIJHAJAIFFH*>*(*)())((::PBYTE)hIl2Cpp + OIJHAJAIFFH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OIJHAJAIFFH* Clone()
		{
			return ((::OIJHAJAIFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_CLONE_OFFSET))(this);
		}

		::System::UInt32 MHHDBKELGIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::UInt32 ECLJEIOLMND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_ECLJEIOLMND_OFFSET))(this);
		}

		::System::Void PDJIOGFEPLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_PDJIOGFEPLI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ABJBCBDIBAA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_ABJBCBDIBAA_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* HLAFLBKLBKA()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_HLAFLBKLBKA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OIJHAJAIFFH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIJHAJAIFFH*))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OIJHAJAIFFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJHAJAIFFH*))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OIJHAJAIFFH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
