#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAEGCNHKCAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NAEGCNHKCAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDFA770)
#define NAEGCNHKCAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDFA990)
#define NAEGCNHKCAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDFA360)
#define NAEGCNHKCAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDFA330)
#define NAEGCNHKCAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDFA320)
#define NAEGCNHKCAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDFA4F0)
#define NAEGCNHKCAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDFA3F0)
#define NAEGCNHKCAB_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1FDFA3D0)
#define NAEGCNHKCAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDFA660)
#define NAEGCNHKCAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDFA2B0)
#define NAEGCNHKCAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDFA830)
#define NAEGCNHKCAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDFA800)
#define NAEGCNHKCAB_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1FDFA3E0)
#define NAEGCNHKCAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDFA310)
#define NAEGCNHKCAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDFA690)
#define NAEGCNHKCAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDFA6F0)

inline static constexpr unsigned int NAEGCNHKCAB_TypeDefinitionIndex = 29965;

	class NAEGCNHKCAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NDFIDCNNGMJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NAEGCNHKCAB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NAEGCNHKCAB*>**)UnitySDK::FromName("", "NAEGCNHKCAB")->GetStaticField(0x667B0);
		}

		// static const ::System::Object KLJANMLJHEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEGCNHKCAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NAEGCNHKCAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAEGCNHKCAB*))((::PBYTE)hIl2Cpp + NAEGCNHKCAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAEGCNHKCAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NAEGCNHKCAB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NAEGCNHKCAB*>*(*)())((::PBYTE)hIl2Cpp + NAEGCNHKCAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEGCNHKCAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NAEGCNHKCAB* Clone()
		{
			return ((::NAEGCNHKCAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEGCNHKCAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEGCNHKCAB_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAEGCNHKCAB_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAEGCNHKCAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NAEGCNHKCAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAEGCNHKCAB*))((::PBYTE)hIl2Cpp + NAEGCNHKCAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEGCNHKCAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEGCNHKCAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NAEGCNHKCAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEGCNHKCAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NAEGCNHKCAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAEGCNHKCAB*))((::PBYTE)hIl2Cpp + NAEGCNHKCAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NAEGCNHKCAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
