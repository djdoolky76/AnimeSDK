#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEOMNBBJDOG;
class JMGLAJFHNIM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EEOMNBBJDOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E289A50)
#define EEOMNBBJDOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E289DF0)
#define EEOMNBBJDOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2895A0)
#define EEOMNBBJDOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E289510)
#define EEOMNBBJDOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2894D0)
#define EEOMNBBJDOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E289750)
#define EEOMNBBJDOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E289600)
#define EEOMNBBJDOG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2895F0)
#define EEOMNBBJDOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E289870)
#define EEOMNBBJDOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E289490)
#define EEOMNBBJDOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E289C20)
#define EEOMNBBJDOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E289B80)
#define EEOMNBBJDOG_NEMDIMKMKCK_OFFSET UNITYSDK_OFFSET(0x1E2895D0)
#define EEOMNBBJDOG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2895E0)
#define EEOMNBBJDOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2894C0)
#define EEOMNBBJDOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2898E0)
#define EEOMNBBJDOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E289940)

inline static constexpr unsigned int EEOMNBBJDOG_TypeDefinitionIndex = 28217;

	class EEOMNBBJDOG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JMGLAJFHNIM*>* NNFMIDOBAGL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::JMGLAJFHNIM*>** StaticGet_NBEPGHJJGKC()
		{
			return (::Google::Protobuf::FieldCodec_1<::JMGLAJFHNIM*>**)UnitySDK::FromName("", "EEOMNBBJDOG")->GetStaticField(0x442E0);
		}

		static ::Google::Protobuf::MessageParser_1<::EEOMNBBJDOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EEOMNBBJDOG*>**)UnitySDK::FromName("", "EEOMNBBJDOG")->GetStaticField(0x442E8);
		}

		// static const ::System::Object CPPBNJLABGE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOMNBBJDOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EEOMNBBJDOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEOMNBBJDOG*))((::PBYTE)hIl2Cpp + EEOMNBBJDOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEOMNBBJDOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EEOMNBBJDOG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EEOMNBBJDOG*>*(*)())((::PBYTE)hIl2Cpp + EEOMNBBJDOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOMNBBJDOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EEOMNBBJDOG* Clone()
		{
			return ((::EEOMNBBJDOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOMNBBJDOG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JMGLAJFHNIM*>* NEMDIMKMKCK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JMGLAJFHNIM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOMNBBJDOG_NEMDIMKMKCK_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOMNBBJDOG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEOMNBBJDOG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEOMNBBJDOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EEOMNBBJDOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EEOMNBBJDOG*))((::PBYTE)hIl2Cpp + EEOMNBBJDOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOMNBBJDOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOMNBBJDOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EEOMNBBJDOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOMNBBJDOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EEOMNBBJDOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEOMNBBJDOG*))((::PBYTE)hIl2Cpp + EEOMNBBJDOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EEOMNBBJDOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
