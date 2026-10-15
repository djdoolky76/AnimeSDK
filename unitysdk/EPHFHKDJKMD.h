#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPHFHKDJKMD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPHFHKDJKMD_BEKKEMFPFGI_OFFSET UNITYSDK_OFFSET(0x1E30B5E0)
#define EPHFHKDJKMD_BEOHKBHCLLD_OFFSET UNITYSDK_OFFSET(0x1E30B5B0)
#define EPHFHKDJKMD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E30B940)
#define EPHFHKDJKMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E30BC10)
#define EPHFHKDJKMD_CFGAAAPLGOO_OFFSET UNITYSDK_OFFSET(0x1E30B5C0)
#define EPHFHKDJKMD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E30B540)
#define EPHFHKDJKMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E30B510)
#define EPHFHKDJKMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E30B500)
#define EPHFHKDJKMD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E30B700)
#define EPHFHKDJKMD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E30B5F0)
#define EPHFHKDJKMD_FPNAINDPMLO_OFFSET UNITYSDK_OFFSET(0x1E30B5D0)
#define EPHFHKDJKMD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E30B7D0)
#define EPHFHKDJKMD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E30B490)
#define EPHFHKDJKMD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E30BA90)
#define EPHFHKDJKMD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E30BA50)
#define EPHFHKDJKMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E30B4F0)
#define EPHFHKDJKMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E30B800)
#define EPHFHKDJKMD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E30B860)

inline static constexpr unsigned int EPHFHKDJKMD_TypeDefinitionIndex = 27333;

	class EPHFHKDJKMD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EPJHDLKIENP; // 0x18
		::System::UInt32 GHFOFBFELLK; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EPHFHKDJKMD")->GetStaticField(0x55E20);
		}

		// static const ::System::Object IAFBENJCEBC; // 0x0
		// static const ::System::Object FFOHGJLPOIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHFHKDJKMD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPHFHKDJKMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPHFHKDJKMD*))((::PBYTE)hIl2Cpp + EPHFHKDJKMD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPHFHKDJKMD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EPHFHKDJKMD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHFHKDJKMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPHFHKDJKMD* Clone()
		{
			return ((::EPHFHKDJKMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHFHKDJKMD_CLONE_OFFSET))(this);
		}

		::System::UInt32 BEOHKBHCLLD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHFHKDJKMD_BEOHKBHCLLD_OFFSET))(this);
		}

		::System::Void CFGAAAPLGOO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPHFHKDJKMD_CFGAAAPLGOO_OFFSET))(this, a1);
		}

		::System::UInt32 FPNAINDPMLO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHFHKDJKMD_FPNAINDPMLO_OFFSET))(this);
		}

		::System::Void BEKKEMFPFGI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPHFHKDJKMD_BEKKEMFPFGI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPHFHKDJKMD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPHFHKDJKMD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPHFHKDJKMD*))((::PBYTE)hIl2Cpp + EPHFHKDJKMD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHFHKDJKMD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHFHKDJKMD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPHFHKDJKMD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHFHKDJKMD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPHFHKDJKMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPHFHKDJKMD*))((::PBYTE)hIl2Cpp + EPHFHKDJKMD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPHFHKDJKMD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
