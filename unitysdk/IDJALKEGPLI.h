#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class IDJALKEGPLI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDJALKEGPLI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5FFA20)
#define IDJALKEGPLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5FFDC0)
#define IDJALKEGPLI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5FF510)
#define IDJALKEGPLI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5FF480)
#define IDJALKEGPLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FF440)
#define IDJALKEGPLI_DKJLMFCJFFK_OFFSET UNITYSDK_OFFSET(0x1E5FF560)
#define IDJALKEGPLI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5FF720)
#define IDJALKEGPLI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5FF590)
#define IDJALKEGPLI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5FF840)
#define IDJALKEGPLI_IPLBECBNJLK_OFFSET UNITYSDK_OFFSET(0x1E5FF570)
#define IDJALKEGPLI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5FF3D0)
#define IDJALKEGPLI_LMLKAECMDNH_OFFSET UNITYSDK_OFFSET(0x1E5FF580)
#define IDJALKEGPLI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5FFBF0)
#define IDJALKEGPLI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5FFB50)
#define IDJALKEGPLI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5FF430)
#define IDJALKEGPLI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5FF8B0)
#define IDJALKEGPLI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5FF910)

inline static constexpr unsigned int IDJALKEGPLI_TypeDefinitionIndex = 31615;

	class IDJALKEGPLI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* GPOFAEPIOJM; // 0x18
		::System::UInt32 BHFEEGICLMK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IDJALKEGPLI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IDJALKEGPLI*>**)UnitySDK::FromName("", "IDJALKEGPLI")->GetStaticField(0x468F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>** StaticGet_KDDKFBJMOAI()
		{
			return (::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>**)UnitySDK::FromName("", "IDJALKEGPLI")->GetStaticField(0x468F8);
		}

		// static const ::System::Object CAPFCADNIJI; // 0x0
		// static const ::System::Object OEMNIDFIJEO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJALKEGPLI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDJALKEGPLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDJALKEGPLI*))((::PBYTE)hIl2Cpp + IDJALKEGPLI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDJALKEGPLI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IDJALKEGPLI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IDJALKEGPLI*>*(*)())((::PBYTE)hIl2Cpp + IDJALKEGPLI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJALKEGPLI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDJALKEGPLI* Clone()
		{
			return ((::IDJALKEGPLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJALKEGPLI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* DKJLMFCJFFK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJALKEGPLI_DKJLMFCJFFK_OFFSET))(this);
		}

		::System::UInt32 IPLBECBNJLK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJALKEGPLI_IPLBECBNJLK_OFFSET))(this);
		}

		::System::Void LMLKAECMDNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDJALKEGPLI_LMLKAECMDNH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDJALKEGPLI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDJALKEGPLI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDJALKEGPLI*))((::PBYTE)hIl2Cpp + IDJALKEGPLI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJALKEGPLI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJALKEGPLI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDJALKEGPLI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJALKEGPLI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDJALKEGPLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDJALKEGPLI*))((::PBYTE)hIl2Cpp + IDJALKEGPLI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDJALKEGPLI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
