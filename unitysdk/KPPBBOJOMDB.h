#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPPBBOJOMDB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPPBBOJOMDB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2037DFE0)
#define KPPBBOJOMDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x2037E2E0)
#define KPPBBOJOMDB_CLONE_OFFSET UNITYSDK_OFFSET(0x2037DB50)
#define KPPBBOJOMDB_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x2037DBE0)
#define KPPBBOJOMDB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2037DB20)
#define KPPBBOJOMDB_CTOR_OFFSET UNITYSDK_OFFSET(0x2037DB10)
#define KPPBBOJOMDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2037DCD0)
#define KPPBBOJOMDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x2037DC40)
#define KPPBBOJOMDB_FHMHPEINKIJ_OFFSET UNITYSDK_OFFSET(0x2037DC30)
#define KPPBBOJOMDB_FKECDKMMNCD_OFFSET UNITYSDK_OFFSET(0x2037DBD0)
#define KPPBBOJOMDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2037DDB0)
#define KPPBBOJOMDB_HKLHGBLHAHH_OFFSET UNITYSDK_OFFSET(0x2037DC00)
#define KPPBBOJOMDB_JBEDMBMCBME_OFFSET UNITYSDK_OFFSET(0x2037DC10)
#define KPPBBOJOMDB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2037DAA0)
#define KPPBBOJOMDB_KHIJIGMGGOP_OFFSET UNITYSDK_OFFSET(0x2037DBC0)
#define KPPBBOJOMDB_LNKEJLOAGMB_OFFSET UNITYSDK_OFFSET(0x2037DC20)
#define KPPBBOJOMDB_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x2037DBF0)
#define KPPBBOJOMDB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2037E240)
#define KPPBBOJOMDB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2037E1F0)
#define KPPBBOJOMDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2037DB00)
#define KPPBBOJOMDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2037DDF0)
#define KPPBBOJOMDB_WRITETO_OFFSET UNITYSDK_OFFSET(0x2037DE50)

inline static constexpr unsigned int KPPBBOJOMDB_TypeDefinitionIndex = 34727;

	class KPPBBOJOMDB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LCNCDNFDOKM; // 0x18
		::System::UInt32 GCBIJCLNGIA; // 0x1C
		::System::UInt32 COPFOCPLMCJ; // 0x20
		::System::UInt32 DNKADAFBILN; // 0x24
		static ::Google::Protobuf::MessageParser_1<::KPPBBOJOMDB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KPPBBOJOMDB*>**)UnitySDK::FromName("", "KPPBBOJOMDB")->GetStaticField(0x22F80);
		}

		// static const ::System::Object GMEFCILAFFB; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object HCDFHDMONPM; // 0x0
		// static const ::System::Object JLCJFLBCBEK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPPBBOJOMDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPPBBOJOMDB*))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPPBBOJOMDB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KPPBBOJOMDB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KPPBBOJOMDB*>*(*)())((::PBYTE)hIl2Cpp + KPPBBOJOMDB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPPBBOJOMDB* Clone()
		{
			return ((::KPPBBOJOMDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_CLONE_OFFSET))(this);
		}

		::System::UInt32 KHIJIGMGGOP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_KHIJIGMGGOP_OFFSET))(this);
		}

		::System::Void FKECDKMMNCD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_FKECDKMMNCD_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 HKLHGBLHAHH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_HKLHGBLHAHH_OFFSET))(this);
		}

		::System::Void JBEDMBMCBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_JBEDMBMCBME_OFFSET))(this, a1);
		}

		::System::UInt32 LNKEJLOAGMB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_LNKEJLOAGMB_OFFSET))(this);
		}

		::System::Void FHMHPEINKIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_FHMHPEINKIJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPPBBOJOMDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPPBBOJOMDB*))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPPBBOJOMDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPPBBOJOMDB*))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
