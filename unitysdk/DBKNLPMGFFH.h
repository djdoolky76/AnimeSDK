#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBKNLPMGFFH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBKNLPMGFFH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E15F6B0)
#define DBKNLPMGFFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15F8D0)
#define DBKNLPMGFFH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E15F2A0)
#define DBKNLPMGFFH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E15F270)
#define DBKNLPMGFFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15F260)
#define DBKNLPMGFFH_DCBGNJCLMPF_OFFSET UNITYSDK_OFFSET(0x1E15F320)
#define DBKNLPMGFFH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E15F430)
#define DBKNLPMGFFH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E15F330)
#define DBKNLPMGFFH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E15F5A0)
#define DBKNLPMGFFH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E15F1F0)
#define DBKNLPMGFFH_LMMJLJJDMGD_OFFSET UNITYSDK_OFFSET(0x1E15F310)
#define DBKNLPMGFFH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E15F770)
#define DBKNLPMGFFH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E15F740)
#define DBKNLPMGFFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E15F250)
#define DBKNLPMGFFH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E15F5D0)
#define DBKNLPMGFFH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E15F630)

	class DBKNLPMGFFH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LHJILAOOJMF; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DBKNLPMGFFH")->GetStaticField(0x260A0);
		}

		// static const ::System::Object EPPBJAMAMGC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBKNLPMGFFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBKNLPMGFFH*))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBKNLPMGFFH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DBKNLPMGFFH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBKNLPMGFFH* Clone()
		{
			return ((::DBKNLPMGFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_CLONE_OFFSET))(this);
		}

		::System::UInt32 LMMJLJJDMGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_LMMJLJJDMGD_OFFSET))(this);
		}

		::System::Void DCBGNJCLMPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_DCBGNJCLMPF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBKNLPMGFFH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBKNLPMGFFH*))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBKNLPMGFFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBKNLPMGFFH*))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
