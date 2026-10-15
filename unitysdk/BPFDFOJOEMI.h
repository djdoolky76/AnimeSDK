#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPFDFOJOEMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPFDFOJOEMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E043280)
#define BPFDFOJOEMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E043550)
#define BPFDFOJOEMI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E042E80)
#define BPFDFOJOEMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E042E50)
#define BPFDFOJOEMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E042E40)
#define BPFDFOJOEMI_EKBNADJNHPK_OFFSET UNITYSDK_OFFSET(0x1E042F00)
#define BPFDFOJOEMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E043040)
#define BPFDFOJOEMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E042F30)
#define BPFDFOJOEMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E043110)
#define BPFDFOJOEMI_HLAPICBIGPN_OFFSET UNITYSDK_OFFSET(0x1E042F20)
#define BPFDFOJOEMI_IHJEHGAJGCM_OFFSET UNITYSDK_OFFSET(0x1E042EF0)
#define BPFDFOJOEMI_JGACMHLOJCM_OFFSET UNITYSDK_OFFSET(0x1E042F10)
#define BPFDFOJOEMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E042DD0)
#define BPFDFOJOEMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0433D0)
#define BPFDFOJOEMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E043390)
#define BPFDFOJOEMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E042E30)
#define BPFDFOJOEMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E043140)
#define BPFDFOJOEMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0431A0)

inline static constexpr unsigned int BPFDFOJOEMI_TypeDefinitionIndex = 32479;

	class BPFDFOJOEMI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FPBMHDLILGC; // 0x18
		::System::UInt32 PPGOGDKDEKE; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BPFDFOJOEMI")->GetStaticField(0x11990);
		}

		// static const ::System::Object EKCFPDDAIMD; // 0x0
		// static const ::System::Object MDCKIFAGLOL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFDFOJOEMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPFDFOJOEMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPFDFOJOEMI*))((::PBYTE)hIl2Cpp + BPFDFOJOEMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPFDFOJOEMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BPFDFOJOEMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFDFOJOEMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPFDFOJOEMI* Clone()
		{
			return ((::BPFDFOJOEMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFDFOJOEMI_CLONE_OFFSET))(this);
		}

		::System::UInt32 IHJEHGAJGCM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFDFOJOEMI_IHJEHGAJGCM_OFFSET))(this);
		}

		::System::Void EKBNADJNHPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPFDFOJOEMI_EKBNADJNHPK_OFFSET))(this, a1);
		}

		::System::UInt32 JGACMHLOJCM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFDFOJOEMI_JGACMHLOJCM_OFFSET))(this);
		}

		::System::Void HLAPICBIGPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPFDFOJOEMI_HLAPICBIGPN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPFDFOJOEMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPFDFOJOEMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPFDFOJOEMI*))((::PBYTE)hIl2Cpp + BPFDFOJOEMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFDFOJOEMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFDFOJOEMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPFDFOJOEMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFDFOJOEMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPFDFOJOEMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPFDFOJOEMI*))((::PBYTE)hIl2Cpp + BPFDFOJOEMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPFDFOJOEMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
