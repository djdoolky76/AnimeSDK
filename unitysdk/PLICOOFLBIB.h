#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLICOOFLBIB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLICOOFLBIB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF74840)
#define PLICOOFLBIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF74A60)
#define PLICOOFLBIB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF74430)
#define PLICOOFLBIB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF74400)
#define PLICOOFLBIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF743F0)
#define PLICOOFLBIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF745C0)
#define PLICOOFLBIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF744C0)
#define PLICOOFLBIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF74730)
#define PLICOOFLBIB_GJAHHJPLKII_OFFSET UNITYSDK_OFFSET(0x1DF744B0)
#define PLICOOFLBIB_GLFKMHKKEHM_OFFSET UNITYSDK_OFFSET(0x1DF744A0)
#define PLICOOFLBIB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF74380)
#define PLICOOFLBIB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF74900)
#define PLICOOFLBIB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF748D0)
#define PLICOOFLBIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF743E0)
#define PLICOOFLBIB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF74760)
#define PLICOOFLBIB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF747C0)

inline static constexpr unsigned int PLICOOFLBIB_TypeDefinitionIndex = 31280;

	class PLICOOFLBIB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GDPGCPKEFKH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PLICOOFLBIB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PLICOOFLBIB*>**)UnitySDK::FromName("", "PLICOOFLBIB")->GetStaticField(0x3D0A0);
		}

		// static const ::System::Object JIPLGBKNGHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLICOOFLBIB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLICOOFLBIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLICOOFLBIB*))((::PBYTE)hIl2Cpp + PLICOOFLBIB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLICOOFLBIB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PLICOOFLBIB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PLICOOFLBIB*>*(*)())((::PBYTE)hIl2Cpp + PLICOOFLBIB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLICOOFLBIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLICOOFLBIB* Clone()
		{
			return ((::PLICOOFLBIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLICOOFLBIB_CLONE_OFFSET))(this);
		}

		::System::UInt32 GLFKMHKKEHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLICOOFLBIB_GLFKMHKKEHM_OFFSET))(this);
		}

		::System::Void GJAHHJPLKII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLICOOFLBIB_GJAHHJPLKII_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLICOOFLBIB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLICOOFLBIB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLICOOFLBIB*))((::PBYTE)hIl2Cpp + PLICOOFLBIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLICOOFLBIB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLICOOFLBIB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLICOOFLBIB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLICOOFLBIB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLICOOFLBIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLICOOFLBIB*))((::PBYTE)hIl2Cpp + PLICOOFLBIB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLICOOFLBIB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
