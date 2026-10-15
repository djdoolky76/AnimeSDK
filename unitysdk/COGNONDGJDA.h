#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COGNONDGJDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define COGNONDGJDA_BLEBJLONOPH_OFFSET UNITYSDK_OFFSET(0x1E1338E0)
#define COGNONDGJDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E133C40)
#define COGNONDGJDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E133E60)
#define COGNONDGJDA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E133890)
#define COGNONDGJDA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E133860)
#define COGNONDGJDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E133850)
#define COGNONDGJDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1339C0)
#define COGNONDGJDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1338F0)
#define COGNONDGJDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E133B30)
#define COGNONDGJDA_IMKJOEPMOGI_OFFSET UNITYSDK_OFFSET(0x1E1338D0)
#define COGNONDGJDA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E133810)
#define COGNONDGJDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E133D00)
#define COGNONDGJDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E133CD0)
#define COGNONDGJDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E133840)
#define COGNONDGJDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E133B60)
#define COGNONDGJDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E133BC0)

inline static constexpr unsigned int COGNONDGJDA_TypeDefinitionIndex = 34262;

	class COGNONDGJDA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GBCDKKIIKCE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "COGNONDGJDA")->GetStaticField(0x214C0);
		}

		// static const ::System::Object AAKLFHKNIHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COGNONDGJDA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::COGNONDGJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COGNONDGJDA*))((::PBYTE)hIl2Cpp + COGNONDGJDA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COGNONDGJDA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + COGNONDGJDA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + COGNONDGJDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::COGNONDGJDA* Clone()
		{
			return ((::COGNONDGJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + COGNONDGJDA_CLONE_OFFSET))(this);
		}

		::System::UInt32 IMKJOEPMOGI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + COGNONDGJDA_IMKJOEPMOGI_OFFSET))(this);
		}

		::System::Void BLEBJLONOPH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + COGNONDGJDA_BLEBJLONOPH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COGNONDGJDA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::COGNONDGJDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::COGNONDGJDA*))((::PBYTE)hIl2Cpp + COGNONDGJDA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COGNONDGJDA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COGNONDGJDA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + COGNONDGJDA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COGNONDGJDA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::COGNONDGJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COGNONDGJDA*))((::PBYTE)hIl2Cpp + COGNONDGJDA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + COGNONDGJDA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
