#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMKNANGPDGH;
class OFFMDBMMNFM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFFMDBMMNFM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE15ED0)
#define OFFMDBMMNFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE161D0)
#define OFFMDBMMNFM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE15A50)
#define OFFMDBMMNFM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE159A0)
#define OFFMDBMMNFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE15950)
#define OFFMDBMMNFM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE15C30)
#define OFFMDBMMNFM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE15AB0)
#define OFFMDBMMNFM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE15D50)
#define OFFMDBMMNFM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE158E0)
#define OFFMDBMMNFM_LCKKGPFEKHM_OFFSET UNITYSDK_OFFSET(0x1DE15AA0)
#define OFFMDBMMNFM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE16010)
#define OFFMDBMMNFM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE15F70)
#define OFFMDBMMNFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE15940)
#define OFFMDBMMNFM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE15DC0)
#define OFFMDBMMNFM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE15E20)

inline static constexpr unsigned int OFFMDBMMNFM_TypeDefinitionIndex = 29055;

	class OFFMDBMMNFM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BMKNANGPDGH*>* MDELKGNPIOF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OFFMDBMMNFM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OFFMDBMMNFM*>**)UnitySDK::FromName("", "OFFMDBMMNFM")->GetStaticField(0x16660);
		}

		static ::Google::Protobuf::FieldCodec_1<::BMKNANGPDGH*>** StaticGet_GAINFCCDPFB()
		{
			return (::Google::Protobuf::FieldCodec_1<::BMKNANGPDGH*>**)UnitySDK::FromName("", "OFFMDBMMNFM")->GetStaticField(0x16668);
		}

		// static const ::System::Object EFEMONKDOCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMDBMMNFM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFFMDBMMNFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFFMDBMMNFM*))((::PBYTE)hIl2Cpp + OFFMDBMMNFM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFFMDBMMNFM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OFFMDBMMNFM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OFFMDBMMNFM*>*(*)())((::PBYTE)hIl2Cpp + OFFMDBMMNFM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMDBMMNFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFFMDBMMNFM* Clone()
		{
			return ((::OFFMDBMMNFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMDBMMNFM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BMKNANGPDGH*>* LCKKGPFEKHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BMKNANGPDGH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMDBMMNFM_LCKKGPFEKHM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFFMDBMMNFM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFFMDBMMNFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFFMDBMMNFM*))((::PBYTE)hIl2Cpp + OFFMDBMMNFM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMDBMMNFM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMDBMMNFM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFFMDBMMNFM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMDBMMNFM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFFMDBMMNFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFFMDBMMNFM*))((::PBYTE)hIl2Cpp + OFFMDBMMNFM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFFMDBMMNFM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
