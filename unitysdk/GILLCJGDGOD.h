#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECLGDFGGOFH;
class GILLCJGDGOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GILLCJGDGOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E49F7E0)
#define GILLCJGDGOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E49FA50)
#define GILLCJGDGOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E49F1A0)
#define GILLCJGDGOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E49F120)
#define GILLCJGDGOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E49F110)
#define GILLCJGDGOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E49F3C0)
#define GILLCJGDGOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E49F250)
#define GILLCJGDGOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E49F690)
#define GILLCJGDGOD_GOJDLIFIDDI_OFFSET UNITYSDK_OFFSET(0x1E49F230)
#define GILLCJGDGOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E49F0D0)
#define GILLCJGDGOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E49F8D0)
#define GILLCJGDGOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E49F840)
#define GILLCJGDGOD_PAJHHGBCDIA_OFFSET UNITYSDK_OFFSET(0x1E49F240)
#define GILLCJGDGOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E49F100)
#define GILLCJGDGOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E49F6F0)
#define GILLCJGDGOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E49F750)

inline static constexpr unsigned int GILLCJGDGOD_TypeDefinitionIndex = 32356;

	class GILLCJGDGOD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ECLGDFGGOFH* CCJHICNGJAG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GILLCJGDGOD")->GetStaticField(0x1A570);
		}

		// static const ::System::Object LGEBAMBLNOF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GILLCJGDGOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GILLCJGDGOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GILLCJGDGOD*))((::PBYTE)hIl2Cpp + GILLCJGDGOD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GILLCJGDGOD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GILLCJGDGOD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILLCJGDGOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GILLCJGDGOD* Clone()
		{
			return ((::GILLCJGDGOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILLCJGDGOD_CLONE_OFFSET))(this);
		}

		::ECLGDFGGOFH* GOJDLIFIDDI()
		{
			return ((::ECLGDFGGOFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILLCJGDGOD_GOJDLIFIDDI_OFFSET))(this);
		}

		::System::Void PAJHHGBCDIA(::ECLGDFGGOFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECLGDFGGOFH*))((::PBYTE)hIl2Cpp + GILLCJGDGOD_PAJHHGBCDIA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GILLCJGDGOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GILLCJGDGOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GILLCJGDGOD*))((::PBYTE)hIl2Cpp + GILLCJGDGOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GILLCJGDGOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILLCJGDGOD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GILLCJGDGOD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GILLCJGDGOD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GILLCJGDGOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GILLCJGDGOD*))((::PBYTE)hIl2Cpp + GILLCJGDGOD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GILLCJGDGOD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
