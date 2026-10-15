#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALNIHNLACOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALNIHNLACOK_BIBPBCCNBMK_OFFSET UNITYSDK_OFFSET(0x1E5145E0)
#define ALNIHNLACOK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E514A30)
#define ALNIHNLACOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E514D20)
#define ALNIHNLACOK_CJNPMPBNAKL_OFFSET UNITYSDK_OFFSET(0x1E5145D0)
#define ALNIHNLACOK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5145A0)
#define ALNIHNLACOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E514510)
#define ALNIHNLACOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5144C0)
#define ALNIHNLACOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E514700)
#define ALNIHNLACOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E514600)
#define ALNIHNLACOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5147F0)
#define ALNIHNLACOK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E514480)
#define ALNIHNLACOK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E514B70)
#define ALNIHNLACOK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E514B20)
#define ALNIHNLACOK_OIEMAEFDBCB_OFFSET UNITYSDK_OFFSET(0x1E5145F0)
#define ALNIHNLACOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5144B0)
#define ALNIHNLACOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5148F0)
#define ALNIHNLACOK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E514950)

inline static constexpr unsigned int ALNIHNLACOK_TypeDefinitionIndex = 31982;

	class ALNIHNLACOK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ELMCGNEAAHF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 BGMLGHECGBM; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LAFIEPLAPED()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ALNIHNLACOK")->GetStaticField(0x3A4A0);
		}

		static ::Google::Protobuf::MessageParser_1<::ALNIHNLACOK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ALNIHNLACOK*>**)UnitySDK::FromName("", "ALNIHNLACOK")->GetStaticField(0x3A4A8);
		}

		// static const ::System::Object ODLGJOLIOKD; // 0x0
		// static const ::System::Object LANLJAPHOCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNIHNLACOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALNIHNLACOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALNIHNLACOK*))((::PBYTE)hIl2Cpp + ALNIHNLACOK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALNIHNLACOK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ALNIHNLACOK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ALNIHNLACOK*>*(*)())((::PBYTE)hIl2Cpp + ALNIHNLACOK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNIHNLACOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALNIHNLACOK* Clone()
		{
			return ((::ALNIHNLACOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNIHNLACOK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CJNPMPBNAKL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNIHNLACOK_CJNPMPBNAKL_OFFSET))(this);
		}

		::System::UInt32 BIBPBCCNBMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNIHNLACOK_BIBPBCCNBMK_OFFSET))(this);
		}

		::System::Void OIEMAEFDBCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALNIHNLACOK_OIEMAEFDBCB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALNIHNLACOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALNIHNLACOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALNIHNLACOK*))((::PBYTE)hIl2Cpp + ALNIHNLACOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNIHNLACOK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNIHNLACOK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALNIHNLACOK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNIHNLACOK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALNIHNLACOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALNIHNLACOK*))((::PBYTE)hIl2Cpp + ALNIHNLACOK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALNIHNLACOK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
