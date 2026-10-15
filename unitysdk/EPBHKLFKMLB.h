#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPBHKLFKMLB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPBHKLFKMLB_AKHEMBOCAGG_OFFSET UNITYSDK_OFFSET(0x1E2D6B90)
#define EPBHKLFKMLB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2D6EF0)
#define EPBHKLFKMLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D7110)
#define EPBHKLFKMLB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2D6B40)
#define EPBHKLFKMLB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2D6B10)
#define EPBHKLFKMLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D6B00)
#define EPBHKLFKMLB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2D6C70)
#define EPBHKLFKMLB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2D6BA0)
#define EPBHKLFKMLB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2D6DE0)
#define EPBHKLFKMLB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2D6AC0)
#define EPBHKLFKMLB_LAEGEPLDILM_OFFSET UNITYSDK_OFFSET(0x1E2D6B80)
#define EPBHKLFKMLB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2D6FB0)
#define EPBHKLFKMLB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2D6F80)
#define EPBHKLFKMLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2D6AF0)
#define EPBHKLFKMLB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2D6E10)
#define EPBHKLFKMLB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2D6E70)

inline static constexpr unsigned int EPBHKLFKMLB_TypeDefinitionIndex = 29883;

	class EPBHKLFKMLB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JKKIIFEGCBD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EPBHKLFKMLB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPBHKLFKMLB*>**)UnitySDK::FromName("", "EPBHKLFKMLB")->GetStaticField(0x47CB0);
		}

		// static const ::System::Object DEKMCNNKEME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBHKLFKMLB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPBHKLFKMLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPBHKLFKMLB*))((::PBYTE)hIl2Cpp + EPBHKLFKMLB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPBHKLFKMLB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EPBHKLFKMLB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EPBHKLFKMLB*>*(*)())((::PBYTE)hIl2Cpp + EPBHKLFKMLB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBHKLFKMLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPBHKLFKMLB* Clone()
		{
			return ((::EPBHKLFKMLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBHKLFKMLB_CLONE_OFFSET))(this);
		}

		::System::UInt32 LAEGEPLDILM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBHKLFKMLB_LAEGEPLDILM_OFFSET))(this);
		}

		::System::Void AKHEMBOCAGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPBHKLFKMLB_AKHEMBOCAGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPBHKLFKMLB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPBHKLFKMLB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPBHKLFKMLB*))((::PBYTE)hIl2Cpp + EPBHKLFKMLB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBHKLFKMLB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBHKLFKMLB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPBHKLFKMLB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBHKLFKMLB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPBHKLFKMLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPBHKLFKMLB*))((::PBYTE)hIl2Cpp + EPBHKLFKMLB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPBHKLFKMLB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
