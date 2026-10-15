#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAAIAFILLFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MAAIAFILLFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9D5B90)
#define MAAIAFILLFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D5DB0)
#define MAAIAFILLFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9D57E0)
#define MAAIAFILLFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9D57B0)
#define MAAIAFILLFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D57A0)
#define MAAIAFILLFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9D5910)
#define MAAIAFILLFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9D5840)
#define MAAIAFILLFN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9D5830)
#define MAAIAFILLFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9D5A80)
#define MAAIAFILLFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9D5760)
#define MAAIAFILLFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9D5C50)
#define MAAIAFILLFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9D5C20)
#define MAAIAFILLFN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9D5820)
#define MAAIAFILLFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9D5790)
#define MAAIAFILLFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9D5AB0)
#define MAAIAFILLFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9D5B10)

	class MAAIAFILLFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MAAIAFILLFN")->GetStaticField(0x426B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAIAFILLFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MAAIAFILLFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAAIAFILLFN*))((::PBYTE)hIl2Cpp + MAAIAFILLFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAAIAFILLFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MAAIAFILLFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAIAFILLFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MAAIAFILLFN* Clone()
		{
			return ((::MAAIAFILLFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAIAFILLFN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAIAFILLFN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MAAIAFILLFN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MAAIAFILLFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MAAIAFILLFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MAAIAFILLFN*))((::PBYTE)hIl2Cpp + MAAIAFILLFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAIAFILLFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAIAFILLFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MAAIAFILLFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAIAFILLFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MAAIAFILLFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAAIAFILLFN*))((::PBYTE)hIl2Cpp + MAAIAFILLFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MAAIAFILLFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
