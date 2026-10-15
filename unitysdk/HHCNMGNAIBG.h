#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFHGPMCHDGL;
class HHCNMGNAIBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HHCNMGNAIBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E559050)
#define HHCNMGNAIBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E559330)
#define HHCNMGNAIBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E558C30)
#define HHCNMGNAIBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E558BA0)
#define HHCNMGNAIBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E558B60)
#define HHCNMGNAIBG_ENPOAKILNGK_OFFSET UNITYSDK_OFFSET(0x1E558C60)
#define HHCNMGNAIBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E558DB0)
#define HHCNMGNAIBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E558C70)
#define HHCNMGNAIBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E558ED0)
#define HHCNMGNAIBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E558B20)
#define HHCNMGNAIBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E559190)
#define HHCNMGNAIBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5590F0)
#define HHCNMGNAIBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E558B50)
#define HHCNMGNAIBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E558F40)
#define HHCNMGNAIBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E558FA0)

inline static constexpr unsigned int HHCNMGNAIBG_TypeDefinitionIndex = 25913;

	class HHCNMGNAIBG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HFHGPMCHDGL*>* GOBDOOKJLMH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HHCNMGNAIBG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HHCNMGNAIBG*>**)UnitySDK::FromName("", "HHCNMGNAIBG")->GetStaticField(0x31CB0);
		}

		static ::Google::Protobuf::FieldCodec_1<::HFHGPMCHDGL*>** StaticGet_GCDHOPLJPAD()
		{
			return (::Google::Protobuf::FieldCodec_1<::HFHGPMCHDGL*>**)UnitySDK::FromName("", "HHCNMGNAIBG")->GetStaticField(0x31CB8);
		}

		// static const ::System::Object GIHIAIABDDK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HHCNMGNAIBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHCNMGNAIBG*))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHCNMGNAIBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HHCNMGNAIBG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HHCNMGNAIBG*>*(*)())((::PBYTE)hIl2Cpp + HHCNMGNAIBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HHCNMGNAIBG* Clone()
		{
			return ((::HHCNMGNAIBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HFHGPMCHDGL*>* ENPOAKILNGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HFHGPMCHDGL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_ENPOAKILNGK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HHCNMGNAIBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HHCNMGNAIBG*))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HHCNMGNAIBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHCNMGNAIBG*))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HHCNMGNAIBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
