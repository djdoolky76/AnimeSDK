#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPELDFBCCEK;
class POIBJKBDLLI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define POIBJKBDLLI_ABODPBNAIPF_OFFSET UNITYSDK_OFFSET(0x1DF9E7F0)
#define POIBJKBDLLI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF9EBE0)
#define POIBJKBDLLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF9EEE0)
#define POIBJKBDLLI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF9E7C0)
#define POIBJKBDLLI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF9E710)
#define POIBJKBDLLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF9E6C0)
#define POIBJKBDLLI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF9E940)
#define POIBJKBDLLI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF9E800)
#define POIBJKBDLLI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF9EA60)
#define POIBJKBDLLI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF9E680)
#define POIBJKBDLLI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF9ED20)
#define POIBJKBDLLI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF9EC80)
#define POIBJKBDLLI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF9E6B0)
#define POIBJKBDLLI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF9EAD0)
#define POIBJKBDLLI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF9EB30)

inline static constexpr unsigned int POIBJKBDLLI_TypeDefinitionIndex = 29605;

	class POIBJKBDLLI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EPELDFBCCEK*>* HNOHLICGPHA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::POIBJKBDLLI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::POIBJKBDLLI*>**)UnitySDK::FromName("", "POIBJKBDLLI")->GetStaticField(0x451A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::EPELDFBCCEK*>** StaticGet_DJOHKGDMAKK()
		{
			return (::Google::Protobuf::FieldCodec_1<::EPELDFBCCEK*>**)UnitySDK::FromName("", "POIBJKBDLLI")->GetStaticField(0x451A8);
		}

		// static const ::System::Object IDNLMNIDIAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIBJKBDLLI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::POIBJKBDLLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POIBJKBDLLI*))((::PBYTE)hIl2Cpp + POIBJKBDLLI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POIBJKBDLLI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::POIBJKBDLLI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::POIBJKBDLLI*>*(*)())((::PBYTE)hIl2Cpp + POIBJKBDLLI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + POIBJKBDLLI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::POIBJKBDLLI* Clone()
		{
			return ((::POIBJKBDLLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + POIBJKBDLLI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EPELDFBCCEK*>* ABODPBNAIPF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EPELDFBCCEK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POIBJKBDLLI_ABODPBNAIPF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POIBJKBDLLI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::POIBJKBDLLI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POIBJKBDLLI*))((::PBYTE)hIl2Cpp + POIBJKBDLLI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POIBJKBDLLI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POIBJKBDLLI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + POIBJKBDLLI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POIBJKBDLLI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::POIBJKBDLLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POIBJKBDLLI*))((::PBYTE)hIl2Cpp + POIBJKBDLLI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + POIBJKBDLLI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
