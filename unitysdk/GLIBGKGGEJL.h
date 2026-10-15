#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLIBGKGGEJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GLIBGKGGEJL_ACCFODNGIBM_OFFSET UNITYSDK_OFFSET(0x1E492B10)
#define GLIBGKGGEJL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E492F60)
#define GLIBGKGGEJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E493250)
#define GLIBGKGGEJL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E492AD0)
#define GLIBGKGGEJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E492A40)
#define GLIBGKGGEJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4929F0)
#define GLIBGKGGEJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E492C30)
#define GLIBGKGGEJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E492B30)
#define GLIBGKGGEJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E492D20)
#define GLIBGKGGEJL_HPCAHPOJFCI_OFFSET UNITYSDK_OFFSET(0x1E492B20)
#define GLIBGKGGEJL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4929B0)
#define GLIBGKGGEJL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4930A0)
#define GLIBGKGGEJL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E493050)
#define GLIBGKGGEJL_MMJAKBPAMKI_OFFSET UNITYSDK_OFFSET(0x1E492B00)
#define GLIBGKGGEJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4929E0)
#define GLIBGKGGEJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E492E20)
#define GLIBGKGGEJL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E492E80)

inline static constexpr unsigned int GLIBGKGGEJL_TypeDefinitionIndex = 25669;

	class GLIBGKGGEJL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LIEKGJAFJIG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NGKCLFFLFHH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GLIBGKGGEJL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GLIBGKGGEJL*>**)UnitySDK::FromName("", "GLIBGKGGEJL")->GetStaticField(0x1CBE0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EBKKCDANBPA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GLIBGKGGEJL")->GetStaticField(0x1CBE8);
		}

		// static const ::System::Object CPMEHPBMMDL; // 0x0
		// static const ::System::Object NGJDKJLONGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIBGKGGEJL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GLIBGKGGEJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLIBGKGGEJL*))((::PBYTE)hIl2Cpp + GLIBGKGGEJL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLIBGKGGEJL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GLIBGKGGEJL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GLIBGKGGEJL*>*(*)())((::PBYTE)hIl2Cpp + GLIBGKGGEJL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIBGKGGEJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GLIBGKGGEJL* Clone()
		{
			return ((::GLIBGKGGEJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIBGKGGEJL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MMJAKBPAMKI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIBGKGGEJL_MMJAKBPAMKI_OFFSET))(this);
		}

		::System::UInt32 ACCFODNGIBM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIBGKGGEJL_ACCFODNGIBM_OFFSET))(this);
		}

		::System::Void HPCAHPOJFCI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLIBGKGGEJL_HPCAHPOJFCI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLIBGKGGEJL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GLIBGKGGEJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLIBGKGGEJL*))((::PBYTE)hIl2Cpp + GLIBGKGGEJL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIBGKGGEJL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIBGKGGEJL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GLIBGKGGEJL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIBGKGGEJL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GLIBGKGGEJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLIBGKGGEJL*))((::PBYTE)hIl2Cpp + GLIBGKGGEJL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GLIBGKGGEJL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
