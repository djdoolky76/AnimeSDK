#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBKAAJAHAJH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBKAAJAHAJH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAD2DC0)
#define NBKAAJAHAJH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD2FE0)
#define NBKAAJAHAJH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAD2A10)
#define NBKAAJAHAJH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAD29E0)
#define NBKAAJAHAJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD29D0)
#define NBKAAJAHAJH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAD2B40)
#define NBKAAJAHAJH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAD2A70)
#define NBKAAJAHAJH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAD2CB0)
#define NBKAAJAHAJH_IOCKJPANHND_OFFSET UNITYSDK_OFFSET(0x1EAD2A60)
#define NBKAAJAHAJH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAD2990)
#define NBKAAJAHAJH_KBDFMFLCKGA_OFFSET UNITYSDK_OFFSET(0x1EAD2A50)
#define NBKAAJAHAJH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAD2E80)
#define NBKAAJAHAJH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAD2E50)
#define NBKAAJAHAJH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAD29C0)
#define NBKAAJAHAJH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAD2CE0)
#define NBKAAJAHAJH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAD2D40)

inline static constexpr unsigned int NBKAAJAHAJH_TypeDefinitionIndex = 33579;

	class NBKAAJAHAJH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JHCOABLIANB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NBKAAJAHAJH")->GetStaticField(0x5CF70);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NBKAAJAHAJH_JJGHOBBFNJD_OFFSET))();
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
