#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGNAMLHFLDB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGNAMLHFLDB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EFFCF20)
#define BGNAMLHFLDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFFD140)
#define BGNAMLHFLDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EFFCB70)
#define BGNAMLHFLDB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFFCB40)
#define BGNAMLHFLDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFFCB30)
#define BGNAMLHFLDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EFFCCA0)
#define BGNAMLHFLDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFFCBD0)
#define BGNAMLHFLDB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EFFCBC0)
#define BGNAMLHFLDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFFCE10)
#define BGNAMLHFLDB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EFFCAF0)
#define BGNAMLHFLDB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EFFCFE0)
#define BGNAMLHFLDB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EFFCFB0)
#define BGNAMLHFLDB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EFFCBB0)
#define BGNAMLHFLDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EFFCB20)
#define BGNAMLHFLDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFFCE40)
#define BGNAMLHFLDB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EFFCEA0)

inline static constexpr unsigned int BGNAMLHFLDB_TypeDefinitionIndex = 32867;

	class BGNAMLHFLDB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BGNAMLHFLDB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BGNAMLHFLDB*>**)UnitySDK::FromName("", "BGNAMLHFLDB")->GetStaticField(0x468A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNAMLHFLDB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGNAMLHFLDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNAMLHFLDB*))((::PBYTE)hIl2Cpp + BGNAMLHFLDB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGNAMLHFLDB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BGNAMLHFLDB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BGNAMLHFLDB*>*(*)())((::PBYTE)hIl2Cpp + BGNAMLHFLDB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNAMLHFLDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGNAMLHFLDB* Clone()
		{
			return ((::BGNAMLHFLDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNAMLHFLDB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNAMLHFLDB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGNAMLHFLDB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGNAMLHFLDB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGNAMLHFLDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGNAMLHFLDB*))((::PBYTE)hIl2Cpp + BGNAMLHFLDB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNAMLHFLDB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNAMLHFLDB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGNAMLHFLDB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNAMLHFLDB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGNAMLHFLDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNAMLHFLDB*))((::PBYTE)hIl2Cpp + BGNAMLHFLDB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGNAMLHFLDB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
