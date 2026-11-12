#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFDAIBDBFEA;
class OEDNNHAOHAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEDNNHAOHAB_AFFFMINNBPK_OFFSET UNITYSDK_OFFSET(0x1F0CAF40)
#define OEDNNHAOHAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F0CB370)
#define OEDNNHAOHAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0CB670)
#define OEDNNHAOHAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F0CAEF0)
#define OEDNNHAOHAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0CAE40)
#define OEDNNHAOHAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0CADF0)
#define OEDNNHAOHAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F0CB0D0)
#define OEDNNHAOHAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0CAF50)
#define OEDNNHAOHAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F0CB1F0)
#define OEDNNHAOHAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F0CAD80)
#define OEDNNHAOHAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F0CB4B0)
#define OEDNNHAOHAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F0CB410)
#define OEDNNHAOHAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F0CADE0)
#define OEDNNHAOHAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0CB260)
#define OEDNNHAOHAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F0CB2C0)

inline static constexpr unsigned int OEDNNHAOHAB_TypeDefinitionIndex = 33565;

	class OEDNNHAOHAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EFDAIBDBFEA*>* JDLFCGELGAK; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::EFDAIBDBFEA*>** StaticGet_GFDIPJMHIPE()
		{
			return (::Google::Protobuf::FieldCodec_1<::EFDAIBDBFEA*>**)UnitySDK::FromName("", "OEDNNHAOHAB")->GetStaticField(0xF500);
		}

		static ::Google::Protobuf::MessageParser_1<::OEDNNHAOHAB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OEDNNHAOHAB*>**)UnitySDK::FromName("", "OEDNNHAOHAB")->GetStaticField(0xF508);
		}

		// static const ::System::Object DDKAMGMEGCN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDNNHAOHAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEDNNHAOHAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEDNNHAOHAB*))((::PBYTE)hIl2Cpp + OEDNNHAOHAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEDNNHAOHAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OEDNNHAOHAB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OEDNNHAOHAB*>*(*)())((::PBYTE)hIl2Cpp + OEDNNHAOHAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDNNHAOHAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEDNNHAOHAB* Clone()
		{
			return ((::OEDNNHAOHAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDNNHAOHAB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EFDAIBDBFEA*>* AFFFMINNBPK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EFDAIBDBFEA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDNNHAOHAB_AFFFMINNBPK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEDNNHAOHAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEDNNHAOHAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEDNNHAOHAB*))((::PBYTE)hIl2Cpp + OEDNNHAOHAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDNNHAOHAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDNNHAOHAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEDNNHAOHAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDNNHAOHAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEDNNHAOHAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEDNNHAOHAB*))((::PBYTE)hIl2Cpp + OEDNNHAOHAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEDNNHAOHAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
