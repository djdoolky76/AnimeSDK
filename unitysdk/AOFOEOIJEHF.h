#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOFOEOIJEHF;
class FLGMGNEOFBH;
class IJDLENJJBHJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AOFOEOIJEHF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E63F150)
#define AOFOEOIJEHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E63F550)
#define AOFOEOIJEHF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E63ED50)
#define AOFOEOIJEHF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E63EC50)
#define AOFOEOIJEHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E63EBE0)
#define AOFOEOIJEHF_DCKAMLHKADM_OFFSET UNITYSDK_OFFSET(0x1E63EDA0)
#define AOFOEOIJEHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E63EE20)
#define AOFOEOIJEHF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E63EDC0)
#define AOFOEOIJEHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E63EF70)
#define AOFOEOIJEHF_GKOCGBLGAKK_OFFSET UNITYSDK_OFFSET(0x1E63EDB0)
#define AOFOEOIJEHF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E63EB70)
#define AOFOEOIJEHF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E63F320)
#define AOFOEOIJEHF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E63F230)
#define AOFOEOIJEHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E63EBD0)
#define AOFOEOIJEHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E63F000)
#define AOFOEOIJEHF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E63F060)

inline static constexpr unsigned int AOFOEOIJEHF_TypeDefinitionIndex = 29360;

	class AOFOEOIJEHF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FLGMGNEOFBH*>* MNOKLCDKJGF; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::IJDLENJJBHJ*>* ELBGFDFFBPH; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::FLGMGNEOFBH*>** StaticGet_GGOGPNHIIIO()
		{
			return (::Google::Protobuf::FieldCodec_1<::FLGMGNEOFBH*>**)UnitySDK::FromName("", "AOFOEOIJEHF")->GetStaticField(0x48F70);
		}

		static ::Google::Protobuf::FieldCodec_1<::IJDLENJJBHJ*>** StaticGet_EHPMIHMAMFE()
		{
			return (::Google::Protobuf::FieldCodec_1<::IJDLENJJBHJ*>**)UnitySDK::FromName("", "AOFOEOIJEHF")->GetStaticField(0x48F78);
		}

		static ::Google::Protobuf::MessageParser_1<::AOFOEOIJEHF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AOFOEOIJEHF*>**)UnitySDK::FromName("", "AOFOEOIJEHF")->GetStaticField(0x48F80);
		}

		// static const ::System::Object JBKGNCCMBND; // 0x0
		// static const ::System::Object CJHBIJMHAAH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFOEOIJEHF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + AOFOEOIJEHF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOFOEOIJEHF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AOFOEOIJEHF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AOFOEOIJEHF*>*(*)())((::PBYTE)hIl2Cpp + AOFOEOIJEHF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFOEOIJEHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AOFOEOIJEHF* Clone()
		{
			return ((::AOFOEOIJEHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFOEOIJEHF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IJDLENJJBHJ*>* DCKAMLHKADM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IJDLENJJBHJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFOEOIJEHF_DCKAMLHKADM_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FLGMGNEOFBH*>* GKOCGBLGAKK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FLGMGNEOFBH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFOEOIJEHF_GKOCGBLGAKK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AOFOEOIJEHF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AOFOEOIJEHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + AOFOEOIJEHF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFOEOIJEHF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFOEOIJEHF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AOFOEOIJEHF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFOEOIJEHF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + AOFOEOIJEHF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AOFOEOIJEHF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
