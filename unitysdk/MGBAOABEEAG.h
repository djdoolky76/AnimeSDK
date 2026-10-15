#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJLNGGEEFKD;
class MGBAOABEEAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGBAOABEEAG_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E9EEF60)
#define MGBAOABEEAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9EF3F0)
#define MGBAOABEEAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9EF860)
#define MGBAOABEEAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9EEF10)
#define MGBAOABEEAG_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E9EEFA0)
#define MGBAOABEEAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9EEE70)
#define MGBAOABEEAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EEE30)
#define MGBAOABEEAG_EIDJCBPCIDF_OFFSET UNITYSDK_OFFSET(0x1E9EEFD0)
#define MGBAOABEEAG_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E9EEF70)
#define MGBAOABEEAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9EF050)
#define MGBAOABEEAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9EEFF0)
#define MGBAOABEEAG_FDBIMIKEHJF_OFFSET UNITYSDK_OFFSET(0x1E9EEFC0)
#define MGBAOABEEAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9EF0F0)
#define MGBAOABEEAG_IPFBNDCHFEF_OFFSET UNITYSDK_OFFSET(0x1E9EEF90)
#define MGBAOABEEAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9EEDC0)
#define MGBAOABEEAG_KDDOOLNAFNH_OFFSET UNITYSDK_OFFSET(0x1E9EEFE0)
#define MGBAOABEEAG_LDBCEEPAELL_OFFSET UNITYSDK_OFFSET(0x1E9EEF80)
#define MGBAOABEEAG_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E9EEFB0)
#define MGBAOABEEAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9EF740)
#define MGBAOABEEAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9EF670)
#define MGBAOABEEAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9EEE20)
#define MGBAOABEEAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9EF180)
#define MGBAOABEEAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9EF1E0)

inline static constexpr unsigned int MGBAOABEEAG_TypeDefinitionIndex = 25177;

	class MGBAOABEEAG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::AJLNGGEEFKD*>* MANEMOFCLAP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NPFBAFODCBI; // 0x20
		::System::UInt32 NAJINDCEHMM; // 0x24
		::System::UInt32 DNKADAFBILN; // 0x28
		::System::UInt32 BNFAJJPCBEI; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::MGBAOABEEAG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MGBAOABEEAG*>**)UnitySDK::FromName("", "MGBAOABEEAG")->GetStaticField(0x42540);
		}

		static ::Google::Protobuf::FieldCodec_1<::AJLNGGEEFKD*>** StaticGet_JNHIPDOCMMO()
		{
			return (::Google::Protobuf::FieldCodec_1<::AJLNGGEEFKD*>**)UnitySDK::FromName("", "MGBAOABEEAG")->GetStaticField(0x42548);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object JOBMICAKNHM; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object PEGMPHBKJOK; // 0x0
		// static const ::System::Object KKFDBFJLGNK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBAOABEEAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGBAOABEEAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBAOABEEAG*))((::PBYTE)hIl2Cpp + MGBAOABEEAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGBAOABEEAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MGBAOABEEAG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MGBAOABEEAG*>*(*)())((::PBYTE)hIl2Cpp + MGBAOABEEAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBAOABEEAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGBAOABEEAG* Clone()
		{
			return ((::MGBAOABEEAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBAOABEEAG_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBAOABEEAG_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGBAOABEEAG_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 LDBCEEPAELL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBAOABEEAG_LDBCEEPAELL_OFFSET))(this);
		}

		::System::Void IPFBNDCHFEF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGBAOABEEAG_IPFBNDCHFEF_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBAOABEEAG_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGBAOABEEAG_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 FDBIMIKEHJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBAOABEEAG_FDBIMIKEHJF_OFFSET))(this);
		}

		::System::Void EIDJCBPCIDF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGBAOABEEAG_EIDJCBPCIDF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AJLNGGEEFKD*>* KDDOOLNAFNH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AJLNGGEEFKD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBAOABEEAG_KDDOOLNAFNH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGBAOABEEAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGBAOABEEAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGBAOABEEAG*))((::PBYTE)hIl2Cpp + MGBAOABEEAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBAOABEEAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBAOABEEAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGBAOABEEAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBAOABEEAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGBAOABEEAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBAOABEEAG*))((::PBYTE)hIl2Cpp + MGBAOABEEAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGBAOABEEAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
