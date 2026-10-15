#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLPCEKMKLGG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GLPCEKMKLGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E49A9B0)
#define GLPCEKMKLGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E49AC70)
#define GLPCEKMKLGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E49A530)
#define GLPCEKMKLGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E49A4A0)
#define GLPCEKMKLGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E49A450)
#define GLPCEKMKLGG_EBPKBBDOBNC_OFFSET UNITYSDK_OFFSET(0x1E49A580)
#define GLPCEKMKLGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E49A6B0)
#define GLPCEKMKLGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E49A590)
#define GLPCEKMKLGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E49A7A0)
#define GLPCEKMKLGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E49A3E0)
#define GLPCEKMKLGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E49AAA0)
#define GLPCEKMKLGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E49AA50)
#define GLPCEKMKLGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E49A440)
#define GLPCEKMKLGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E49A8A0)
#define GLPCEKMKLGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E49A900)

inline static constexpr unsigned int GLPCEKMKLGG_TypeDefinitionIndex = 29368;

	class GLPCEKMKLGG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IPHOFPDFOLJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GLPCEKMKLGG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GLPCEKMKLGG*>**)UnitySDK::FromName("", "GLPCEKMKLGG")->GetStaticField(0x1D6C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PMCJBHIIPDN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GLPCEKMKLGG")->GetStaticField(0x1D6C8);
		}

		// static const ::System::Object MPGNKBCIMDA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCEKMKLGG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GLPCEKMKLGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLPCEKMKLGG*))((::PBYTE)hIl2Cpp + GLPCEKMKLGG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLPCEKMKLGG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GLPCEKMKLGG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GLPCEKMKLGG*>*(*)())((::PBYTE)hIl2Cpp + GLPCEKMKLGG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCEKMKLGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GLPCEKMKLGG* Clone()
		{
			return ((::GLPCEKMKLGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCEKMKLGG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EBPKBBDOBNC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCEKMKLGG_EBPKBBDOBNC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLPCEKMKLGG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GLPCEKMKLGG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLPCEKMKLGG*))((::PBYTE)hIl2Cpp + GLPCEKMKLGG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCEKMKLGG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCEKMKLGG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GLPCEKMKLGG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCEKMKLGG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GLPCEKMKLGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLPCEKMKLGG*))((::PBYTE)hIl2Cpp + GLPCEKMKLGG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GLPCEKMKLGG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
