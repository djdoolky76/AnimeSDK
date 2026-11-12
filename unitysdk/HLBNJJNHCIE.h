#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLBNJJNHCIE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLBNJJNHCIE_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1F8B5BE0)
#define HLBNJJNHCIE_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1F8B5BC0)
#define HLBNJJNHCIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F8B5F40)
#define HLBNJJNHCIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8B6210)
#define HLBNJJNHCIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8B5B40)
#define HLBNJJNHCIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8B5B10)
#define HLBNJJNHCIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B5B00)
#define HLBNJJNHCIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F8B5D00)
#define HLBNJJNHCIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F8B5BF0)
#define HLBNJJNHCIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8B5DD0)
#define HLBNJJNHCIE_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1F8B5BD0)
#define HLBNJJNHCIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F8B5A90)
#define HLBNJJNHCIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8B6090)
#define HLBNJJNHCIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F8B6050)
#define HLBNJJNHCIE_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1F8B5BB0)
#define HLBNJJNHCIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F8B5AF0)
#define HLBNJJNHCIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8B5E00)
#define HLBNJJNHCIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F8B5E60)

inline static constexpr unsigned int HLBNJJNHCIE_TypeDefinitionIndex = 30017;

	class HLBNJJNHCIE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KLINKNMHOCI; // 0x18
		::System::UInt32 PPNELLDGNPC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HLBNJJNHCIE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HLBNJJNHCIE*>**)UnitySDK::FromName("", "HLBNJJNHCIE")->GetStaticField(0x378C0);
		}

		// static const ::System::Object GKKKEHJAKII; // 0x0
		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBNJJNHCIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLBNJJNHCIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLBNJJNHCIE*))((::PBYTE)hIl2Cpp + HLBNJJNHCIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLBNJJNHCIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HLBNJJNHCIE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HLBNJJNHCIE*>*(*)())((::PBYTE)hIl2Cpp + HLBNJJNHCIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBNJJNHCIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLBNJJNHCIE* Clone()
		{
			return ((::HLBNJJNHCIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBNJJNHCIE_CLONE_OFFSET))(this);
		}

		::System::UInt32 MHHDBKELGIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBNJJNHCIE_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLBNJJNHCIE_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBNJJNHCIE_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLBNJJNHCIE_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLBNJJNHCIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLBNJJNHCIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLBNJJNHCIE*))((::PBYTE)hIl2Cpp + HLBNJJNHCIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBNJJNHCIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBNJJNHCIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLBNJJNHCIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBNJJNHCIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLBNJJNHCIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLBNJJNHCIE*))((::PBYTE)hIl2Cpp + HLBNJJNHCIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLBNJJNHCIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
