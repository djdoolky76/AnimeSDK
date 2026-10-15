#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJCFNEPJKDM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HJCFNEPJKDM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5A4360)
#define HJCFNEPJKDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A4620)
#define HJCFNEPJKDM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5A3EE0)
#define HJCFNEPJKDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5A3E50)
#define HJCFNEPJKDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A3E00)
#define HJCFNEPJKDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5A4060)
#define HJCFNEPJKDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5A3F40)
#define HJCFNEPJKDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5A4150)
#define HJCFNEPJKDM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5A3D90)
#define HJCFNEPJKDM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5A4450)
#define HJCFNEPJKDM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5A4400)
#define HJCFNEPJKDM_NNDMNIKGGOG_OFFSET UNITYSDK_OFFSET(0x1E5A3F30)
#define HJCFNEPJKDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5A3DF0)
#define HJCFNEPJKDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5A4250)
#define HJCFNEPJKDM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5A42B0)

inline static constexpr unsigned int HJCFNEPJKDM_TypeDefinitionIndex = 29151;

	class HJCFNEPJKDM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NHPNIPLOGCO; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HJCFNEPJKDM")->GetStaticField(0x3F230);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_AOPIKFPPHMO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HJCFNEPJKDM")->GetStaticField(0x3F238);
		}

		// static const ::System::Object FADDFLLOCON; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCFNEPJKDM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HJCFNEPJKDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJCFNEPJKDM*))((::PBYTE)hIl2Cpp + HJCFNEPJKDM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJCFNEPJKDM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HJCFNEPJKDM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCFNEPJKDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HJCFNEPJKDM* Clone()
		{
			return ((::HJCFNEPJKDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCFNEPJKDM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NNDMNIKGGOG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCFNEPJKDM_NNDMNIKGGOG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJCFNEPJKDM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HJCFNEPJKDM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HJCFNEPJKDM*))((::PBYTE)hIl2Cpp + HJCFNEPJKDM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCFNEPJKDM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCFNEPJKDM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HJCFNEPJKDM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCFNEPJKDM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HJCFNEPJKDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJCFNEPJKDM*))((::PBYTE)hIl2Cpp + HJCFNEPJKDM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HJCFNEPJKDM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
