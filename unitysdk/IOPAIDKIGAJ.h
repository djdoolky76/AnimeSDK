#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOPAIDKIGAJ;
class PFPPACPMFDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IOPAIDKIGAJ_AIOMIICNLAP_OFFSET UNITYSDK_OFFSET(0x1E6DB500)
#define IOPAIDKIGAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6DBAB0)
#define IOPAIDKIGAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DBD50)
#define IOPAIDKIGAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6DB460)
#define IOPAIDKIGAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6DB3D0)
#define IOPAIDKIGAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DB3C0)
#define IOPAIDKIGAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6DB690)
#define IOPAIDKIGAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6DB520)
#define IOPAIDKIGAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6DB960)
#define IOPAIDKIGAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6DB380)
#define IOPAIDKIGAJ_JOCPANPPOIJ_OFFSET UNITYSDK_OFFSET(0x1E6DB510)
#define IOPAIDKIGAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6DBBC0)
#define IOPAIDKIGAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6DBB10)
#define IOPAIDKIGAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6DB3B0)
#define IOPAIDKIGAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6DB9C0)
#define IOPAIDKIGAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6DBA20)

	class IOPAIDKIGAJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PFPPACPMFDJ* KJCPDKKLFEP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IOPAIDKIGAJ")->GetStaticField(0x5A900);
		}

		// static const ::System::Object CIFIGNAEMHL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOPAIDKIGAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IOPAIDKIGAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOPAIDKIGAJ*))((::PBYTE)hIl2Cpp + IOPAIDKIGAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOPAIDKIGAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IOPAIDKIGAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOPAIDKIGAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IOPAIDKIGAJ* Clone()
		{
			return ((::IOPAIDKIGAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOPAIDKIGAJ_CLONE_OFFSET))(this);
		}

		::PFPPACPMFDJ* AIOMIICNLAP()
		{
			return ((::PFPPACPMFDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOPAIDKIGAJ_AIOMIICNLAP_OFFSET))(this);
		}

		::System::Void JOCPANPPOIJ(::PFPPACPMFDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFPPACPMFDJ*))((::PBYTE)hIl2Cpp + IOPAIDKIGAJ_JOCPANPPOIJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IOPAIDKIGAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IOPAIDKIGAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOPAIDKIGAJ*))((::PBYTE)hIl2Cpp + IOPAIDKIGAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOPAIDKIGAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOPAIDKIGAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IOPAIDKIGAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOPAIDKIGAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IOPAIDKIGAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOPAIDKIGAJ*))((::PBYTE)hIl2Cpp + IOPAIDKIGAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IOPAIDKIGAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
