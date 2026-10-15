#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBPDPCOGDEP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBPDPCOGDEP_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E61B360)
#define IBPDPCOGDEP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E61B6D0)
#define IBPDPCOGDEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E61B9A0)
#define IBPDPCOGDEP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E61B2D0)
#define IBPDPCOGDEP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E61B2A0)
#define IBPDPCOGDEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61B290)
#define IBPDPCOGDEP_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E61B370)
#define IBPDPCOGDEP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E61B490)
#define IBPDPCOGDEP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E61B380)
#define IBPDPCOGDEP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E61B560)
#define IBPDPCOGDEP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E61B220)
#define IBPDPCOGDEP_KLDCODGDPIJ_OFFSET UNITYSDK_OFFSET(0x1E61B340)
#define IBPDPCOGDEP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E61B820)
#define IBPDPCOGDEP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E61B7E0)
#define IBPDPCOGDEP_NKCJKENMKCN_OFFSET UNITYSDK_OFFSET(0x1E61B350)
#define IBPDPCOGDEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E61B280)
#define IBPDPCOGDEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E61B590)
#define IBPDPCOGDEP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E61B5F0)

inline static constexpr unsigned int IBPDPCOGDEP_TypeDefinitionIndex = 29239;

	class IBPDPCOGDEP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AIPELNGAHCE; // 0x18
		::System::UInt32 NPFBAFODCBI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IBPDPCOGDEP")->GetStaticField(0x267E0);
		}

		// static const ::System::Object JPCDGJNFGDI; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPDPCOGDEP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBPDPCOGDEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBPDPCOGDEP*))((::PBYTE)hIl2Cpp + IBPDPCOGDEP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBPDPCOGDEP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IBPDPCOGDEP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPDPCOGDEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBPDPCOGDEP* Clone()
		{
			return ((::IBPDPCOGDEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPDPCOGDEP_CLONE_OFFSET))(this);
		}

		::System::UInt32 KLDCODGDPIJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPDPCOGDEP_KLDCODGDPIJ_OFFSET))(this);
		}

		::System::Void NKCJKENMKCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBPDPCOGDEP_NKCJKENMKCN_OFFSET))(this, a1);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPDPCOGDEP_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBPDPCOGDEP_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBPDPCOGDEP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBPDPCOGDEP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBPDPCOGDEP*))((::PBYTE)hIl2Cpp + IBPDPCOGDEP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPDPCOGDEP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPDPCOGDEP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBPDPCOGDEP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPDPCOGDEP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBPDPCOGDEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBPDPCOGDEP*))((::PBYTE)hIl2Cpp + IBPDPCOGDEP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBPDPCOGDEP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
