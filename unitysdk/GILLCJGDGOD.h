#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECLGDFGGOFH;
class GILLCJGDGOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GILLCJGDGOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F791980)
#define GILLCJGDGOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F791BF0)
#define GILLCJGDGOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F791340)
#define GILLCJGDGOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7912C0)
#define GILLCJGDGOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7912B0)
#define GILLCJGDGOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F791560)
#define GILLCJGDGOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7913F0)
#define GILLCJGDGOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F791830)
#define GILLCJGDGOD_GOJDLIFIDDI_OFFSET UNITYSDK_OFFSET(0x1F7913D0)
#define GILLCJGDGOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F791270)
#define GILLCJGDGOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F791A70)
#define GILLCJGDGOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F7919E0)
#define GILLCJGDGOD_PAJHHGBCDIA_OFFSET UNITYSDK_OFFSET(0x1F7913E0)
#define GILLCJGDGOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F7912A0)
#define GILLCJGDGOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F791890)
#define GILLCJGDGOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7918F0)

inline static constexpr unsigned int GILLCJGDGOD_TypeDefinitionIndex = 33269;

	class GILLCJGDGOD : public ::System::Object
	{
	public:
		::ECLGDFGGOFH* CCJHICNGJAG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GILLCJGDGOD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GILLCJGDGOD*>**)UnitySDK::FromName("", "GILLCJGDGOD")->GetStaticField(0x11FE0);
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

		static ::Google::Protobuf::MessageParser_1<::GILLCJGDGOD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GILLCJGDGOD*>*(*)())((::PBYTE)hIl2Cpp + GILLCJGDGOD_JJGHOBBFNJD_OFFSET))();
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
