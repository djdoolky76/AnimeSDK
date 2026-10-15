#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFBDGDKFPJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KFBDGDKFPJO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7E8730)
#define KFBDGDKFPJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E8A00)
#define KFBDGDKFPJO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7E8380)
#define KFBDGDKFPJO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7E8350)
#define KFBDGDKFPJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E8340)
#define KFBDGDKFPJO_EGINIIDBAMH_OFFSET UNITYSDK_OFFSET(0x1E7E8400)
#define KFBDGDKFPJO_EOFNEJIAOJI_OFFSET UNITYSDK_OFFSET(0x1E7E83D0)
#define KFBDGDKFPJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7E84F0)
#define KFBDGDKFPJO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7E8410)
#define KFBDGDKFPJO_FCABEJKEOCO_OFFSET UNITYSDK_OFFSET(0x1E7E83F0)
#define KFBDGDKFPJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7E85C0)
#define KFBDGDKFPJO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7E8300)
#define KFBDGDKFPJO_JLOHFHNNCBJ_OFFSET UNITYSDK_OFFSET(0x1E7E83E0)
#define KFBDGDKFPJO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7E8880)
#define KFBDGDKFPJO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7E8840)
#define KFBDGDKFPJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7E8330)
#define KFBDGDKFPJO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7E85F0)
#define KFBDGDKFPJO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7E8650)

inline static constexpr unsigned int KFBDGDKFPJO_TypeDefinitionIndex = 32221;

	class KFBDGDKFPJO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JPBNOBHKPJC; // 0x18
		::System::UInt32 IFJEPCLOOED; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KFBDGDKFPJO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KFBDGDKFPJO*>**)UnitySDK::FromName("", "KFBDGDKFPJO")->GetStaticField(0x122D0);
		}

		// static const ::System::Object BGLLEEOCPHM; // 0x0
		// static const ::System::Object BDGFLAMBPOC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBDGDKFPJO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KFBDGDKFPJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFBDGDKFPJO*))((::PBYTE)hIl2Cpp + KFBDGDKFPJO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFBDGDKFPJO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KFBDGDKFPJO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KFBDGDKFPJO*>*(*)())((::PBYTE)hIl2Cpp + KFBDGDKFPJO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBDGDKFPJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KFBDGDKFPJO* Clone()
		{
			return ((::KFBDGDKFPJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBDGDKFPJO_CLONE_OFFSET))(this);
		}

		::System::UInt32 EOFNEJIAOJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBDGDKFPJO_EOFNEJIAOJI_OFFSET))(this);
		}

		::System::Void JLOHFHNNCBJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBDGDKFPJO_JLOHFHNNCBJ_OFFSET))(this, a1);
		}

		::System::UInt32 FCABEJKEOCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBDGDKFPJO_FCABEJKEOCO_OFFSET))(this);
		}

		::System::Void EGINIIDBAMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBDGDKFPJO_EGINIIDBAMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFBDGDKFPJO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KFBDGDKFPJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFBDGDKFPJO*))((::PBYTE)hIl2Cpp + KFBDGDKFPJO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBDGDKFPJO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBDGDKFPJO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KFBDGDKFPJO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBDGDKFPJO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KFBDGDKFPJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFBDGDKFPJO*))((::PBYTE)hIl2Cpp + KFBDGDKFPJO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KFBDGDKFPJO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
