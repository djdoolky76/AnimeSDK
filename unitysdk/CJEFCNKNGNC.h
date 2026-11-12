#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJEFCNKNGNC;
class IODAFIBPAGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJEFCNKNGNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3AE470)
#define CJEFCNKNGNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3AE770)
#define CJEFCNKNGNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F3ADFB0)
#define CJEFCNKNGNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3ADF20)
#define CJEFCNKNGNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3ADEE0)
#define CJEFCNKNGNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F3AE150)
#define CJEFCNKNGNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F3AE010)
#define CJEFCNKNGNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F3AE270)
#define CJEFCNKNGNC_HIFFPPCLABK_OFFSET UNITYSDK_OFFSET(0x1F3AE000)
#define CJEFCNKNGNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F3ADEA0)
#define CJEFCNKNGNC_KLGHPGMJMFL_OFFSET UNITYSDK_OFFSET(0x1F3ADFF0)
#define CJEFCNKNGNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F3AE5B0)
#define CJEFCNKNGNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3AE510)
#define CJEFCNKNGNC_NEMDIMKMKCK_OFFSET UNITYSDK_OFFSET(0x1F3ADFE0)
#define CJEFCNKNGNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F3ADED0)
#define CJEFCNKNGNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3AE2E0)
#define CJEFCNKNGNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F3AE340)

inline static constexpr unsigned int CJEFCNKNGNC_TypeDefinitionIndex = 26765;

	class CJEFCNKNGNC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>* NNFMIDOBAGL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean GDJJEMFEKEH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::IODAFIBPAGM*>** StaticGet_NBEPGHJJGKC()
		{
			return (::Google::Protobuf::FieldCodec_1<::IODAFIBPAGM*>**)UnitySDK::FromName("", "CJEFCNKNGNC")->GetStaticField(0x12850);
		}

		static ::Google::Protobuf::MessageParser_1<::CJEFCNKNGNC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CJEFCNKNGNC*>**)UnitySDK::FromName("", "CJEFCNKNGNC")->GetStaticField(0x12858);
		}

		// static const ::System::Object CPPBNJLABGE; // 0x0
		// static const ::System::Object OLFAGCHACKE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJEFCNKNGNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJEFCNKNGNC*))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJEFCNKNGNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CJEFCNKNGNC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CJEFCNKNGNC*>*(*)())((::PBYTE)hIl2Cpp + CJEFCNKNGNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJEFCNKNGNC* Clone()
		{
			return ((::CJEFCNKNGNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>* NEMDIMKMKCK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_NEMDIMKMKCK_OFFSET))(this);
		}

		::System::Boolean KLGHPGMJMFL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_KLGHPGMJMFL_OFFSET))(this);
		}

		::System::Void HIFFPPCLABK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_HIFFPPCLABK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJEFCNKNGNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJEFCNKNGNC*))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJEFCNKNGNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJEFCNKNGNC*))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJEFCNKNGNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
