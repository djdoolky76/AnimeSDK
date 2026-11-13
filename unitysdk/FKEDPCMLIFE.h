#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKEDPCMLIFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FKEDPCMLIFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE31100)
#define FKEDPCMLIFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE31350)
#define FKEDPCMLIFE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE30D70)
#define FKEDPCMLIFE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE30D00)
#define FKEDPCMLIFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE30CD0)
#define FKEDPCMLIFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE30EF0)
#define FKEDPCMLIFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE30E00)
#define FKEDPCMLIFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE30FE0)
#define FKEDPCMLIFE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE30C90)
#define FKEDPCMLIFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE311C0)
#define FKEDPCMLIFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE31170)
#define FKEDPCMLIFE_NDAPACJBACF_OFFSET UNITYSDK_OFFSET(0x1FE30DF0)
#define FKEDPCMLIFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE30CC0)
#define FKEDPCMLIFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE31020)
#define FKEDPCMLIFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE31080)

inline static constexpr unsigned int FKEDPCMLIFE_TypeDefinitionIndex = 34132;

	class FKEDPCMLIFE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* AKLHEPFBCDC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::System::Object** StaticGet_PMNNDDIOPOM()
		{
			return (::System::Object**)UnitySDK::FromName("", "FKEDPCMLIFE")->GetStaticField(0x47E90);
		}

		static ::Google::Protobuf::MessageParser_1<::FKEDPCMLIFE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FKEDPCMLIFE*>**)UnitySDK::FromName("", "FKEDPCMLIFE")->GetStaticField(0x47E98);
		}

		// static const ::System::Object LLDBOFIPFJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEDPCMLIFE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FKEDPCMLIFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKEDPCMLIFE*))((::PBYTE)hIl2Cpp + FKEDPCMLIFE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKEDPCMLIFE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FKEDPCMLIFE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FKEDPCMLIFE*>*(*)())((::PBYTE)hIl2Cpp + FKEDPCMLIFE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEDPCMLIFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FKEDPCMLIFE* Clone()
		{
			return ((::FKEDPCMLIFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEDPCMLIFE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* NDAPACJBACF()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEDPCMLIFE_NDAPACJBACF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKEDPCMLIFE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FKEDPCMLIFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKEDPCMLIFE*))((::PBYTE)hIl2Cpp + FKEDPCMLIFE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEDPCMLIFE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEDPCMLIFE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FKEDPCMLIFE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEDPCMLIFE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FKEDPCMLIFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKEDPCMLIFE*))((::PBYTE)hIl2Cpp + FKEDPCMLIFE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FKEDPCMLIFE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
