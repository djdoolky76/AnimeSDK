#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OELHDNEGGBB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OELHDNEGGBB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE00F30)
#define OELHDNEGGBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE01190)
#define OELHDNEGGBB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE00B30)
#define OELHDNEGGBB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE00AA0)
#define OELHDNEGGBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE00A50)
#define OELHDNEGGBB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE00C60)
#define OELHDNEGGBB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE00B70)
#define OELHDNEGGBB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE00D50)
#define OELHDNEGGBB_IOEMIGKJOAG_OFFSET UNITYSDK_OFFSET(0x1DE00B60)
#define OELHDNEGGBB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE00A10)
#define OELHDNEGGBB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE00FF0)
#define OELHDNEGGBB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE00FA0)
#define OELHDNEGGBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE00A40)
#define OELHDNEGGBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE00E50)
#define OELHDNEGGBB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE00EB0)

inline static constexpr unsigned int OELHDNEGGBB_TypeDefinitionIndex = 31233;

	class OELHDNEGGBB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NADMPFLLLME; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_AMENAKGFOPI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OELHDNEGGBB")->GetStaticField(0x14490);
		}

		static ::Google::Protobuf::MessageParser_1<::OELHDNEGGBB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OELHDNEGGBB*>**)UnitySDK::FromName("", "OELHDNEGGBB")->GetStaticField(0x14498);
		}

		// static const ::System::Object LCOBHLBDBMG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHDNEGGBB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OELHDNEGGBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OELHDNEGGBB*))((::PBYTE)hIl2Cpp + OELHDNEGGBB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELHDNEGGBB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OELHDNEGGBB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OELHDNEGGBB*>*(*)())((::PBYTE)hIl2Cpp + OELHDNEGGBB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHDNEGGBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OELHDNEGGBB* Clone()
		{
			return ((::OELHDNEGGBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHDNEGGBB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IOEMIGKJOAG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHDNEGGBB_IOEMIGKJOAG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OELHDNEGGBB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OELHDNEGGBB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OELHDNEGGBB*))((::PBYTE)hIl2Cpp + OELHDNEGGBB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHDNEGGBB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHDNEGGBB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OELHDNEGGBB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHDNEGGBB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OELHDNEGGBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OELHDNEGGBB*))((::PBYTE)hIl2Cpp + OELHDNEGGBB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OELHDNEGGBB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
