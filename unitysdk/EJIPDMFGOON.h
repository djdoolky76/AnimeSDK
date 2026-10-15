#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJIPDMFGOON;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJIPDMFGOON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E28BCA0)
#define EJIPDMFGOON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E28BEC0)
#define EJIPDMFGOON_CLONE_OFFSET UNITYSDK_OFFSET(0x1E28B8F0)
#define EJIPDMFGOON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E28B8C0)
#define EJIPDMFGOON_CTOR_OFFSET UNITYSDK_OFFSET(0x1E28B8B0)
#define EJIPDMFGOON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E28BA20)
#define EJIPDMFGOON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E28B950)
#define EJIPDMFGOON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E28BB90)
#define EJIPDMFGOON_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E28B930)
#define EJIPDMFGOON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E28B870)
#define EJIPDMFGOON_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E28B940)
#define EJIPDMFGOON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E28BD60)
#define EJIPDMFGOON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E28BD30)
#define EJIPDMFGOON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E28B8A0)
#define EJIPDMFGOON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E28BBC0)
#define EJIPDMFGOON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E28BC20)

inline static constexpr unsigned int EJIPDMFGOON_TypeDefinitionIndex = 26278;

	class EJIPDMFGOON : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EJIPDMFGOON*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EJIPDMFGOON*>**)UnitySDK::FromName("", "EJIPDMFGOON")->GetStaticField(0x4CCD0);
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

		static ::Google::Protobuf::MessageParser_1<::EJIPDMFGOON*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EJIPDMFGOON*>*(*)())((::PBYTE)hIl2Cpp + EJIPDMFGOON_JJGHOBBFNJD_OFFSET))();
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
