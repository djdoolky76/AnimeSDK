#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECGBLDGLGFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ECGBLDGLGFL_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E24DEA0)
#define ECGBLDGLGFL_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E24DEB0)
#define ECGBLDGLGFL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E24E2F0)
#define ECGBLDGLGFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E24E5F0)
#define ECGBLDGLGFL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E24DE60)
#define ECGBLDGLGFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E24DDD0)
#define ECGBLDGLGFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E24DD80)
#define ECGBLDGLGFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E24DFC0)
#define ECGBLDGLGFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E24DEC0)
#define ECGBLDGLGFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E24E0B0)
#define ECGBLDGLGFL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E24DD40)
#define ECGBLDGLGFL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E24E430)
#define ECGBLDGLGFL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E24E3E0)
#define ECGBLDGLGFL_NAFHKPHPPGC_OFFSET UNITYSDK_OFFSET(0x1E24DE90)
#define ECGBLDGLGFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E24DD70)
#define ECGBLDGLGFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E24E1B0)
#define ECGBLDGLGFL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E24E210)

inline static constexpr unsigned int ECGBLDGLGFL_TypeDefinitionIndex = 26350;

	class ECGBLDGLGFL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JIHIHBJNILK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KFCFAFEOOML()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ECGBLDGLGFL")->GetStaticField(0x3D830);
		}

		static ::Google::Protobuf::MessageParser_1<::ECGBLDGLGFL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ECGBLDGLGFL*>**)UnitySDK::FromName("", "ECGBLDGLGFL")->GetStaticField(0x3D838);
		}

		// static const ::System::Object DFLMMDBIJGD; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGBLDGLGFL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ECGBLDGLGFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECGBLDGLGFL*))((::PBYTE)hIl2Cpp + ECGBLDGLGFL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECGBLDGLGFL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ECGBLDGLGFL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ECGBLDGLGFL*>*(*)())((::PBYTE)hIl2Cpp + ECGBLDGLGFL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGBLDGLGFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ECGBLDGLGFL* Clone()
		{
			return ((::ECGBLDGLGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGBLDGLGFL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NAFHKPHPPGC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGBLDGLGFL_NAFHKPHPPGC_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGBLDGLGFL_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECGBLDGLGFL_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECGBLDGLGFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ECGBLDGLGFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECGBLDGLGFL*))((::PBYTE)hIl2Cpp + ECGBLDGLGFL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGBLDGLGFL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGBLDGLGFL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ECGBLDGLGFL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGBLDGLGFL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ECGBLDGLGFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECGBLDGLGFL*))((::PBYTE)hIl2Cpp + ECGBLDGLGFL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ECGBLDGLGFL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
