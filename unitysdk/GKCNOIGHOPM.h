#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKCNOIGHOPM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKCNOIGHOPM_BMHDKNGNLCE_OFFSET UNITYSDK_OFFSET(0x1E4AFEF0)
#define GKCNOIGHOPM_BOBAAPBKOBD_OFFSET UNITYSDK_OFFSET(0x1E4AFED0)
#define GKCNOIGHOPM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4B0230)
#define GKCNOIGHOPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B05B0)
#define GKCNOIGHOPM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4AFE40)
#define GKCNOIGHOPM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4AFE00)
#define GKCNOIGHOPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4AFDF0)
#define GKCNOIGHOPM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4AFFA0)
#define GKCNOIGHOPM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4AFF20)
#define GKCNOIGHOPM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4B0070)
#define GKCNOIGHOPM_GNAJJKNCEED_OFFSET UNITYSDK_OFFSET(0x1E4AFEC0)
#define GKCNOIGHOPM_IBEJBCFKBEP_OFFSET UNITYSDK_OFFSET(0x1E4AFEE0)
#define GKCNOIGHOPM_INPAIIBHHAF_OFFSET UNITYSDK_OFFSET(0x1E4AFF10)
#define GKCNOIGHOPM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4AFD80)
#define GKCNOIGHOPM_JMCIHLIBMEI_OFFSET UNITYSDK_OFFSET(0x1E4AFF00)
#define GKCNOIGHOPM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4B0410)
#define GKCNOIGHOPM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4B03C0)
#define GKCNOIGHOPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4AFDE0)
#define GKCNOIGHOPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4B00A0)
#define GKCNOIGHOPM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4B0100)

inline static constexpr unsigned int GKCNOIGHOPM_TypeDefinitionIndex = 26759;

	class GKCNOIGHOPM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JNCCHJKOKLA; // 0x18
		::System::UInt32 CHCDLLGLAHP; // 0x1C
		::System::UInt32 DIGNEKHKOCK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GKCNOIGHOPM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GKCNOIGHOPM*>**)UnitySDK::FromName("", "GKCNOIGHOPM")->GetStaticField(0x1CE30);
		}

		// static const ::System::Object JJLIFLCOGBL; // 0x0
		// static const ::System::Object MOLMLENKBIH; // 0x0
		// static const ::System::Object IOOHJPAHKFN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKCNOIGHOPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKCNOIGHOPM*))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKCNOIGHOPM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GKCNOIGHOPM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GKCNOIGHOPM*>*(*)())((::PBYTE)hIl2Cpp + GKCNOIGHOPM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKCNOIGHOPM* Clone()
		{
			return ((::GKCNOIGHOPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_CLONE_OFFSET))(this);
		}

		::System::UInt32 GNAJJKNCEED()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_GNAJJKNCEED_OFFSET))(this);
		}

		::System::Void BOBAAPBKOBD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_BOBAAPBKOBD_OFFSET))(this, a1);
		}

		::System::UInt32 IBEJBCFKBEP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_IBEJBCFKBEP_OFFSET))(this);
		}

		::System::Void BMHDKNGNLCE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_BMHDKNGNLCE_OFFSET))(this, a1);
		}

		::System::UInt32 JMCIHLIBMEI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_JMCIHLIBMEI_OFFSET))(this);
		}

		::System::Void INPAIIBHHAF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_INPAIIBHHAF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKCNOIGHOPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKCNOIGHOPM*))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKCNOIGHOPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKCNOIGHOPM*))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKCNOIGHOPM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
