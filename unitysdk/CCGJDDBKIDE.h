#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCGJDDBKIDE_OAKDCENFILP_BBFEFIPJMEB.h"
#include "unitysdk/System/Object.h"
class CCGJDDBKIDE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCGJDDBKIDE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0740D0)
#define CCGJDDBKIDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0743E0)
#define CCGJDDBKIDE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E073D10)
#define CCGJDDBKIDE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E073CE0)
#define CCGJDDBKIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E073CD0)
#define CCGJDDBKIDE_DFEIMIPAIKD_OFFSET UNITYSDK_OFFSET(0x1E073D70)
#define CCGJDDBKIDE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E073E80)
#define CCGJDDBKIDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E073DA0)
#define CCGJDDBKIDE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E073F50)
#define CCGJDDBKIDE_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E073D90)
#define CCGJDDBKIDE_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E073D80)
#define CCGJDDBKIDE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E073C90)
#define CCGJDDBKIDE_KLFLCDNEAJF_OFFSET UNITYSDK_OFFSET(0x1E073D60)
#define CCGJDDBKIDE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E074260)
#define CCGJDDBKIDE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E074220)
#define CCGJDDBKIDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E073CC0)
#define CCGJDDBKIDE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E073F80)
#define CCGJDDBKIDE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E073FE0)

inline static constexpr unsigned int CCGJDDBKIDE_TypeDefinitionIndex = 29722;

	class CCGJDDBKIDE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AAGLNFKIFCO; // 0x18
		::CCGJDDBKIDE_OAKDCENFILP_BBFEFIPJMEB GMPNCOBOFDM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CCGJDDBKIDE")->GetStaticField(0xD0C0);
		}

		// static const ::System::Object KMHMCIFFCNE; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGJDDBKIDE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCGJDDBKIDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCGJDDBKIDE*))((::PBYTE)hIl2Cpp + CCGJDDBKIDE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCGJDDBKIDE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CCGJDDBKIDE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGJDDBKIDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCGJDDBKIDE* Clone()
		{
			return ((::CCGJDDBKIDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGJDDBKIDE_CLONE_OFFSET))(this);
		}

		::System::UInt32 KLFLCDNEAJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGJDDBKIDE_KLFLCDNEAJF_OFFSET))(this);
		}

		::System::Void DFEIMIPAIKD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCGJDDBKIDE_DFEIMIPAIKD_OFFSET))(this, a1);
		}

		::CCGJDDBKIDE_OAKDCENFILP_BBFEFIPJMEB JBIOGKPHKKC()
		{
			return ((::CCGJDDBKIDE_OAKDCENFILP_BBFEFIPJMEB(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGJDDBKIDE_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::CCGJDDBKIDE_OAKDCENFILP_BBFEFIPJMEB a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCGJDDBKIDE_OAKDCENFILP_BBFEFIPJMEB))((::PBYTE)hIl2Cpp + CCGJDDBKIDE_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCGJDDBKIDE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCGJDDBKIDE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCGJDDBKIDE*))((::PBYTE)hIl2Cpp + CCGJDDBKIDE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGJDDBKIDE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGJDDBKIDE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCGJDDBKIDE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGJDDBKIDE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCGJDDBKIDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCGJDDBKIDE*))((::PBYTE)hIl2Cpp + CCGJDDBKIDE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCGJDDBKIDE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
