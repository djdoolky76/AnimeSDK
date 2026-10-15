#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJIPDMFGOON;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJIPDMFGOON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2B9320)
#define EJIPDMFGOON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B9540)
#define EJIPDMFGOON_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2B8F70)
#define EJIPDMFGOON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2B8F40)
#define EJIPDMFGOON_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B8F30)
#define EJIPDMFGOON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2B90A0)
#define EJIPDMFGOON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2B8FD0)
#define EJIPDMFGOON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2B9210)
#define EJIPDMFGOON_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E2B8FB0)
#define EJIPDMFGOON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2B8EF0)
#define EJIPDMFGOON_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E2B8FC0)
#define EJIPDMFGOON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2B93E0)
#define EJIPDMFGOON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2B93B0)
#define EJIPDMFGOON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2B8F20)
#define EJIPDMFGOON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2B9240)
#define EJIPDMFGOON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2B92A0)

inline static constexpr unsigned int EJIPDMFGOON_TypeDefinitionIndex = 26278;

	class EJIPDMFGOON : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EJIPDMFGOON")->GetStaticField(0x4BB00);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIPDMFGOON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJIPDMFGOON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJIPDMFGOON*))((::PBYTE)hIl2Cpp + EJIPDMFGOON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJIPDMFGOON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EJIPDMFGOON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIPDMFGOON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJIPDMFGOON* Clone()
		{
			return ((::EJIPDMFGOON*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIPDMFGOON_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIPDMFGOON_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJIPDMFGOON_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJIPDMFGOON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJIPDMFGOON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJIPDMFGOON*))((::PBYTE)hIl2Cpp + EJIPDMFGOON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIPDMFGOON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIPDMFGOON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJIPDMFGOON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIPDMFGOON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJIPDMFGOON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJIPDMFGOON*))((::PBYTE)hIl2Cpp + EJIPDMFGOON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJIPDMFGOON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
