#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHFHMJEMBOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHFHMJEMBOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E815920)
#define KHFHMJEMBOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E815B40)
#define KHFHMJEMBOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E815510)
#define KHFHMJEMBOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8154E0)
#define KHFHMJEMBOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8154D0)
#define KHFHMJEMBOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8156A0)
#define KHFHMJEMBOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8155A0)
#define KHFHMJEMBOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E815810)
#define KHFHMJEMBOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E815460)
#define KHFHMJEMBOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8159E0)
#define KHFHMJEMBOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8159B0)
#define KHFHMJEMBOF_NCOKKJBNOHA_OFFSET UNITYSDK_OFFSET(0x1E815590)
#define KHFHMJEMBOF_PBDCPINNEHB_OFFSET UNITYSDK_OFFSET(0x1E815580)
#define KHFHMJEMBOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8154C0)
#define KHFHMJEMBOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E815840)
#define KHFHMJEMBOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8158A0)

inline static constexpr unsigned int KHFHMJEMBOF_TypeDefinitionIndex = 25539;

	class KHFHMJEMBOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFKCJLGPJIF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KHFHMJEMBOF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KHFHMJEMBOF*>**)UnitySDK::FromName("", "KHFHMJEMBOF")->GetStaticField(0x15FD0);
		}

		// static const ::System::Object OAAJLFDLHMP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFHMJEMBOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHFHMJEMBOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHFHMJEMBOF*))((::PBYTE)hIl2Cpp + KHFHMJEMBOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHFHMJEMBOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KHFHMJEMBOF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KHFHMJEMBOF*>*(*)())((::PBYTE)hIl2Cpp + KHFHMJEMBOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFHMJEMBOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHFHMJEMBOF* Clone()
		{
			return ((::KHFHMJEMBOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFHMJEMBOF_CLONE_OFFSET))(this);
		}

		::System::UInt32 PBDCPINNEHB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFHMJEMBOF_PBDCPINNEHB_OFFSET))(this);
		}

		::System::Void NCOKKJBNOHA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHFHMJEMBOF_NCOKKJBNOHA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHFHMJEMBOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHFHMJEMBOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHFHMJEMBOF*))((::PBYTE)hIl2Cpp + KHFHMJEMBOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFHMJEMBOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFHMJEMBOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHFHMJEMBOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFHMJEMBOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHFHMJEMBOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHFHMJEMBOF*))((::PBYTE)hIl2Cpp + KHFHMJEMBOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHFHMJEMBOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
