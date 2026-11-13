#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAJFNKIEEDM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NAJFNKIEEDM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2014CA20)
#define NAJFNKIEEDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x2014CC80)
#define NAJFNKIEEDM_CLONE_OFFSET UNITYSDK_OFFSET(0x2014C620)
#define NAJFNKIEEDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2014C590)
#define NAJFNKIEEDM_CTOR_OFFSET UNITYSDK_OFFSET(0x2014C540)
#define NAJFNKIEEDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2014C750)
#define NAJFNKIEEDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x2014C660)
#define NAJFNKIEEDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2014C840)
#define NAJFNKIEEDM_GPIMMGGCIHA_OFFSET UNITYSDK_OFFSET(0x2014C650)
#define NAJFNKIEEDM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2014C500)
#define NAJFNKIEEDM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2014CAE0)
#define NAJFNKIEEDM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2014CA90)
#define NAJFNKIEEDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2014C530)
#define NAJFNKIEEDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2014C940)
#define NAJFNKIEEDM_WRITETO_OFFSET UNITYSDK_OFFSET(0x2014C9A0)

inline static constexpr unsigned int NAJFNKIEEDM_TypeDefinitionIndex = 32524;

	class NAJFNKIEEDM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JKDJJIPHCFJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NAJFNKIEEDM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NAJFNKIEEDM*>**)UnitySDK::FromName("", "NAJFNKIEEDM")->GetStaticField(0x56D90);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OLDFJFEPMOI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NAJFNKIEEDM")->GetStaticField(0x56D98);
		}

		// static const ::System::Object FJKIOGJCDNO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJFNKIEEDM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NAJFNKIEEDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAJFNKIEEDM*))((::PBYTE)hIl2Cpp + NAJFNKIEEDM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAJFNKIEEDM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NAJFNKIEEDM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NAJFNKIEEDM*>*(*)())((::PBYTE)hIl2Cpp + NAJFNKIEEDM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJFNKIEEDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NAJFNKIEEDM* Clone()
		{
			return ((::NAJFNKIEEDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJFNKIEEDM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GPIMMGGCIHA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJFNKIEEDM_GPIMMGGCIHA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAJFNKIEEDM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NAJFNKIEEDM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAJFNKIEEDM*))((::PBYTE)hIl2Cpp + NAJFNKIEEDM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJFNKIEEDM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJFNKIEEDM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NAJFNKIEEDM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJFNKIEEDM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NAJFNKIEEDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAJFNKIEEDM*))((::PBYTE)hIl2Cpp + NAJFNKIEEDM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NAJFNKIEEDM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
