#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNNBOBGFAKH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FNNBOBGFAKH_ABMCOINEEFF_OFFSET UNITYSDK_OFFSET(0x1E3F42E0)
#define FNNBOBGFAKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3F4610)
#define FNNBOBGFAKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F48E0)
#define FNNBOBGFAKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3F4260)
#define FNNBOBGFAKH_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E3F42B0)
#define FNNBOBGFAKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3F4230)
#define FNNBOBGFAKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F4220)
#define FNNBOBGFAKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3F43D0)
#define FNNBOBGFAKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3F42F0)
#define FNNBOBGFAKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3F44A0)
#define FNNBOBGFAKH_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E3F42C0)
#define FNNBOBGFAKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3F41E0)
#define FNNBOBGFAKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3F4760)
#define FNNBOBGFAKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3F4720)
#define FNNBOBGFAKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3F4210)
#define FNNBOBGFAKH_PIBPAKNAJPJ_OFFSET UNITYSDK_OFFSET(0x1E3F42D0)
#define FNNBOBGFAKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3F44D0)
#define FNNBOBGFAKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3F4530)

inline static constexpr unsigned int FNNBOBGFAKH_TypeDefinitionIndex = 30769;

	class FNNBOBGFAKH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OLHOKKOJDCO; // 0x18
		::System::UInt32 KJAENGKDFJD; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FNNBOBGFAKH")->GetStaticField(0x65870);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object HHAFBFIMNML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNBOBGFAKH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FNNBOBGFAKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNNBOBGFAKH*))((::PBYTE)hIl2Cpp + FNNBOBGFAKH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNNBOBGFAKH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FNNBOBGFAKH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNBOBGFAKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FNNBOBGFAKH* Clone()
		{
			return ((::FNNBOBGFAKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNBOBGFAKH_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNBOBGFAKH_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNNBOBGFAKH_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 PIBPAKNAJPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNBOBGFAKH_PIBPAKNAJPJ_OFFSET))(this);
		}

		::System::Void ABMCOINEEFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNNBOBGFAKH_ABMCOINEEFF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNNBOBGFAKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FNNBOBGFAKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNNBOBGFAKH*))((::PBYTE)hIl2Cpp + FNNBOBGFAKH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNBOBGFAKH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNBOBGFAKH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FNNBOBGFAKH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNBOBGFAKH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FNNBOBGFAKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNNBOBGFAKH*))((::PBYTE)hIl2Cpp + FNNBOBGFAKH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FNNBOBGFAKH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
