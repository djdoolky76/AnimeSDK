#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHKEBIOFDHI;
class IDEDIHLMEHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDEDIHLMEHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20135160)
#define IDEDIHLMEHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x20135460)
#define IDEDIHLMEHL_CLONE_OFFSET UNITYSDK_OFFSET(0x20134CE0)
#define IDEDIHLMEHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20134C30)
#define IDEDIHLMEHL_CTOR_OFFSET UNITYSDK_OFFSET(0x20134BE0)
#define IDEDIHLMEHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20134EC0)
#define IDEDIHLMEHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x20134D40)
#define IDEDIHLMEHL_FMGHOGEBEJJ_OFFSET UNITYSDK_OFFSET(0x20134D30)
#define IDEDIHLMEHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20134FE0)
#define IDEDIHLMEHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20134B70)
#define IDEDIHLMEHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x201352A0)
#define IDEDIHLMEHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20135200)
#define IDEDIHLMEHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20134BD0)
#define IDEDIHLMEHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20135050)
#define IDEDIHLMEHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x201350B0)

inline static constexpr unsigned int IDEDIHLMEHL_TypeDefinitionIndex = 30041;

	class IDEDIHLMEHL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::GHKEBIOFDHI*>* DAJAAAPJPNE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IDEDIHLMEHL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IDEDIHLMEHL*>**)UnitySDK::FromName("", "IDEDIHLMEHL")->GetStaticField(0x4A0D0);
		}

		static ::Google::Protobuf::FieldCodec_1<::GHKEBIOFDHI*>** StaticGet_JCOLJGNIILJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::GHKEBIOFDHI*>**)UnitySDK::FromName("", "IDEDIHLMEHL")->GetStaticField(0x4A0D8);
		}

		// static const ::System::Object KKEFDKAOBNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEDIHLMEHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDEDIHLMEHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDEDIHLMEHL*))((::PBYTE)hIl2Cpp + IDEDIHLMEHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDEDIHLMEHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IDEDIHLMEHL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IDEDIHLMEHL*>*(*)())((::PBYTE)hIl2Cpp + IDEDIHLMEHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEDIHLMEHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDEDIHLMEHL* Clone()
		{
			return ((::IDEDIHLMEHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEDIHLMEHL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GHKEBIOFDHI*>* FMGHOGEBEJJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GHKEBIOFDHI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEDIHLMEHL_FMGHOGEBEJJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDEDIHLMEHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDEDIHLMEHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDEDIHLMEHL*))((::PBYTE)hIl2Cpp + IDEDIHLMEHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEDIHLMEHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEDIHLMEHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDEDIHLMEHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEDIHLMEHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDEDIHLMEHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDEDIHLMEHL*))((::PBYTE)hIl2Cpp + IDEDIHLMEHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDEDIHLMEHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
