#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLFABOEKMJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLFABOEKMJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3EEDD0)
#define CLFABOEKMJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3EF090)
#define CLFABOEKMJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F3EE950)
#define CLFABOEKMJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3EE8C0)
#define CLFABOEKMJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3EE870)
#define CLFABOEKMJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F3EEAD0)
#define CLFABOEKMJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F3EE9B0)
#define CLFABOEKMJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F3EEBC0)
#define CLFABOEKMJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F3EE800)
#define CLFABOEKMJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F3EEEC0)
#define CLFABOEKMJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3EEE70)
#define CLFABOEKMJI_OCEFLJKKGJK_OFFSET UNITYSDK_OFFSET(0x1F3EE9A0)
#define CLFABOEKMJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F3EE860)
#define CLFABOEKMJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3EECC0)
#define CLFABOEKMJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F3EED20)

inline static constexpr unsigned int CLFABOEKMJI_TypeDefinitionIndex = 30045;

	class CLFABOEKMJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LCKGIJKAEME; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CLFABOEKMJI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CLFABOEKMJI*>**)UnitySDK::FromName("", "CLFABOEKMJI")->GetStaticField(0x17E70);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OFMABAKDNIB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CLFABOEKMJI")->GetStaticField(0x17E78);
		}

		// static const ::System::Object CCPCJOCAFNE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFABOEKMJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLFABOEKMJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLFABOEKMJI*))((::PBYTE)hIl2Cpp + CLFABOEKMJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLFABOEKMJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CLFABOEKMJI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CLFABOEKMJI*>*(*)())((::PBYTE)hIl2Cpp + CLFABOEKMJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFABOEKMJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLFABOEKMJI* Clone()
		{
			return ((::CLFABOEKMJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFABOEKMJI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OCEFLJKKGJK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFABOEKMJI_OCEFLJKKGJK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLFABOEKMJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLFABOEKMJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLFABOEKMJI*))((::PBYTE)hIl2Cpp + CLFABOEKMJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFABOEKMJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFABOEKMJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLFABOEKMJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFABOEKMJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLFABOEKMJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLFABOEKMJI*))((::PBYTE)hIl2Cpp + CLFABOEKMJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLFABOEKMJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
