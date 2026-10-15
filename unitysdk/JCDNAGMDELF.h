#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCDNAGMDELF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JCDNAGMDELF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6D19F0)
#define JCDNAGMDELF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D1D90)
#define JCDNAGMDELF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6D1460)
#define JCDNAGMDELF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6D1410)
#define JCDNAGMDELF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D1400)
#define JCDNAGMDELF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6D1670)
#define JCDNAGMDELF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6D1560)
#define JCDNAGMDELF_FDBFKPPMEHB_OFFSET UNITYSDK_OFFSET(0x1E6D1540)
#define JCDNAGMDELF_FLJDNJLEAMD_OFFSET UNITYSDK_OFFSET(0x1E6D14D0)
#define JCDNAGMDELF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6D1780)
#define JCDNAGMDELF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6D13C0)
#define JCDNAGMDELF_JPNPOCAOBDF_OFFSET UNITYSDK_OFFSET(0x1E6D1520)
#define JCDNAGMDELF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6D1BC0)
#define JCDNAGMDELF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6D1B60)
#define JCDNAGMDELF_MOJNKMALDDM_OFFSET UNITYSDK_OFFSET(0x1E6D1530)
#define JCDNAGMDELF_ODMCIHMAANM_OFFSET UNITYSDK_OFFSET(0x1E6D1550)
#define JCDNAGMDELF_OJLNDIGKCGA_OFFSET UNITYSDK_OFFSET(0x1E6D14C0)
#define JCDNAGMDELF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6D13F0)
#define JCDNAGMDELF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6D1840)
#define JCDNAGMDELF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6D18A0)

inline static constexpr unsigned int JCDNAGMDELF_TypeDefinitionIndex = 34620;

	class JCDNAGMDELF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* BALCBBEBHNB; // 0x18
		::System::UInt32 HKBMDGDNEJO; // 0x20
		::System::UInt32 NBKPPPJAOCE; // 0x24
		static ::Google::Protobuf::MessageParser_1<::JCDNAGMDELF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JCDNAGMDELF*>**)UnitySDK::FromName("", "JCDNAGMDELF")->GetStaticField(0x4AE10);
		}

		// static const ::System::Object PNIBPALNKDE; // 0x0
		// static const ::System::Object CHNADEIFEFH; // 0x0
		// static const ::System::Object ENJCKECFIFC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNAGMDELF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JCDNAGMDELF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDNAGMDELF*))((::PBYTE)hIl2Cpp + JCDNAGMDELF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCDNAGMDELF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JCDNAGMDELF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JCDNAGMDELF*>*(*)())((::PBYTE)hIl2Cpp + JCDNAGMDELF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNAGMDELF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JCDNAGMDELF* Clone()
		{
			return ((::JCDNAGMDELF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNAGMDELF_CLONE_OFFSET))(this);
		}

		::System::String* OJLNDIGKCGA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNAGMDELF_OJLNDIGKCGA_OFFSET))(this);
		}

		::System::Void FLJDNJLEAMD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JCDNAGMDELF_FLJDNJLEAMD_OFFSET))(this, a1);
		}

		::System::UInt32 JPNPOCAOBDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNAGMDELF_JPNPOCAOBDF_OFFSET))(this);
		}

		::System::Void MOJNKMALDDM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JCDNAGMDELF_MOJNKMALDDM_OFFSET))(this, a1);
		}

		::System::UInt32 FDBFKPPMEHB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNAGMDELF_FDBFKPPMEHB_OFFSET))(this);
		}

		::System::Void ODMCIHMAANM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JCDNAGMDELF_ODMCIHMAANM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCDNAGMDELF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JCDNAGMDELF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JCDNAGMDELF*))((::PBYTE)hIl2Cpp + JCDNAGMDELF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNAGMDELF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNAGMDELF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JCDNAGMDELF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNAGMDELF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JCDNAGMDELF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDNAGMDELF*))((::PBYTE)hIl2Cpp + JCDNAGMDELF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JCDNAGMDELF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
