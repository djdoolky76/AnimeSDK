#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONBLLGHELOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONBLLGHELOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE94920)
#define ONBLLGHELOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE94C20)
#define ONBLLGHELOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE94490)
#define ONBLLGHELOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE94400)
#define ONBLLGHELOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE943B0)
#define ONBLLGHELOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE945F0)
#define ONBLLGHELOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE944F0)
#define ONBLLGHELOB_FGFLCINOHOA_OFFSET UNITYSDK_OFFSET(0x1DE944D0)
#define ONBLLGHELOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE946E0)
#define ONBLLGHELOB_GHCLBEONGAO_OFFSET UNITYSDK_OFFSET(0x1DE944C0)
#define ONBLLGHELOB_JDJOKEELMJL_OFFSET UNITYSDK_OFFSET(0x1DE944E0)
#define ONBLLGHELOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE94370)
#define ONBLLGHELOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE94A60)
#define ONBLLGHELOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE94A10)
#define ONBLLGHELOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE943A0)
#define ONBLLGHELOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE947E0)
#define ONBLLGHELOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE94840)

inline static constexpr unsigned int ONBLLGHELOB_TypeDefinitionIndex = 29765;

	class ONBLLGHELOB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PELBLHNBFNO; // 0x18
		::System::UInt32 GIDKEIEPFMG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ONBLLGHELOB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ONBLLGHELOB*>**)UnitySDK::FromName("", "ONBLLGHELOB")->GetStaticField(0x23F30);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_AJGKJAHLFME()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ONBLLGHELOB")->GetStaticField(0x23F38);
		}

		// static const ::System::Object DDMBNAHAEKI; // 0x0
		// static const ::System::Object HPCECEJOHCJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBLLGHELOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONBLLGHELOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONBLLGHELOB*))((::PBYTE)hIl2Cpp + ONBLLGHELOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONBLLGHELOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ONBLLGHELOB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ONBLLGHELOB*>*(*)())((::PBYTE)hIl2Cpp + ONBLLGHELOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBLLGHELOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONBLLGHELOB* Clone()
		{
			return ((::ONBLLGHELOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBLLGHELOB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GHCLBEONGAO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBLLGHELOB_GHCLBEONGAO_OFFSET))(this);
		}

		::System::UInt32 FGFLCINOHOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBLLGHELOB_FGFLCINOHOA_OFFSET))(this);
		}

		::System::Void JDJOKEELMJL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONBLLGHELOB_JDJOKEELMJL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONBLLGHELOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONBLLGHELOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONBLLGHELOB*))((::PBYTE)hIl2Cpp + ONBLLGHELOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBLLGHELOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBLLGHELOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONBLLGHELOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBLLGHELOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONBLLGHELOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONBLLGHELOB*))((::PBYTE)hIl2Cpp + ONBLLGHELOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONBLLGHELOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
