#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLEEIKBLHIK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BLEEIKBLHIK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF5E300)
#define BLEEIKBLHIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF5E520)
#define BLEEIKBLHIK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF5DF50)
#define BLEEIKBLHIK_CPCMJBDMODO_OFFSET UNITYSDK_OFFSET(0x1DF5DFA0)
#define BLEEIKBLHIK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF5DF20)
#define BLEEIKBLHIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5DF10)
#define BLEEIKBLHIK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF5E080)
#define BLEEIKBLHIK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF5DFB0)
#define BLEEIKBLHIK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF5E1F0)
#define BLEEIKBLHIK_GOPLCGGEACN_OFFSET UNITYSDK_OFFSET(0x1DF5DF90)
#define BLEEIKBLHIK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF5DED0)
#define BLEEIKBLHIK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF5E3C0)
#define BLEEIKBLHIK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF5E390)
#define BLEEIKBLHIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF5DF00)
#define BLEEIKBLHIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF5E220)
#define BLEEIKBLHIK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF5E280)

inline static constexpr unsigned int BLEEIKBLHIK_TypeDefinitionIndex = 33877;

	class BLEEIKBLHIK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CKHHCDKNCID; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BLEEIKBLHIK")->GetStaticField(0x4C460);
		}

		// static const ::System::Object MJGKNNHCJCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEEIKBLHIK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BLEEIKBLHIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLEEIKBLHIK*))((::PBYTE)hIl2Cpp + BLEEIKBLHIK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLEEIKBLHIK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BLEEIKBLHIK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEEIKBLHIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BLEEIKBLHIK* Clone()
		{
			return ((::BLEEIKBLHIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEEIKBLHIK_CLONE_OFFSET))(this);
		}

		::System::UInt32 GOPLCGGEACN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEEIKBLHIK_GOPLCGGEACN_OFFSET))(this);
		}

		::System::Void CPCMJBDMODO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLEEIKBLHIK_CPCMJBDMODO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLEEIKBLHIK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BLEEIKBLHIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLEEIKBLHIK*))((::PBYTE)hIl2Cpp + BLEEIKBLHIK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEEIKBLHIK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEEIKBLHIK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BLEEIKBLHIK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEEIKBLHIK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BLEEIKBLHIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLEEIKBLHIK*))((::PBYTE)hIl2Cpp + BLEEIKBLHIK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BLEEIKBLHIK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
