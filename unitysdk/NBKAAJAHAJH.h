#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBKAAJAHAJH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBKAAJAHAJH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAA5730)
#define NBKAAJAHAJH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAA5950)
#define NBKAAJAHAJH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAA5380)
#define NBKAAJAHAJH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAA5350)
#define NBKAAJAHAJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA5340)
#define NBKAAJAHAJH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAA54B0)
#define NBKAAJAHAJH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAA53E0)
#define NBKAAJAHAJH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAA5620)
#define NBKAAJAHAJH_IOCKJPANHND_OFFSET UNITYSDK_OFFSET(0x1EAA53D0)
#define NBKAAJAHAJH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAA5300)
#define NBKAAJAHAJH_KBDFMFLCKGA_OFFSET UNITYSDK_OFFSET(0x1EAA53C0)
#define NBKAAJAHAJH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAA57F0)
#define NBKAAJAHAJH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAA57C0)
#define NBKAAJAHAJH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAA5330)
#define NBKAAJAHAJH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAA5650)
#define NBKAAJAHAJH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAA56B0)

inline static constexpr unsigned int NBKAAJAHAJH_TypeDefinitionIndex = 33579;

	class NBKAAJAHAJH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JHCOABLIANB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NBKAAJAHAJH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NBKAAJAHAJH*>**)UnitySDK::FromName("", "NBKAAJAHAJH")->GetStaticField(0x5E110);
		}

		// static const ::System::Object FGCLPKIDGFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKAAJAHAJH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBKAAJAHAJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBKAAJAHAJH*))((::PBYTE)hIl2Cpp + NBKAAJAHAJH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBKAAJAHAJH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NBKAAJAHAJH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NBKAAJAHAJH*>*(*)())((::PBYTE)hIl2Cpp + NBKAAJAHAJH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKAAJAHAJH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBKAAJAHAJH* Clone()
		{
			return ((::NBKAAJAHAJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKAAJAHAJH_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBDFMFLCKGA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKAAJAHAJH_KBDFMFLCKGA_OFFSET))(this);
		}

		::System::Void IOCKJPANHND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBKAAJAHAJH_IOCKJPANHND_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBKAAJAHAJH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBKAAJAHAJH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBKAAJAHAJH*))((::PBYTE)hIl2Cpp + NBKAAJAHAJH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKAAJAHAJH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKAAJAHAJH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBKAAJAHAJH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKAAJAHAJH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBKAAJAHAJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBKAAJAHAJH*))((::PBYTE)hIl2Cpp + NBKAAJAHAJH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBKAAJAHAJH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
