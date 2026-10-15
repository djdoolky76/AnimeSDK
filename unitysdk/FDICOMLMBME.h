#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDICOMLMBME;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDICOMLMBME_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E35A4C0)
#define FDICOMLMBME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E35A6E0)
#define FDICOMLMBME_CLONE_OFFSET UNITYSDK_OFFSET(0x1E35A110)
#define FDICOMLMBME_CPJGHGBBIMJ_OFFSET UNITYSDK_OFFSET(0x1E35A160)
#define FDICOMLMBME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E35A0E0)
#define FDICOMLMBME_CTOR_OFFSET UNITYSDK_OFFSET(0x1E35A0D0)
#define FDICOMLMBME_DEKGFFNILPD_OFFSET UNITYSDK_OFFSET(0x1E35A150)
#define FDICOMLMBME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E35A240)
#define FDICOMLMBME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E35A170)
#define FDICOMLMBME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E35A3B0)
#define FDICOMLMBME_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E35A090)
#define FDICOMLMBME_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E35A580)
#define FDICOMLMBME_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E35A550)
#define FDICOMLMBME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E35A0C0)
#define FDICOMLMBME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E35A3E0)
#define FDICOMLMBME_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E35A440)

inline static constexpr unsigned int FDICOMLMBME_TypeDefinitionIndex = 33115;

	class FDICOMLMBME : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GLFLHLCNOOH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FDICOMLMBME*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FDICOMLMBME*>**)UnitySDK::FromName("", "FDICOMLMBME")->GetStaticField(0x5BAB0);
		}

		// static const ::System::Object OPJGBPJDMKH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDICOMLMBME_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDICOMLMBME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDICOMLMBME*))((::PBYTE)hIl2Cpp + FDICOMLMBME_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDICOMLMBME_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FDICOMLMBME*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FDICOMLMBME*>*(*)())((::PBYTE)hIl2Cpp + FDICOMLMBME_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDICOMLMBME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDICOMLMBME* Clone()
		{
			return ((::FDICOMLMBME*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDICOMLMBME_CLONE_OFFSET))(this);
		}

		::System::UInt32 DEKGFFNILPD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDICOMLMBME_DEKGFFNILPD_OFFSET))(this);
		}

		::System::Void CPJGHGBBIMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDICOMLMBME_CPJGHGBBIMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDICOMLMBME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDICOMLMBME* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDICOMLMBME*))((::PBYTE)hIl2Cpp + FDICOMLMBME_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDICOMLMBME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDICOMLMBME_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDICOMLMBME_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDICOMLMBME_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDICOMLMBME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDICOMLMBME*))((::PBYTE)hIl2Cpp + FDICOMLMBME_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDICOMLMBME_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
