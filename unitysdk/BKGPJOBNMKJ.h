#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKGPJOBNMKJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BKGPJOBNMKJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF2A170)
#define BKGPJOBNMKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2A560)
#define BKGPJOBNMKJ_CLDEFLODPJB_OFFSET UNITYSDK_OFFSET(0x1DF29D90)
#define BKGPJOBNMKJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF29D20)
#define BKGPJOBNMKJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF29CE0)
#define BKGPJOBNMKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF29CD0)
#define BKGPJOBNMKJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF29EB0)
#define BKGPJOBNMKJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF29DD0)
#define BKGPJOBNMKJ_GEIDADIACKB_OFFSET UNITYSDK_OFFSET(0x1DF29D70)
#define BKGPJOBNMKJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF29F90)
#define BKGPJOBNMKJ_IPFBNDCHFEF_OFFSET UNITYSDK_OFFSET(0x1DF29DC0)
#define BKGPJOBNMKJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF29C90)
#define BKGPJOBNMKJ_KFJNDBECJDM_OFFSET UNITYSDK_OFFSET(0x1DF29DA0)
#define BKGPJOBNMKJ_LDBCEEPAELL_OFFSET UNITYSDK_OFFSET(0x1DF29DB0)
#define BKGPJOBNMKJ_MDBKBBMLMNI_OFFSET UNITYSDK_OFFSET(0x1DF29D80)
#define BKGPJOBNMKJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF2A3A0)
#define BKGPJOBNMKJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF2A350)
#define BKGPJOBNMKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF29CC0)
#define BKGPJOBNMKJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF29FD0)
#define BKGPJOBNMKJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF2A030)

inline static constexpr unsigned int BKGPJOBNMKJ_TypeDefinitionIndex = 30100;

	class BKGPJOBNMKJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BOHLIADLMJN; // 0x18
		::System::UInt32 NAJINDCEHMM; // 0x1C
		::System::UInt64 IBBEMJHHPNG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BKGPJOBNMKJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BKGPJOBNMKJ*>**)UnitySDK::FromName("", "BKGPJOBNMKJ")->GetStaticField(0x1A5C0);
		}

		// static const ::System::Object EAEDBOGGHCC; // 0x0
		// static const ::System::Object GGJJMGAJHPH; // 0x0
		// static const ::System::Object JOBMICAKNHM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BKGPJOBNMKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKGPJOBNMKJ*))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BKGPJOBNMKJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BKGPJOBNMKJ*>*(*)())((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BKGPJOBNMKJ* Clone()
		{
			return ((::BKGPJOBNMKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 GEIDADIACKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_GEIDADIACKB_OFFSET))(this);
		}

		::System::Void MDBKBBMLMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_MDBKBBMLMNI_OFFSET))(this, a1);
		}

		::System::UInt64 CLDEFLODPJB()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_CLDEFLODPJB_OFFSET))(this);
		}

		::System::Void KFJNDBECJDM(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_KFJNDBECJDM_OFFSET))(this, a1);
		}

		::System::UInt32 LDBCEEPAELL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_LDBCEEPAELL_OFFSET))(this);
		}

		::System::Void IPFBNDCHFEF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_IPFBNDCHFEF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BKGPJOBNMKJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKGPJOBNMKJ*))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BKGPJOBNMKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKGPJOBNMKJ*))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BKGPJOBNMKJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
