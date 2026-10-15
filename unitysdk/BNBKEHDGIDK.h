#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNBKEHDGIDK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BNBKEHDGIDK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E030FF0)
#define BNBKEHDGIDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E031210)
#define BNBKEHDGIDK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E030C40)
#define BNBKEHDGIDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E030C10)
#define BNBKEHDGIDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E030C00)
#define BNBKEHDGIDK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E030D70)
#define BNBKEHDGIDK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E030CA0)
#define BNBKEHDGIDK_GEBGKGENFFK_OFFSET UNITYSDK_OFFSET(0x1E030C90)
#define BNBKEHDGIDK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E030EE0)
#define BNBKEHDGIDK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E030BC0)
#define BNBKEHDGIDK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0310B0)
#define BNBKEHDGIDK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E031080)
#define BNBKEHDGIDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E030BF0)
#define BNBKEHDGIDK_PPLGOFNBHJA_OFFSET UNITYSDK_OFFSET(0x1E030C80)
#define BNBKEHDGIDK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E030F10)
#define BNBKEHDGIDK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E030F70)

inline static constexpr unsigned int BNBKEHDGIDK_TypeDefinitionIndex = 26119;

	class BNBKEHDGIDK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KLGIOJGIEMP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BNBKEHDGIDK")->GetStaticField(0x52040);
		}

		// static const ::System::Object DDPJJHAGHOF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNBKEHDGIDK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BNBKEHDGIDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBKEHDGIDK*))((::PBYTE)hIl2Cpp + BNBKEHDGIDK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNBKEHDGIDK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BNBKEHDGIDK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNBKEHDGIDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BNBKEHDGIDK* Clone()
		{
			return ((::BNBKEHDGIDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNBKEHDGIDK_CLONE_OFFSET))(this);
		}

		::System::UInt32 PPLGOFNBHJA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNBKEHDGIDK_PPLGOFNBHJA_OFFSET))(this);
		}

		::System::Void GEBGKGENFFK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNBKEHDGIDK_GEBGKGENFFK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNBKEHDGIDK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BNBKEHDGIDK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BNBKEHDGIDK*))((::PBYTE)hIl2Cpp + BNBKEHDGIDK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNBKEHDGIDK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNBKEHDGIDK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BNBKEHDGIDK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNBKEHDGIDK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BNBKEHDGIDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBKEHDGIDK*))((::PBYTE)hIl2Cpp + BNBKEHDGIDK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BNBKEHDGIDK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
