#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNIDNGOGAFF;
class JPIEAEJIDAO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPIEAEJIDAO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7A83A0)
#define JPIEAEJIDAO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A8680)
#define JPIEAEJIDAO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7A7F80)
#define JPIEAEJIDAO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7A7EF0)
#define JPIEAEJIDAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A7EB0)
#define JPIEAEJIDAO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7A8100)
#define JPIEAEJIDAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7A7FC0)
#define JPIEAEJIDAO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7A8220)
#define JPIEAEJIDAO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7A7E70)
#define JPIEAEJIDAO_JOHELGBDCHM_OFFSET UNITYSDK_OFFSET(0x1E7A7FB0)
#define JPIEAEJIDAO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7A84E0)
#define JPIEAEJIDAO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7A8440)
#define JPIEAEJIDAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7A7EA0)
#define JPIEAEJIDAO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7A8290)
#define JPIEAEJIDAO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7A82F0)

inline static constexpr unsigned int JPIEAEJIDAO_TypeDefinitionIndex = 30301;

	class JPIEAEJIDAO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FNIDNGOGAFF*>* CNDLBHJEFAH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JPIEAEJIDAO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JPIEAEJIDAO*>**)UnitySDK::FromName("", "JPIEAEJIDAO")->GetStaticField(0x3160);
		}

		static ::Google::Protobuf::FieldCodec_1<::FNIDNGOGAFF*>** StaticGet_JKFGPLLLILH()
		{
			return (::Google::Protobuf::FieldCodec_1<::FNIDNGOGAFF*>**)UnitySDK::FromName("", "JPIEAEJIDAO")->GetStaticField(0x3168);
		}

		// static const ::System::Object ALFPNNPDKJM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIEAEJIDAO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JPIEAEJIDAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPIEAEJIDAO*))((::PBYTE)hIl2Cpp + JPIEAEJIDAO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPIEAEJIDAO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JPIEAEJIDAO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JPIEAEJIDAO*>*(*)())((::PBYTE)hIl2Cpp + JPIEAEJIDAO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIEAEJIDAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JPIEAEJIDAO* Clone()
		{
			return ((::JPIEAEJIDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIEAEJIDAO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FNIDNGOGAFF*>* JOHELGBDCHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FNIDNGOGAFF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIEAEJIDAO_JOHELGBDCHM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPIEAEJIDAO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JPIEAEJIDAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPIEAEJIDAO*))((::PBYTE)hIl2Cpp + JPIEAEJIDAO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIEAEJIDAO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIEAEJIDAO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JPIEAEJIDAO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIEAEJIDAO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JPIEAEJIDAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPIEAEJIDAO*))((::PBYTE)hIl2Cpp + JPIEAEJIDAO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JPIEAEJIDAO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
