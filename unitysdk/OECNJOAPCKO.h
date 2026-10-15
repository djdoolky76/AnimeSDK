#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OECNJOAPCKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OECNJOAPCKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE24220)
#define OECNJOAPCKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE244F0)
#define OECNJOAPCKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE23E70)
#define OECNJOAPCKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE23E40)
#define OECNJOAPCKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE23E30)
#define OECNJOAPCKO_DBCFAIPBBGH_OFFSET UNITYSDK_OFFSET(0x1DE23EE0)
#define OECNJOAPCKO_EDFFJIFGLFH_OFFSET UNITYSDK_OFFSET(0x1DE23EF0)
#define OECNJOAPCKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE23FE0)
#define OECNJOAPCKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE23F00)
#define OECNJOAPCKO_FGGCINOCEPH_OFFSET UNITYSDK_OFFSET(0x1DE23ED0)
#define OECNJOAPCKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE240B0)
#define OECNJOAPCKO_HDBNHPJEEGD_OFFSET UNITYSDK_OFFSET(0x1DE23EC0)
#define OECNJOAPCKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE23DF0)
#define OECNJOAPCKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE24370)
#define OECNJOAPCKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE24330)
#define OECNJOAPCKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE23E20)
#define OECNJOAPCKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE240E0)
#define OECNJOAPCKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE24140)

	class OECNJOAPCKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HPKMHPBMKLN; // 0x18
		::System::UInt32 AAAMEOFFPEI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OECNJOAPCKO")->GetStaticField(0x14560);
		}

		// static const ::System::Object GHDCBCDHLEF; // 0x0
		// static const ::System::Object NOKJBHNBDKI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNJOAPCKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OECNJOAPCKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OECNJOAPCKO*))((::PBYTE)hIl2Cpp + OECNJOAPCKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OECNJOAPCKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OECNJOAPCKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNJOAPCKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OECNJOAPCKO* Clone()
		{
			return ((::OECNJOAPCKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNJOAPCKO_CLONE_OFFSET))(this);
		}

		::System::UInt32 HDBNHPJEEGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNJOAPCKO_HDBNHPJEEGD_OFFSET))(this);
		}

		::System::Void FGGCINOCEPH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OECNJOAPCKO_FGGCINOCEPH_OFFSET))(this, a1);
		}

		::System::UInt32 DBCFAIPBBGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNJOAPCKO_DBCFAIPBBGH_OFFSET))(this);
		}

		::System::Void EDFFJIFGLFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OECNJOAPCKO_EDFFJIFGLFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OECNJOAPCKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OECNJOAPCKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OECNJOAPCKO*))((::PBYTE)hIl2Cpp + OECNJOAPCKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNJOAPCKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNJOAPCKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OECNJOAPCKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNJOAPCKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OECNJOAPCKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OECNJOAPCKO*))((::PBYTE)hIl2Cpp + OECNJOAPCKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OECNJOAPCKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
