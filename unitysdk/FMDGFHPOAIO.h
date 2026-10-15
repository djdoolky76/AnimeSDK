#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMDGFHPOAIO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FMDGFHPOAIO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3E06C0)
#define FMDGFHPOAIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E0990)
#define FMDGFHPOAIO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3E0310)
#define FMDGFHPOAIO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3E02E0)
#define FMDGFHPOAIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E02D0)
#define FMDGFHPOAIO_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E3E0360)
#define FMDGFHPOAIO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3E0480)
#define FMDGFHPOAIO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3E03A0)
#define FMDGFHPOAIO_FCIACLFENJO_OFFSET UNITYSDK_OFFSET(0x1E3E0380)
#define FMDGFHPOAIO_FEBHCCBIDOA_OFFSET UNITYSDK_OFFSET(0x1E3E0390)
#define FMDGFHPOAIO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3E0550)
#define FMDGFHPOAIO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3E0290)
#define FMDGFHPOAIO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3E0810)
#define FMDGFHPOAIO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3E07D0)
#define FMDGFHPOAIO_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E3E0370)
#define FMDGFHPOAIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3E02C0)
#define FMDGFHPOAIO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3E0580)
#define FMDGFHPOAIO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3E05E0)

inline static constexpr unsigned int FMDGFHPOAIO_TypeDefinitionIndex = 26593;

	class FMDGFHPOAIO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GKOHBFHOFKN; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FMDGFHPOAIO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FMDGFHPOAIO*>**)UnitySDK::FromName("", "FMDGFHPOAIO")->GetStaticField(0x649F0);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object OOGFOPMFOHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDGFHPOAIO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FMDGFHPOAIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMDGFHPOAIO*))((::PBYTE)hIl2Cpp + FMDGFHPOAIO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMDGFHPOAIO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FMDGFHPOAIO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FMDGFHPOAIO*>*(*)())((::PBYTE)hIl2Cpp + FMDGFHPOAIO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDGFHPOAIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FMDGFHPOAIO* Clone()
		{
			return ((::FMDGFHPOAIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDGFHPOAIO_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDGFHPOAIO_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMDGFHPOAIO_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 FCIACLFENJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDGFHPOAIO_FCIACLFENJO_OFFSET))(this);
		}

		::System::Void FEBHCCBIDOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMDGFHPOAIO_FEBHCCBIDOA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMDGFHPOAIO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FMDGFHPOAIO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMDGFHPOAIO*))((::PBYTE)hIl2Cpp + FMDGFHPOAIO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDGFHPOAIO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDGFHPOAIO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FMDGFHPOAIO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDGFHPOAIO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FMDGFHPOAIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMDGFHPOAIO*))((::PBYTE)hIl2Cpp + FMDGFHPOAIO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FMDGFHPOAIO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
