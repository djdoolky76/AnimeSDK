#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLJPFFILKIO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLJPFFILKIO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E77E5F0)
#define JLJPFFILKIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E77E8C0)
#define JLJPFFILKIO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E77E240)
#define JLJPFFILKIO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E77E210)
#define JLJPFFILKIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E77E200)
#define JLJPFFILKIO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E77E3B0)
#define JLJPFFILKIO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E77E2D0)
#define JLJPFFILKIO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E77E480)
#define JLJPFFILKIO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E77E1C0)
#define JLJPFFILKIO_KOPEMAFAOJO_OFFSET UNITYSDK_OFFSET(0x1E77E290)
#define JLJPFFILKIO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E77E740)
#define JLJPFFILKIO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E77E700)
#define JLJPFFILKIO_NBKIECOMMOM_OFFSET UNITYSDK_OFFSET(0x1E77E2B0)
#define JLJPFFILKIO_NNCOBPOOOPE_OFFSET UNITYSDK_OFFSET(0x1E77E2A0)
#define JLJPFFILKIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E77E1F0)
#define JLJPFFILKIO_PPOKEDLLOOP_OFFSET UNITYSDK_OFFSET(0x1E77E2C0)
#define JLJPFFILKIO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E77E4B0)
#define JLJPFFILKIO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E77E510)

inline static constexpr unsigned int JLJPFFILKIO_TypeDefinitionIndex = 32328;

	class JLJPFFILKIO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KNKNCEIDLLK; // 0x18
		::System::UInt32 IHPJFABCFKH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JLJPFFILKIO")->GetStaticField(0x6B920);
		}

		// static const ::System::Object OHENEMKEFOP; // 0x0
		// static const ::System::Object MPJMOEPFPAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJPFFILKIO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLJPFFILKIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLJPFFILKIO*))((::PBYTE)hIl2Cpp + JLJPFFILKIO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLJPFFILKIO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JLJPFFILKIO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJPFFILKIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLJPFFILKIO* Clone()
		{
			return ((::JLJPFFILKIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJPFFILKIO_CLONE_OFFSET))(this);
		}

		::System::UInt32 KOPEMAFAOJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJPFFILKIO_KOPEMAFAOJO_OFFSET))(this);
		}

		::System::Void NNCOBPOOOPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLJPFFILKIO_NNCOBPOOOPE_OFFSET))(this, a1);
		}

		::System::UInt32 NBKIECOMMOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJPFFILKIO_NBKIECOMMOM_OFFSET))(this);
		}

		::System::Void PPOKEDLLOOP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLJPFFILKIO_PPOKEDLLOOP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLJPFFILKIO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLJPFFILKIO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLJPFFILKIO*))((::PBYTE)hIl2Cpp + JLJPFFILKIO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJPFFILKIO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJPFFILKIO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLJPFFILKIO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJPFFILKIO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLJPFFILKIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLJPFFILKIO*))((::PBYTE)hIl2Cpp + JLJPFFILKIO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLJPFFILKIO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
