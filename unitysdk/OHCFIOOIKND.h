#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOMMAFEOBOA;
class LIONJNJEBBF;
class OHCFIOOIKND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHCFIOOIKND_BFMGOEBAJAN_OFFSET UNITYSDK_OFFSET(0x1F103840)
#define OHCFIOOIKND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F103B20)
#define OHCFIOOIKND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F103E20)
#define OHCFIOOIKND_CLONE_OFFSET UNITYSDK_OFFSET(0x1F0FE2D0)
#define OHCFIOOIKND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F103760)
#define OHCFIOOIKND_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0FEEB0)
#define OHCFIOOIKND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F103880)
#define OHCFIOOIKND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F103850)
#define OHCFIOOIKND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F0FE5A0)
#define OHCFIOOIKND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F103720)
#define OHCFIOOIKND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F103C00)
#define OHCFIOOIKND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F0FEF10)
#define OHCFIOOIKND_MGAFEDOJKPI_OFFSET UNITYSDK_OFFSET(0x1F103830)
#define OHCFIOOIKND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F103750)
#define OHCFIOOIKND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1039D0)
#define OHCFIOOIKND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F103A30)

inline static constexpr unsigned int OHCFIOOIKND_TypeDefinitionIndex = 35478;

	class OHCFIOOIKND : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LIONJNJEBBF*>* HHIINIGIEBP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::AOMMAFEOBOA*>* LHMJOANMJOE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OHCFIOOIKND*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OHCFIOOIKND*>**)UnitySDK::FromName("", "OHCFIOOIKND")->GetStaticField(0x15610);
		}

		static ::Google::Protobuf::FieldCodec_1<::AOMMAFEOBOA*>** StaticGet_AIEJCIMADIH()
		{
			return (::Google::Protobuf::FieldCodec_1<::AOMMAFEOBOA*>**)UnitySDK::FromName("", "OHCFIOOIKND")->GetStaticField(0x15618);
		}

		static ::Google::Protobuf::FieldCodec_1<::LIONJNJEBBF*>** StaticGet_FJGAIHADPJP()
		{
			return (::Google::Protobuf::FieldCodec_1<::LIONJNJEBBF*>**)UnitySDK::FromName("", "OHCFIOOIKND")->GetStaticField(0x15620);
		}

		// static const ::System::Object HEMGBMIBBLK; // 0x0
		// static const ::System::Object HMIOJOGFMKC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHCFIOOIKND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHCFIOOIKND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHCFIOOIKND*))((::PBYTE)hIl2Cpp + OHCFIOOIKND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHCFIOOIKND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OHCFIOOIKND*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OHCFIOOIKND*>*(*)())((::PBYTE)hIl2Cpp + OHCFIOOIKND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHCFIOOIKND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHCFIOOIKND* Clone()
		{
			return ((::OHCFIOOIKND*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHCFIOOIKND_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LIONJNJEBBF*>* MGAFEDOJKPI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LIONJNJEBBF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHCFIOOIKND_MGAFEDOJKPI_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AOMMAFEOBOA*>* BFMGOEBAJAN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AOMMAFEOBOA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHCFIOOIKND_BFMGOEBAJAN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHCFIOOIKND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHCFIOOIKND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHCFIOOIKND*))((::PBYTE)hIl2Cpp + OHCFIOOIKND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHCFIOOIKND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHCFIOOIKND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHCFIOOIKND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHCFIOOIKND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHCFIOOIKND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHCFIOOIKND*))((::PBYTE)hIl2Cpp + OHCFIOOIKND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHCFIOOIKND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
