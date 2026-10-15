#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBMMBDOINNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBMMBDOINNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E162120)
#define DBMMBDOINNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E162340)
#define DBMMBDOINNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E161D70)
#define DBMMBDOINNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E161D40)
#define DBMMBDOINNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E161D30)
#define DBMMBDOINNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E161EA0)
#define DBMMBDOINNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E161DD0)
#define DBMMBDOINNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E162010)
#define DBMMBDOINNC_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E161DC0)
#define DBMMBDOINNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E161CF0)
#define DBMMBDOINNC_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E161DB0)
#define DBMMBDOINNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1621E0)
#define DBMMBDOINNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1621B0)
#define DBMMBDOINNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E161D20)
#define DBMMBDOINNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E162040)
#define DBMMBDOINNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1620A0)

inline static constexpr unsigned int DBMMBDOINNC_TypeDefinitionIndex = 34051;

	class DBMMBDOINNC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJEGLCJEOKC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DBMMBDOINNC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DBMMBDOINNC*>**)UnitySDK::FromName("", "DBMMBDOINNC")->GetStaticField(0x261F0);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMMBDOINNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBMMBDOINNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBMMBDOINNC*))((::PBYTE)hIl2Cpp + DBMMBDOINNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBMMBDOINNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DBMMBDOINNC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DBMMBDOINNC*>*(*)())((::PBYTE)hIl2Cpp + DBMMBDOINNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMMBDOINNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBMMBDOINNC* Clone()
		{
			return ((::DBMMBDOINNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMMBDOINNC_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMMBDOINNC_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBMMBDOINNC_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBMMBDOINNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBMMBDOINNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBMMBDOINNC*))((::PBYTE)hIl2Cpp + DBMMBDOINNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMMBDOINNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMMBDOINNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBMMBDOINNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMMBDOINNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBMMBDOINNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBMMBDOINNC*))((::PBYTE)hIl2Cpp + DBMMBDOINNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBMMBDOINNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
