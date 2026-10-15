#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNDMMMHDGIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NNDMMMHDGIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB80E90)
#define NNDMMMHDGIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB810B0)
#define NNDMMMHDGIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB80A80)
#define NNDMMMHDGIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB80A50)
#define NNDMMMHDGIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB80A40)
#define NNDMMMHDGIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB80C10)
#define NNDMMMHDGIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB80B10)
#define NNDMMMHDGIH_FKOAKEAIONC_OFFSET UNITYSDK_OFFSET(0x1EB80B00)
#define NNDMMMHDGIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB80D80)
#define NNDMMMHDGIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB809D0)
#define NNDMMMHDGIH_JOJBKFBPCNP_OFFSET UNITYSDK_OFFSET(0x1EB80AF0)
#define NNDMMMHDGIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB80F50)
#define NNDMMMHDGIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB80F20)
#define NNDMMMHDGIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB80A30)
#define NNDMMMHDGIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB80DB0)
#define NNDMMMHDGIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB80E10)

inline static constexpr unsigned int NNDMMMHDGIH_TypeDefinitionIndex = 28625;

	class NNDMMMHDGIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBDEKDEJDCP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NNDMMMHDGIH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NNDMMMHDGIH*>**)UnitySDK::FromName("", "NNDMMMHDGIH")->GetStaticField(0x2AC0);
		}

		// static const ::System::Object CHIJOPBIANF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDMMMHDGIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NNDMMMHDGIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNDMMMHDGIH*))((::PBYTE)hIl2Cpp + NNDMMMHDGIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNDMMMHDGIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NNDMMMHDGIH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NNDMMMHDGIH*>*(*)())((::PBYTE)hIl2Cpp + NNDMMMHDGIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDMMMHDGIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NNDMMMHDGIH* Clone()
		{
			return ((::NNDMMMHDGIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDMMMHDGIH_CLONE_OFFSET))(this);
		}

		::System::UInt32 JOJBKFBPCNP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDMMMHDGIH_JOJBKFBPCNP_OFFSET))(this);
		}

		::System::Void FKOAKEAIONC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNDMMMHDGIH_FKOAKEAIONC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNDMMMHDGIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NNDMMMHDGIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNDMMMHDGIH*))((::PBYTE)hIl2Cpp + NNDMMMHDGIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDMMMHDGIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDMMMHDGIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NNDMMMHDGIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNDMMMHDGIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NNDMMMHDGIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNDMMMHDGIH*))((::PBYTE)hIl2Cpp + NNDMMMHDGIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NNDMMMHDGIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
