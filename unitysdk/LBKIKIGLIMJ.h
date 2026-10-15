#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBKIKIGLIMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LBKIKIGLIMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8DDA10)
#define LBKIKIGLIMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8DDD00)
#define LBKIKIGLIMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8DD580)
#define LBKIKIGLIMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8DD4F0)
#define LBKIKIGLIMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DD4A0)
#define LBKIKIGLIMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8DD6E0)
#define LBKIKIGLIMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8DD5E0)
#define LBKIKIGLIMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8DD7D0)
#define LBKIKIGLIMJ_GOLPFFCDICE_OFFSET UNITYSDK_OFFSET(0x1E8DD5C0)
#define LBKIKIGLIMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8DD460)
#define LBKIKIGLIMJ_LKLGELLKFKG_OFFSET UNITYSDK_OFFSET(0x1E8DD5D0)
#define LBKIKIGLIMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8DDB40)
#define LBKIKIGLIMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8DDAF0)
#define LBKIKIGLIMJ_OGMHHLBHKOF_OFFSET UNITYSDK_OFFSET(0x1E8DD5B0)
#define LBKIKIGLIMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8DD490)
#define LBKIKIGLIMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8DD8D0)
#define LBKIKIGLIMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8DD930)

inline static constexpr unsigned int LBKIKIGLIMJ_TypeDefinitionIndex = 32886;

	class LBKIKIGLIMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JCLGAMJBIPD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JCGMPJONLCA; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_APKDIHJLMNP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LBKIKIGLIMJ")->GetStaticField(0x309F0);
		}

		static ::Google::Protobuf::MessageParser_1<::LBKIKIGLIMJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LBKIKIGLIMJ*>**)UnitySDK::FromName("", "LBKIKIGLIMJ")->GetStaticField(0x309F8);
		}

		// static const ::System::Object GAHLJEECCFB; // 0x0
		// static const ::System::Object IDNNPINIKOD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LBKIKIGLIMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBKIKIGLIMJ*))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LBKIKIGLIMJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LBKIKIGLIMJ*>*(*)())((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LBKIKIGLIMJ* Clone()
		{
			return ((::LBKIKIGLIMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OGMHHLBHKOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_OGMHHLBHKOF_OFFSET))(this);
		}

		::System::Void GOLPFFCDICE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_GOLPFFCDICE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LKLGELLKFKG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_LKLGELLKFKG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LBKIKIGLIMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBKIKIGLIMJ*))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LBKIKIGLIMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBKIKIGLIMJ*))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LBKIKIGLIMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
