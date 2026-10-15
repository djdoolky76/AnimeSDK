#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENJDEFHFKPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ENJDEFHFKPI_AFKAPNLAEBJ_OFFSET UNITYSDK_OFFSET(0x1E2C4760)
#define ENJDEFHFKPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2C4B90)
#define ENJDEFHFKPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C4E50)
#define ENJDEFHFKPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2C4710)
#define ENJDEFHFKPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2C4680)
#define ENJDEFHFKPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C4630)
#define ENJDEFHFKPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2C4890)
#define ENJDEFHFKPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2C4770)
#define ENJDEFHFKPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2C4980)
#define ENJDEFHFKPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2C45C0)
#define ENJDEFHFKPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2C4C80)
#define ENJDEFHFKPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2C4C30)
#define ENJDEFHFKPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2C4620)
#define ENJDEFHFKPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2C4A80)
#define ENJDEFHFKPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2C4AE0)

inline static constexpr unsigned int ENJDEFHFKPI_TypeDefinitionIndex = 28289;

	class ENJDEFHFKPI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LGDNOEBJEEA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LDCPEILKMHB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ENJDEFHFKPI")->GetStaticField(0x45200);
		}

		static ::Google::Protobuf::MessageParser_1<::ENJDEFHFKPI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ENJDEFHFKPI*>**)UnitySDK::FromName("", "ENJDEFHFKPI")->GetStaticField(0x45208);
		}

		// static const ::System::Object FAIPIGEGFJA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJDEFHFKPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ENJDEFHFKPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENJDEFHFKPI*))((::PBYTE)hIl2Cpp + ENJDEFHFKPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENJDEFHFKPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ENJDEFHFKPI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ENJDEFHFKPI*>*(*)())((::PBYTE)hIl2Cpp + ENJDEFHFKPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJDEFHFKPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ENJDEFHFKPI* Clone()
		{
			return ((::ENJDEFHFKPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJDEFHFKPI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFKAPNLAEBJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJDEFHFKPI_AFKAPNLAEBJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENJDEFHFKPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ENJDEFHFKPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENJDEFHFKPI*))((::PBYTE)hIl2Cpp + ENJDEFHFKPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJDEFHFKPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJDEFHFKPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ENJDEFHFKPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJDEFHFKPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ENJDEFHFKPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENJDEFHFKPI*))((::PBYTE)hIl2Cpp + ENJDEFHFKPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ENJDEFHFKPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
