#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHAAGBGAHLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHAAGBGAHLO_BBEBAALLANG_OFFSET UNITYSDK_OFFSET(0x1E357120)
#define FHAAGBGAHLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3574C0)
#define FHAAGBGAHLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3576E0)
#define FHAAGBGAHLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3570B0)
#define FHAAGBGAHLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E357080)
#define FHAAGBGAHLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E357070)
#define FHAAGBGAHLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E357240)
#define FHAAGBGAHLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E357140)
#define FHAAGBGAHLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3573B0)
#define FHAAGBGAHLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E357000)
#define FHAAGBGAHLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E357580)
#define FHAAGBGAHLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E357550)
#define FHAAGBGAHLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E357060)
#define FHAAGBGAHLO_PDBBNGDOAEF_OFFSET UNITYSDK_OFFSET(0x1E357130)
#define FHAAGBGAHLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3573E0)
#define FHAAGBGAHLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E357440)

inline static constexpr unsigned int FHAAGBGAHLO_TypeDefinitionIndex = 33346;

	class FHAAGBGAHLO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DLNPHJIJIDP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FHAAGBGAHLO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FHAAGBGAHLO*>**)UnitySDK::FromName("", "FHAAGBGAHLO")->GetStaticField(0x55F80);
		}

		// static const ::System::Object PMBKEOGJMMN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAAGBGAHLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHAAGBGAHLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHAAGBGAHLO*))((::PBYTE)hIl2Cpp + FHAAGBGAHLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHAAGBGAHLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FHAAGBGAHLO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FHAAGBGAHLO*>*(*)())((::PBYTE)hIl2Cpp + FHAAGBGAHLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAAGBGAHLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHAAGBGAHLO* Clone()
		{
			return ((::FHAAGBGAHLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAAGBGAHLO_CLONE_OFFSET))(this);
		}

		::System::UInt32 BBEBAALLANG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAAGBGAHLO_BBEBAALLANG_OFFSET))(this);
		}

		::System::Void PDBBNGDOAEF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHAAGBGAHLO_PDBBNGDOAEF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHAAGBGAHLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHAAGBGAHLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHAAGBGAHLO*))((::PBYTE)hIl2Cpp + FHAAGBGAHLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAAGBGAHLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAAGBGAHLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHAAGBGAHLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAAGBGAHLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHAAGBGAHLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHAAGBGAHLO*))((::PBYTE)hIl2Cpp + FHAAGBGAHLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHAAGBGAHLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
