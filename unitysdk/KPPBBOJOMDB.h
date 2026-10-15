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

#define KPPBBOJOMDB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E895C20)
#define KPPBBOJOMDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E895F20)
#define KPPBBOJOMDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E895790)
#define KPPBBOJOMDB_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E895800)
#define KPPBBOJOMDB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E895760)
#define KPPBBOJOMDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E895750)
#define KPPBBOJOMDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E895910)
#define KPPBBOJOMDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E895880)
#define KPPBBOJOMDB_FHMHPEINKIJ_OFFSET UNITYSDK_OFFSET(0x1E895830)
#define KPPBBOJOMDB_FKECDKMMNCD_OFFSET UNITYSDK_OFFSET(0x1E895870)
#define KPPBBOJOMDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8959F0)
#define KPPBBOJOMDB_HKLHGBLHAHH_OFFSET UNITYSDK_OFFSET(0x1E895840)
#define KPPBBOJOMDB_JBEDMBMCBME_OFFSET UNITYSDK_OFFSET(0x1E895850)
#define KPPBBOJOMDB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8956E0)
#define KPPBBOJOMDB_KHIJIGMGGOP_OFFSET UNITYSDK_OFFSET(0x1E895860)
#define KPPBBOJOMDB_LNKEJLOAGMB_OFFSET UNITYSDK_OFFSET(0x1E895820)
#define KPPBBOJOMDB_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E895810)
#define KPPBBOJOMDB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E895E80)
#define KPPBBOJOMDB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E895E30)
#define KPPBBOJOMDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E895740)
#define KPPBBOJOMDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E895A30)
#define KPPBBOJOMDB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E895A90)

inline static constexpr unsigned int KPPBBOJOMDB_TypeDefinitionIndex = 33812;

	class KPPBBOJOMDB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GCBIJCLNGIA; // 0x18
		::System::UInt32 COPFOCPLMCJ; // 0x1C
		::System::UInt32 LCNCDNFDOKM; // 0x20
		::System::UInt32 DNKADAFBILN; // 0x24
		static ::Google::Protobuf::MessageParser_1<::KPPBBOJOMDB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KPPBBOJOMDB*>**)UnitySDK::FromName("", "KPPBBOJOMDB")->GetStaticField(0x23290);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object JLCJFLBCBEK; // 0x0
		// static const ::System::Object HCDFHDMONPM; // 0x0
		// static const ::System::Object GMEFCILAFFB; // 0x0
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

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 LNKEJLOAGMB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_LNKEJLOAGMB_OFFSET))(this);
		}

		::System::Void FHMHPEINKIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_FHMHPEINKIJ_OFFSET))(this, a1);
		}

		::System::UInt32 HKLHGBLHAHH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_HKLHGBLHAHH_OFFSET))(this);
		}

		::System::Void JBEDMBMCBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_JBEDMBMCBME_OFFSET))(this, a1);
		}

		::System::UInt32 KHIJIGMGGOP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_KHIJIGMGGOP_OFFSET))(this);
		}

		::System::Void FKECDKMMNCD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPPBBOJOMDB_FKECDKMMNCD_OFFSET))(this, a1);
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
