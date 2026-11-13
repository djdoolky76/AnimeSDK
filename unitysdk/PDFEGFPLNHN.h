#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDFEGFPLNHN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PDFEGFPLNHN_APEDLLICFGC_OFFSET UNITYSDK_OFFSET(0x1FC02A70)
#define PDFEGFPLNHN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC02DA0)
#define PDFEGFPLNHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC03070)
#define PDFEGFPLNHN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC029F0)
#define PDFEGFPLNHN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC029C0)
#define PDFEGFPLNHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC029B0)
#define PDFEGFPLNHN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC02B60)
#define PDFEGFPLNHN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC02A80)
#define PDFEGFPLNHN_GACICMLAJKF_OFFSET UNITYSDK_OFFSET(0x1FC02A40)
#define PDFEGFPLNHN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC02C30)
#define PDFEGFPLNHN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC02970)
#define PDFEGFPLNHN_LBDMOIIHMCN_OFFSET UNITYSDK_OFFSET(0x1FC02A50)
#define PDFEGFPLNHN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC02EF0)
#define PDFEGFPLNHN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC02EB0)
#define PDFEGFPLNHN_MIBLAOPEIIM_OFFSET UNITYSDK_OFFSET(0x1FC02A60)
#define PDFEGFPLNHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC029A0)
#define PDFEGFPLNHN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC02C60)
#define PDFEGFPLNHN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC02CC0)

inline static constexpr unsigned int PDFEGFPLNHN_TypeDefinitionIndex = 30520;

	class PDFEGFPLNHN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GHPODDOILHM; // 0x18
		::System::UInt32 BPJIBLFACNN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PDFEGFPLNHN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PDFEGFPLNHN*>**)UnitySDK::FromName("", "PDFEGFPLNHN")->GetStaticField(0x2FF50);
		}

		// static const ::System::Object NNCIDOOJFBD; // 0x0
		// static const ::System::Object EJEADOJGJGA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEGFPLNHN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PDFEGFPLNHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDFEGFPLNHN*))((::PBYTE)hIl2Cpp + PDFEGFPLNHN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDFEGFPLNHN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PDFEGFPLNHN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PDFEGFPLNHN*>*(*)())((::PBYTE)hIl2Cpp + PDFEGFPLNHN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEGFPLNHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PDFEGFPLNHN* Clone()
		{
			return ((::PDFEGFPLNHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEGFPLNHN_CLONE_OFFSET))(this);
		}

		::System::UInt32 GACICMLAJKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEGFPLNHN_GACICMLAJKF_OFFSET))(this);
		}

		::System::Void LBDMOIIHMCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDFEGFPLNHN_LBDMOIIHMCN_OFFSET))(this, a1);
		}

		::System::UInt32 MIBLAOPEIIM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEGFPLNHN_MIBLAOPEIIM_OFFSET))(this);
		}

		::System::Void APEDLLICFGC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDFEGFPLNHN_APEDLLICFGC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDFEGFPLNHN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PDFEGFPLNHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDFEGFPLNHN*))((::PBYTE)hIl2Cpp + PDFEGFPLNHN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEGFPLNHN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEGFPLNHN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PDFEGFPLNHN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFEGFPLNHN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PDFEGFPLNHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDFEGFPLNHN*))((::PBYTE)hIl2Cpp + PDFEGFPLNHN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PDFEGFPLNHN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
