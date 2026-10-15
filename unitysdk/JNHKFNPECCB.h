#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKEBEAKOHJJ;
class JNHKFNPECCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JNHKFNPECCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E76A280)
#define JNHKFNPECCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E76A510)
#define JNHKFNPECCB_CLEFHLPEMKJ_OFFSET UNITYSDK_OFFSET(0x1E769CF0)
#define JNHKFNPECCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E769C40)
#define JNHKFNPECCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E769BB0)
#define JNHKFNPECCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E769BA0)
#define JNHKFNPECCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E769E70)
#define JNHKFNPECCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E769D00)
#define JNHKFNPECCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E76A140)
#define JNHKFNPECCB_JDKPFHDHBBH_OFFSET UNITYSDK_OFFSET(0x1E769CE0)
#define JNHKFNPECCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E769B60)
#define JNHKFNPECCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E76A370)
#define JNHKFNPECCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E76A2E0)
#define JNHKFNPECCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E769B90)
#define JNHKFNPECCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E76A190)
#define JNHKFNPECCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E76A1F0)

inline static constexpr unsigned int JNHKFNPECCB_TypeDefinitionIndex = 30636;

	class JNHKFNPECCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JKEBEAKOHJJ* CODPEOICCHG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JNHKFNPECCB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JNHKFNPECCB*>**)UnitySDK::FromName("", "JNHKFNPECCB")->GetStaticField(0x68270);
		}

		// static const ::System::Object GLDEHFLBLMG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHKFNPECCB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JNHKFNPECCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNHKFNPECCB*))((::PBYTE)hIl2Cpp + JNHKFNPECCB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNHKFNPECCB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JNHKFNPECCB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JNHKFNPECCB*>*(*)())((::PBYTE)hIl2Cpp + JNHKFNPECCB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHKFNPECCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JNHKFNPECCB* Clone()
		{
			return ((::JNHKFNPECCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHKFNPECCB_CLONE_OFFSET))(this);
		}

		::JKEBEAKOHJJ* JDKPFHDHBBH()
		{
			return ((::JKEBEAKOHJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHKFNPECCB_JDKPFHDHBBH_OFFSET))(this);
		}

		::System::Void CLEFHLPEMKJ(::JKEBEAKOHJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKEBEAKOHJJ*))((::PBYTE)hIl2Cpp + JNHKFNPECCB_CLEFHLPEMKJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JNHKFNPECCB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JNHKFNPECCB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JNHKFNPECCB*))((::PBYTE)hIl2Cpp + JNHKFNPECCB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHKFNPECCB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHKFNPECCB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JNHKFNPECCB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHKFNPECCB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JNHKFNPECCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNHKFNPECCB*))((::PBYTE)hIl2Cpp + JNHKFNPECCB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JNHKFNPECCB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
