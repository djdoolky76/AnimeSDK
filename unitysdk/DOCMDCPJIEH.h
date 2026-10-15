#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOCMDCPJIEH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DOCMDCPJIEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1D0420)
#define DOCMDCPJIEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D06F0)
#define DOCMDCPJIEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1D0020)
#define DOCMDCPJIEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1CFFF0)
#define DOCMDCPJIEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CFFE0)
#define DOCMDCPJIEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1D01E0)
#define DOCMDCPJIEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1D00D0)
#define DOCMDCPJIEH_FIJKGMBEFAB_OFFSET UNITYSDK_OFFSET(0x1E1D0090)
#define DOCMDCPJIEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1D02B0)
#define DOCMDCPJIEH_HCHBMGKHFLA_OFFSET UNITYSDK_OFFSET(0x1E1D00A0)
#define DOCMDCPJIEH_JEACDBBGMHA_OFFSET UNITYSDK_OFFSET(0x1E1D00B0)
#define DOCMDCPJIEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1CFF70)
#define DOCMDCPJIEH_LIPCAGOPMLO_OFFSET UNITYSDK_OFFSET(0x1E1D00C0)
#define DOCMDCPJIEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1D0570)
#define DOCMDCPJIEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1D0530)
#define DOCMDCPJIEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1CFFD0)
#define DOCMDCPJIEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1D02E0)
#define DOCMDCPJIEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1D0340)

inline static constexpr unsigned int DOCMDCPJIEH_TypeDefinitionIndex = 34844;

	class DOCMDCPJIEH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PAPKMBOANON; // 0x18
		::System::UInt32 NGKKLAPFHAJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DOCMDCPJIEH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DOCMDCPJIEH*>**)UnitySDK::FromName("", "DOCMDCPJIEH")->GetStaticField(0x37AC0);
		}

		// static const ::System::Object OIFHHEMLENE; // 0x0
		// static const ::System::Object KFAMMMBHNIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCMDCPJIEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DOCMDCPJIEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOCMDCPJIEH*))((::PBYTE)hIl2Cpp + DOCMDCPJIEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOCMDCPJIEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DOCMDCPJIEH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DOCMDCPJIEH*>*(*)())((::PBYTE)hIl2Cpp + DOCMDCPJIEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCMDCPJIEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DOCMDCPJIEH* Clone()
		{
			return ((::DOCMDCPJIEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCMDCPJIEH_CLONE_OFFSET))(this);
		}

		::System::UInt32 FIJKGMBEFAB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCMDCPJIEH_FIJKGMBEFAB_OFFSET))(this);
		}

		::System::Void HCHBMGKHFLA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOCMDCPJIEH_HCHBMGKHFLA_OFFSET))(this, a1);
		}

		::System::UInt32 JEACDBBGMHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCMDCPJIEH_JEACDBBGMHA_OFFSET))(this);
		}

		::System::Void LIPCAGOPMLO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOCMDCPJIEH_LIPCAGOPMLO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOCMDCPJIEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DOCMDCPJIEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOCMDCPJIEH*))((::PBYTE)hIl2Cpp + DOCMDCPJIEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCMDCPJIEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCMDCPJIEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DOCMDCPJIEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCMDCPJIEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DOCMDCPJIEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOCMDCPJIEH*))((::PBYTE)hIl2Cpp + DOCMDCPJIEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DOCMDCPJIEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
