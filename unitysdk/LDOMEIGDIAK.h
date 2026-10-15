#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDOMEIGDIAK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDOMEIGDIAK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8D3C10)
#define LDOMEIGDIAK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D3E30)
#define LDOMEIGDIAK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8D3800)
#define LDOMEIGDIAK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8D37D0)
#define LDOMEIGDIAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D37C0)
#define LDOMEIGDIAK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8D3990)
#define LDOMEIGDIAK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8D3890)
#define LDOMEIGDIAK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8D3B00)
#define LDOMEIGDIAK_GILKFKJECPD_OFFSET UNITYSDK_OFFSET(0x1E8D3880)
#define LDOMEIGDIAK_JFAFPMBFBJB_OFFSET UNITYSDK_OFFSET(0x1E8D3870)
#define LDOMEIGDIAK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8D3750)
#define LDOMEIGDIAK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8D3CD0)
#define LDOMEIGDIAK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8D3CA0)
#define LDOMEIGDIAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8D37B0)
#define LDOMEIGDIAK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8D3B30)
#define LDOMEIGDIAK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8D3B90)

inline static constexpr unsigned int LDOMEIGDIAK_TypeDefinitionIndex = 31873;

	class LDOMEIGDIAK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HACAKIDANLE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LDOMEIGDIAK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LDOMEIGDIAK*>**)UnitySDK::FromName("", "LDOMEIGDIAK")->GetStaticField(0x2F2F0);
		}

		// static const ::System::Object MMMLJEPBDMF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOMEIGDIAK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDOMEIGDIAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDOMEIGDIAK*))((::PBYTE)hIl2Cpp + LDOMEIGDIAK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDOMEIGDIAK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LDOMEIGDIAK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LDOMEIGDIAK*>*(*)())((::PBYTE)hIl2Cpp + LDOMEIGDIAK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOMEIGDIAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDOMEIGDIAK* Clone()
		{
			return ((::LDOMEIGDIAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOMEIGDIAK_CLONE_OFFSET))(this);
		}

		::System::UInt32 JFAFPMBFBJB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOMEIGDIAK_JFAFPMBFBJB_OFFSET))(this);
		}

		::System::Void GILKFKJECPD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDOMEIGDIAK_GILKFKJECPD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDOMEIGDIAK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDOMEIGDIAK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDOMEIGDIAK*))((::PBYTE)hIl2Cpp + LDOMEIGDIAK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOMEIGDIAK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOMEIGDIAK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDOMEIGDIAK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOMEIGDIAK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDOMEIGDIAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDOMEIGDIAK*))((::PBYTE)hIl2Cpp + LDOMEIGDIAK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDOMEIGDIAK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
