#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICDBHMEPNDB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ICDBHMEPNDB_AGFLGDOCMCB_OFFSET UNITYSDK_OFFSET(0x1E61FE90)
#define ICDBHMEPNDB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E620220)
#define ICDBHMEPNDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6204F0)
#define ICDBHMEPNDB_CKBDGCNDCJJ_OFFSET UNITYSDK_OFFSET(0x1E61FEA0)
#define ICDBHMEPNDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E61FE20)
#define ICDBHMEPNDB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E61FDF0)
#define ICDBHMEPNDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61FDE0)
#define ICDBHMEPNDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E61FFE0)
#define ICDBHMEPNDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E61FED0)
#define ICDBHMEPNDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6200B0)
#define ICDBHMEPNDB_INPAIIBHHAF_OFFSET UNITYSDK_OFFSET(0x1E61FEC0)
#define ICDBHMEPNDB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E61FD70)
#define ICDBHMEPNDB_JMCIHLIBMEI_OFFSET UNITYSDK_OFFSET(0x1E61FEB0)
#define ICDBHMEPNDB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E620370)
#define ICDBHMEPNDB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E620330)
#define ICDBHMEPNDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E61FDD0)
#define ICDBHMEPNDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6200E0)
#define ICDBHMEPNDB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E620140)

inline static constexpr unsigned int ICDBHMEPNDB_TypeDefinitionIndex = 26740;

	class ICDBHMEPNDB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DIGNEKHKOCK; // 0x18
		::System::UInt32 DIODHMIDKPL; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ICDBHMEPNDB")->GetStaticField(0x42A30);
		}

		// static const ::System::Object BHBEDNPIMEN; // 0x0
		// static const ::System::Object IOOHJPAHKFN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBHMEPNDB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICDBHMEPNDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICDBHMEPNDB*))((::PBYTE)hIl2Cpp + ICDBHMEPNDB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICDBHMEPNDB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ICDBHMEPNDB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBHMEPNDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ICDBHMEPNDB* Clone()
		{
			return ((::ICDBHMEPNDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBHMEPNDB_CLONE_OFFSET))(this);
		}

		::System::UInt32 AGFLGDOCMCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBHMEPNDB_AGFLGDOCMCB_OFFSET))(this);
		}

		::System::Void CKBDGCNDCJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICDBHMEPNDB_CKBDGCNDCJJ_OFFSET))(this, a1);
		}

		::System::UInt32 JMCIHLIBMEI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBHMEPNDB_JMCIHLIBMEI_OFFSET))(this);
		}

		::System::Void INPAIIBHHAF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICDBHMEPNDB_INPAIIBHHAF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICDBHMEPNDB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ICDBHMEPNDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICDBHMEPNDB*))((::PBYTE)hIl2Cpp + ICDBHMEPNDB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBHMEPNDB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBHMEPNDB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ICDBHMEPNDB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBHMEPNDB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ICDBHMEPNDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICDBHMEPNDB*))((::PBYTE)hIl2Cpp + ICDBHMEPNDB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ICDBHMEPNDB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
