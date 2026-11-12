#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHELNMGMENO;
class NEFBECKCJIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EHELNMGMENO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F581CE0)
#define EHELNMGMENO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F581FE0)
#define EHELNMGMENO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F581860)
#define EHELNMGMENO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5817B0)
#define EHELNMGMENO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F581760)
#define EHELNMGMENO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F581A40)
#define EHELNMGMENO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F5818C0)
#define EHELNMGMENO_FHFIPLCLBKK_OFFSET UNITYSDK_OFFSET(0x1F5818B0)
#define EHELNMGMENO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F581B60)
#define EHELNMGMENO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F5816F0)
#define EHELNMGMENO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F581E20)
#define EHELNMGMENO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F581D80)
#define EHELNMGMENO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F581750)
#define EHELNMGMENO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F581BD0)
#define EHELNMGMENO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F581C30)

inline static constexpr unsigned int EHELNMGMENO_TypeDefinitionIndex = 34244;

	class EHELNMGMENO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NEFBECKCJIH*>* AEEDCDHMINN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::NEFBECKCJIH*>** StaticGet_ODAKJNOCIFK()
		{
			return (::Google::Protobuf::FieldCodec_1<::NEFBECKCJIH*>**)UnitySDK::FromName("", "EHELNMGMENO")->GetStaticField(0x41520);
		}

		static ::Google::Protobuf::MessageParser_1<::EHELNMGMENO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EHELNMGMENO*>**)UnitySDK::FromName("", "EHELNMGMENO")->GetStaticField(0x41528);
		}

		// static const ::System::Object DNKDGPBAJHH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHELNMGMENO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EHELNMGMENO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHELNMGMENO*))((::PBYTE)hIl2Cpp + EHELNMGMENO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHELNMGMENO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EHELNMGMENO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EHELNMGMENO*>*(*)())((::PBYTE)hIl2Cpp + EHELNMGMENO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHELNMGMENO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EHELNMGMENO* Clone()
		{
			return ((::EHELNMGMENO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHELNMGMENO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NEFBECKCJIH*>* FHFIPLCLBKK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NEFBECKCJIH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHELNMGMENO_FHFIPLCLBKK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHELNMGMENO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EHELNMGMENO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHELNMGMENO*))((::PBYTE)hIl2Cpp + EHELNMGMENO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHELNMGMENO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHELNMGMENO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EHELNMGMENO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHELNMGMENO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EHELNMGMENO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHELNMGMENO*))((::PBYTE)hIl2Cpp + EHELNMGMENO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EHELNMGMENO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
