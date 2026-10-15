#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAKMBJPPIIB;
class PJBODOPJFGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FAKMBJPPIIB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E328490)
#define FAKMBJPPIIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E328770)
#define FAKMBJPPIIB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E328070)
#define FAKMBJPPIIB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E327FE0)
#define FAKMBJPPIIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E327FA0)
#define FAKMBJPPIIB_EBKHBLMOPAD_OFFSET UNITYSDK_OFFSET(0x1E3280A0)
#define FAKMBJPPIIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3281F0)
#define FAKMBJPPIIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3280B0)
#define FAKMBJPPIIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E328310)
#define FAKMBJPPIIB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E327F60)
#define FAKMBJPPIIB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3285D0)
#define FAKMBJPPIIB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E328530)
#define FAKMBJPPIIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E327F90)
#define FAKMBJPPIIB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E328380)
#define FAKMBJPPIIB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3283E0)

inline static constexpr unsigned int FAKMBJPPIIB_TypeDefinitionIndex = 27463;

	class FAKMBJPPIIB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PJBODOPJFGA*>* NAJGODJDFLB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FAKMBJPPIIB")->GetStaticField(0x58420);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GMNOJOCHGMM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FAKMBJPPIIB")->GetStaticField(0x58428);
		}

		// static const ::System::Object FOPDAOKLCOJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKMBJPPIIB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FAKMBJPPIIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAKMBJPPIIB*))((::PBYTE)hIl2Cpp + FAKMBJPPIIB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAKMBJPPIIB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FAKMBJPPIIB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKMBJPPIIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FAKMBJPPIIB* Clone()
		{
			return ((::FAKMBJPPIIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKMBJPPIIB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PJBODOPJFGA*>* EBKHBLMOPAD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PJBODOPJFGA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKMBJPPIIB_EBKHBLMOPAD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAKMBJPPIIB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FAKMBJPPIIB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAKMBJPPIIB*))((::PBYTE)hIl2Cpp + FAKMBJPPIIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKMBJPPIIB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKMBJPPIIB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FAKMBJPPIIB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKMBJPPIIB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FAKMBJPPIIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAKMBJPPIIB*))((::PBYTE)hIl2Cpp + FAKMBJPPIIB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FAKMBJPPIIB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
