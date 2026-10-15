#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAJKNJLJPEP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NAJKNJLJPEP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAC5230)
#define NAJKNJLJPEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC5500)
#define NAJKNJLJPEP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAC4E30)
#define NAJKNJLJPEP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAC4E00)
#define NAJKNJLJPEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC4DF0)
#define NAJKNJLJPEP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAC4FF0)
#define NAJKNJLJPEP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAC4EE0)
#define NAJKNJLJPEP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAC50C0)
#define NAJKNJLJPEP_HABAMKKPAMF_OFFSET UNITYSDK_OFFSET(0x1EAC4EB0)
#define NAJKNJLJPEP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAC4D80)
#define NAJKNJLJPEP_JKKBIAEPIMG_OFFSET UNITYSDK_OFFSET(0x1EAC4ED0)
#define NAJKNJLJPEP_MDFBONGOKCM_OFFSET UNITYSDK_OFFSET(0x1EAC4EC0)
#define NAJKNJLJPEP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAC5380)
#define NAJKNJLJPEP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAC5340)
#define NAJKNJLJPEP_NBAONFIJJMG_OFFSET UNITYSDK_OFFSET(0x1EAC4EA0)
#define NAJKNJLJPEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAC4DE0)
#define NAJKNJLJPEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAC50F0)
#define NAJKNJLJPEP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAC5150)

	class NAJKNJLJPEP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GBCGLGDDBBG; // 0x18
		::System::UInt32 BGEDJGLMLEL; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NAJKNJLJPEP")->GetStaticField(0x5C870);
		}

		// static const ::System::Object LCCHNKBAGED; // 0x0
		// static const ::System::Object DACKDPMHHGC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJKNJLJPEP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NAJKNJLJPEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAJKNJLJPEP*))((::PBYTE)hIl2Cpp + NAJKNJLJPEP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAJKNJLJPEP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NAJKNJLJPEP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJKNJLJPEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NAJKNJLJPEP* Clone()
		{
			return ((::NAJKNJLJPEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJKNJLJPEP_CLONE_OFFSET))(this);
		}

		::System::UInt32 NBAONFIJJMG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJKNJLJPEP_NBAONFIJJMG_OFFSET))(this);
		}

		::System::Void HABAMKKPAMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAJKNJLJPEP_HABAMKKPAMF_OFFSET))(this, a1);
		}

		::System::UInt32 MDFBONGOKCM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJKNJLJPEP_MDFBONGOKCM_OFFSET))(this);
		}

		::System::Void JKKBIAEPIMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAJKNJLJPEP_JKKBIAEPIMG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAJKNJLJPEP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NAJKNJLJPEP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAJKNJLJPEP*))((::PBYTE)hIl2Cpp + NAJKNJLJPEP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJKNJLJPEP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJKNJLJPEP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NAJKNJLJPEP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJKNJLJPEP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NAJKNJLJPEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAJKNJLJPEP*))((::PBYTE)hIl2Cpp + NAJKNJLJPEP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NAJKNJLJPEP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
