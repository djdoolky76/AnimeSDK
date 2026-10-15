#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGODFDFPEI;
class FJKGDHKKDFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FJKGDHKKDFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E378C70)
#define FJKGDHKKDFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E378F50)
#define FJKGDHKKDFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E378850)
#define FJKGDHKKDFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3787C0)
#define FJKGDHKKDFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E378780)
#define FJKGDHKKDFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3789D0)
#define FJKGDHKKDFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E378890)
#define FJKGDHKKDFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E378AF0)
#define FJKGDHKKDFF_HCPALAIMDLN_OFFSET UNITYSDK_OFFSET(0x1E378880)
#define FJKGDHKKDFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E378740)
#define FJKGDHKKDFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E378DB0)
#define FJKGDHKKDFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E378D10)
#define FJKGDHKKDFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E378770)
#define FJKGDHKKDFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E378B60)
#define FJKGDHKKDFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E378BC0)

inline static constexpr unsigned int FJKGDHKKDFF_TypeDefinitionIndex = 27307;

	class FJKGDHKKDFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::DMGODFDFPEI*>* GAMJBFEJNKO; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::DMGODFDFPEI*>** StaticGet_EDDGMFGPKNK()
		{
			return (::Google::Protobuf::FieldCodec_1<::DMGODFDFPEI*>**)UnitySDK::FromName("", "FJKGDHKKDFF")->GetStaticField(0x59FC0);
		}

		static ::Google::Protobuf::MessageParser_1<::FJKGDHKKDFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FJKGDHKKDFF*>**)UnitySDK::FromName("", "FJKGDHKKDFF")->GetStaticField(0x59FC8);
		}

		// static const ::System::Object OLAKELFAJBA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKGDHKKDFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FJKGDHKKDFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJKGDHKKDFF*))((::PBYTE)hIl2Cpp + FJKGDHKKDFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJKGDHKKDFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FJKGDHKKDFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FJKGDHKKDFF*>*(*)())((::PBYTE)hIl2Cpp + FJKGDHKKDFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKGDHKKDFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FJKGDHKKDFF* Clone()
		{
			return ((::FJKGDHKKDFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKGDHKKDFF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DMGODFDFPEI*>* HCPALAIMDLN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DMGODFDFPEI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKGDHKKDFF_HCPALAIMDLN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJKGDHKKDFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FJKGDHKKDFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJKGDHKKDFF*))((::PBYTE)hIl2Cpp + FJKGDHKKDFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKGDHKKDFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKGDHKKDFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FJKGDHKKDFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKGDHKKDFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FJKGDHKKDFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJKGDHKKDFF*))((::PBYTE)hIl2Cpp + FJKGDHKKDFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FJKGDHKKDFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
