#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFJNAPDIMKM;
class OMJGKNJKHCH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CFJNAPDIMKM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0779E0)
#define CFJNAPDIMKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E077CC0)
#define CFJNAPDIMKM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0775C0)
#define CFJNAPDIMKM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E077530)
#define CFJNAPDIMKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0774F0)
#define CFJNAPDIMKM_EBLGGODDKAD_OFFSET UNITYSDK_OFFSET(0x1E0775F0)
#define CFJNAPDIMKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E077740)
#define CFJNAPDIMKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E077600)
#define CFJNAPDIMKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E077860)
#define CFJNAPDIMKM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0774B0)
#define CFJNAPDIMKM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E077B20)
#define CFJNAPDIMKM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E077A80)
#define CFJNAPDIMKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0774E0)
#define CFJNAPDIMKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0778D0)
#define CFJNAPDIMKM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E077930)

inline static constexpr unsigned int CFJNAPDIMKM_TypeDefinitionIndex = 33024;

	class CFJNAPDIMKM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::OMJGKNJKHCH*>* NICPOOMLFMK; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::OMJGKNJKHCH*>** StaticGet_POPGJBDHPIH()
		{
			return (::Google::Protobuf::FieldCodec_1<::OMJGKNJKHCH*>**)UnitySDK::FromName("", "CFJNAPDIMKM")->GetStaticField(0x11E60);
		}

		static ::Google::Protobuf::MessageParser_1<::CFJNAPDIMKM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CFJNAPDIMKM*>**)UnitySDK::FromName("", "CFJNAPDIMKM")->GetStaticField(0x11E68);
		}

		// static const ::System::Object IMPGOAJADJI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CFJNAPDIMKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFJNAPDIMKM*))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFJNAPDIMKM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CFJNAPDIMKM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CFJNAPDIMKM*>*(*)())((::PBYTE)hIl2Cpp + CFJNAPDIMKM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CFJNAPDIMKM* Clone()
		{
			return ((::CFJNAPDIMKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OMJGKNJKHCH*>* EBLGGODDKAD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OMJGKNJKHCH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_EBLGGODDKAD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFJNAPDIMKM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFJNAPDIMKM*))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CFJNAPDIMKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFJNAPDIMKM*))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CFJNAPDIMKM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
