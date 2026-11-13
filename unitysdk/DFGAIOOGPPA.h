#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFGAIOOGPPA;
class FDBDLBAPDBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFGAIOOGPPA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FFB5280)
#define DFGAIOOGPPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFB55A0)
#define DFGAIOOGPPA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FFB4CF0)
#define DFGAIOOGPPA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FFB4C80)
#define DFGAIOOGPPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFB4C70)
#define DFGAIOOGPPA_DMFIDAEKODG_OFFSET UNITYSDK_OFFSET(0x1FFB4D70)
#define DFGAIOOGPPA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FFB4F30)
#define DFGAIOOGPPA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FFB4DB0)
#define DFGAIOOGPPA_FEMPHDFBFOC_OFFSET UNITYSDK_OFFSET(0x1FFB4D80)
#define DFGAIOOGPPA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FFB50B0)
#define DFGAIOOGPPA_GHEIAEAOKAC_OFFSET UNITYSDK_OFFSET(0x1FFB4DA0)
#define DFGAIOOGPPA_IGJOIMKFBNG_OFFSET UNITYSDK_OFFSET(0x1FFB4D90)
#define DFGAIOOGPPA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FFB4C30)
#define DFGAIOOGPPA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FFB53E0)
#define DFGAIOOGPPA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FFB5350)
#define DFGAIOOGPPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FFB4C60)
#define DFGAIOOGPPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FFB5140)
#define DFGAIOOGPPA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FFB51A0)

inline static constexpr unsigned int DFGAIOOGPPA_TypeDefinitionIndex = 34492;

	class DFGAIOOGPPA : public ::System::Object
	{
	public:
		::FDBDLBAPDBE* GMLPGJJJKDP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 CNMDEMCDIOG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DFGAIOOGPPA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DFGAIOOGPPA*>**)UnitySDK::FromName("", "DFGAIOOGPPA")->GetStaticField(0x28850);
		}

		// static const ::System::Object BFJJFFNKIBO; // 0x0
		// static const ::System::Object KIAJFAMLJEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGAIOOGPPA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFGAIOOGPPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFGAIOOGPPA*))((::PBYTE)hIl2Cpp + DFGAIOOGPPA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFGAIOOGPPA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DFGAIOOGPPA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DFGAIOOGPPA*>*(*)())((::PBYTE)hIl2Cpp + DFGAIOOGPPA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGAIOOGPPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFGAIOOGPPA* Clone()
		{
			return ((::DFGAIOOGPPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGAIOOGPPA_CLONE_OFFSET))(this);
		}

		::System::UInt32 DMFIDAEKODG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGAIOOGPPA_DMFIDAEKODG_OFFSET))(this);
		}

		::System::Void FEMPHDFBFOC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFGAIOOGPPA_FEMPHDFBFOC_OFFSET))(this, a1);
		}

		::FDBDLBAPDBE* IGJOIMKFBNG()
		{
			return ((::FDBDLBAPDBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGAIOOGPPA_IGJOIMKFBNG_OFFSET))(this);
		}

		::System::Void GHEIAEAOKAC(::FDBDLBAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDBDLBAPDBE*))((::PBYTE)hIl2Cpp + DFGAIOOGPPA_GHEIAEAOKAC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFGAIOOGPPA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFGAIOOGPPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFGAIOOGPPA*))((::PBYTE)hIl2Cpp + DFGAIOOGPPA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGAIOOGPPA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGAIOOGPPA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFGAIOOGPPA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGAIOOGPPA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFGAIOOGPPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFGAIOOGPPA*))((::PBYTE)hIl2Cpp + DFGAIOOGPPA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFGAIOOGPPA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
