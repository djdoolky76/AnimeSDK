#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLIPLAHLMKM;
class MJLJMCCGNEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FLIPLAHLMKM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6C3B60)
#define FLIPLAHLMKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6C3E60)
#define FLIPLAHLMKM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6C36E0)
#define FLIPLAHLMKM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6C3630)
#define FLIPLAHLMKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6C35E0)
#define FLIPLAHLMKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6C38C0)
#define FLIPLAHLMKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6C3740)
#define FLIPLAHLMKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6C39E0)
#define FLIPLAHLMKM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6C3570)
#define FLIPLAHLMKM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6C3CA0)
#define FLIPLAHLMKM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6C3C00)
#define FLIPLAHLMKM_OPFBPHANEFF_OFFSET UNITYSDK_OFFSET(0x1F6C3730)
#define FLIPLAHLMKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6C35D0)
#define FLIPLAHLMKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6C3A50)
#define FLIPLAHLMKM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6C3AB0)

inline static constexpr unsigned int FLIPLAHLMKM_TypeDefinitionIndex = 28933;

	class FLIPLAHLMKM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::MJLJMCCGNEE*>* LJLEOKJBDJJ; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::MJLJMCCGNEE*>** StaticGet_COOJEGHKBMJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::MJLJMCCGNEE*>**)UnitySDK::FromName("", "FLIPLAHLMKM")->GetStaticField(0x4AAF0);
		}

		static ::Google::Protobuf::MessageParser_1<::FLIPLAHLMKM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FLIPLAHLMKM*>**)UnitySDK::FromName("", "FLIPLAHLMKM")->GetStaticField(0x4AAF8);
		}

		// static const ::System::Object ODOJCIOAJGD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPLAHLMKM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FLIPLAHLMKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLIPLAHLMKM*))((::PBYTE)hIl2Cpp + FLIPLAHLMKM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLIPLAHLMKM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FLIPLAHLMKM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FLIPLAHLMKM*>*(*)())((::PBYTE)hIl2Cpp + FLIPLAHLMKM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPLAHLMKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FLIPLAHLMKM* Clone()
		{
			return ((::FLIPLAHLMKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPLAHLMKM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MJLJMCCGNEE*>* OPFBPHANEFF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MJLJMCCGNEE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPLAHLMKM_OPFBPHANEFF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLIPLAHLMKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FLIPLAHLMKM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FLIPLAHLMKM*))((::PBYTE)hIl2Cpp + FLIPLAHLMKM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPLAHLMKM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPLAHLMKM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FLIPLAHLMKM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPLAHLMKM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FLIPLAHLMKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLIPLAHLMKM*))((::PBYTE)hIl2Cpp + FLIPLAHLMKM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FLIPLAHLMKM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
