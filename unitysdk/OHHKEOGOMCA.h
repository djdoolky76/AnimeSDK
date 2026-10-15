#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHHKEOGOMCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHHKEOGOMCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE602D0)
#define OHHKEOGOMCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE60520)
#define OHHKEOGOMCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE5FF40)
#define OHHKEOGOMCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE5FED0)
#define OHHKEOGOMCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5FEA0)
#define OHHKEOGOMCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE600C0)
#define OHHKEOGOMCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE5FFD0)
#define OHHKEOGOMCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE601B0)
#define OHHKEOGOMCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE5FE60)
#define OHHKEOGOMCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE60390)
#define OHHKEOGOMCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE60340)
#define OHHKEOGOMCA_NJOLPHBBMEA_OFFSET UNITYSDK_OFFSET(0x1DE5FFC0)
#define OHHKEOGOMCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE5FE90)
#define OHHKEOGOMCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE601F0)
#define OHHKEOGOMCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE60250)

	class OHHKEOGOMCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* BPKJDEGKECP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OHHKEOGOMCA")->GetStaticField(0x1A8B0);
		}

		static ::System::Object** StaticGet_HEGMHPIKOOA()
		{
			return (::System::Object**)UnitySDK::FromName("", "OHHKEOGOMCA")->GetStaticField(0x1A8B8);
		}

		// static const ::System::Object KKIOOJPEPJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHHKEOGOMCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHHKEOGOMCA*))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHHKEOGOMCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OHHKEOGOMCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHHKEOGOMCA* Clone()
		{
			return ((::OHHKEOGOMCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* NJOLPHBBMEA()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_NJOLPHBBMEA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHHKEOGOMCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHHKEOGOMCA*))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHHKEOGOMCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHHKEOGOMCA*))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHHKEOGOMCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
