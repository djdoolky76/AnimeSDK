#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALLNMAAOELO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALLNMAAOELO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5122D0)
#define ALLNMAAOELO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5124F0)
#define ALLNMAAOELO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E511F20)
#define ALLNMAAOELO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E511EF0)
#define ALLNMAAOELO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E511EE0)
#define ALLNMAAOELO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E512050)
#define ALLNMAAOELO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E511F80)
#define ALLNMAAOELO_FCAIJANDDDP_OFFSET UNITYSDK_OFFSET(0x1E511F70)
#define ALLNMAAOELO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5121C0)
#define ALLNMAAOELO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E511EA0)
#define ALLNMAAOELO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E512390)
#define ALLNMAAOELO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E512360)
#define ALLNMAAOELO_OCACDPCLIBF_OFFSET UNITYSDK_OFFSET(0x1E511F60)
#define ALLNMAAOELO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E511ED0)
#define ALLNMAAOELO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5121F0)
#define ALLNMAAOELO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E512250)

inline static constexpr unsigned int ALLNMAAOELO_TypeDefinitionIndex = 28225;

	class ALLNMAAOELO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AFFBGDFNCBG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ALLNMAAOELO")->GetStaticField(0x39BC0);
		}

		// static const ::System::Object OICKCNEBADE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLNMAAOELO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALLNMAAOELO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALLNMAAOELO*))((::PBYTE)hIl2Cpp + ALLNMAAOELO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALLNMAAOELO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ALLNMAAOELO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLNMAAOELO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALLNMAAOELO* Clone()
		{
			return ((::ALLNMAAOELO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLNMAAOELO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OCACDPCLIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLNMAAOELO_OCACDPCLIBF_OFFSET))(this);
		}

		::System::Void FCAIJANDDDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALLNMAAOELO_FCAIJANDDDP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALLNMAAOELO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALLNMAAOELO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALLNMAAOELO*))((::PBYTE)hIl2Cpp + ALLNMAAOELO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLNMAAOELO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLNMAAOELO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALLNMAAOELO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLNMAAOELO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALLNMAAOELO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALLNMAAOELO*))((::PBYTE)hIl2Cpp + ALLNMAAOELO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALLNMAAOELO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
