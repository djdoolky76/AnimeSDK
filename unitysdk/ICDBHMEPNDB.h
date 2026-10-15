#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICDBHMEPNDB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ICDBHMEPNDB_AGFLGDOCMCB_OFFSET UNITYSDK_OFFSET(0x1E5F2840)
#define ICDBHMEPNDB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5F2BD0)
#define ICDBHMEPNDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F2EA0)
#define ICDBHMEPNDB_CKBDGCNDCJJ_OFFSET UNITYSDK_OFFSET(0x1E5F2850)
#define ICDBHMEPNDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5F27D0)
#define ICDBHMEPNDB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5F27A0)
#define ICDBHMEPNDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F2790)
#define ICDBHMEPNDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5F2990)
#define ICDBHMEPNDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5F2880)
#define ICDBHMEPNDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5F2A60)
#define ICDBHMEPNDB_INPAIIBHHAF_OFFSET UNITYSDK_OFFSET(0x1E5F2870)
#define ICDBHMEPNDB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5F2720)
#define ICDBHMEPNDB_JMCIHLIBMEI_OFFSET UNITYSDK_OFFSET(0x1E5F2860)
#define ICDBHMEPNDB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5F2D20)
#define ICDBHMEPNDB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5F2CE0)
#define ICDBHMEPNDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5F2780)
#define ICDBHMEPNDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5F2A90)
#define ICDBHMEPNDB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5F2AF0)

inline static constexpr unsigned int ICDBHMEPNDB_TypeDefinitionIndex = 26740;

	class ICDBHMEPNDB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DIGNEKHKOCK; // 0x18
		::System::UInt32 DIODHMIDKPL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::ICDBHMEPNDB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ICDBHMEPNDB*>**)UnitySDK::FromName("", "ICDBHMEPNDB")->GetStaticField(0x44800);
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

		static ::Google::Protobuf::MessageParser_1<::ICDBHMEPNDB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ICDBHMEPNDB*>*(*)())((::PBYTE)hIl2Cpp + ICDBHMEPNDB_JJGHOBBFNJD_OFFSET))();
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
