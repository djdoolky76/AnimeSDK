#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODHJEDHKHOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ODHJEDHKHOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB4E690)
#define ODHJEDHKHOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB4E8B0)
#define ODHJEDHKHOD_CLLMMOCKCNH_OFFSET UNITYSDK_OFFSET(0x1FB4E190)
#define ODHJEDHKHOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB4E160)
#define ODHJEDHKHOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB4E070)
#define ODHJEDHKHOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4DFE0)
#define ODHJEDHKHOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB4E2C0)
#define ODHJEDHKHOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB4E1B0)
#define ODHJEDHKHOD_FIBECNCHPIA_OFFSET UNITYSDK_OFFSET(0x1FB4E1A0)
#define ODHJEDHKHOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB4E3D0)
#define ODHJEDHKHOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB4DFA0)
#define ODHJEDHKHOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB4E780)
#define ODHJEDHKHOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB4E720)
#define ODHJEDHKHOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB4DFD0)
#define ODHJEDHKHOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB4E590)
#define ODHJEDHKHOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB4E5F0)

inline static constexpr unsigned int ODHJEDHKHOD_TypeDefinitionIndex = 34036;

	class ODHJEDHKHOD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ADLKDPBKIBN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PEKKHCNPJLN; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EJEPLCLKMCP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ODHJEDHKHOD")->GetStaticField(0xE1B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EHJOPINPJKB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ODHJEDHKHOD")->GetStaticField(0xE1B8);
		}

		static ::Google::Protobuf::MessageParser_1<::ODHJEDHKHOD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ODHJEDHKHOD*>**)UnitySDK::FromName("", "ODHJEDHKHOD")->GetStaticField(0xE1C0);
		}

		// static const ::System::Object KEKJCHEOLGH; // 0x0
		// static const ::System::Object GOBGIOLHCMG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHJEDHKHOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ODHJEDHKHOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODHJEDHKHOD*))((::PBYTE)hIl2Cpp + ODHJEDHKHOD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODHJEDHKHOD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ODHJEDHKHOD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ODHJEDHKHOD*>*(*)())((::PBYTE)hIl2Cpp + ODHJEDHKHOD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHJEDHKHOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ODHJEDHKHOD* Clone()
		{
			return ((::ODHJEDHKHOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHJEDHKHOD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CLLMMOCKCNH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHJEDHKHOD_CLLMMOCKCNH_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FIBECNCHPIA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHJEDHKHOD_FIBECNCHPIA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODHJEDHKHOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ODHJEDHKHOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ODHJEDHKHOD*))((::PBYTE)hIl2Cpp + ODHJEDHKHOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHJEDHKHOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHJEDHKHOD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ODHJEDHKHOD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHJEDHKHOD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ODHJEDHKHOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODHJEDHKHOD*))((::PBYTE)hIl2Cpp + ODHJEDHKHOD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ODHJEDHKHOD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
