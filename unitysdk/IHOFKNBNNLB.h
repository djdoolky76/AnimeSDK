#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHOFKNBNNLB;
class OCBPJLLLJGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IHOFKNBNNLB_AGOAGHCJLAF_OFFSET UNITYSDK_OFFSET(0x1E683290)
#define IHOFKNBNNLB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6837C0)
#define IHOFKNBNNLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E683A50)
#define IHOFKNBNNLB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6831B0)
#define IHOFKNBNNLB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E683130)
#define IHOFKNBNNLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E683120)
#define IHOFKNBNNLB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E683470)
#define IHOFKNBNNLB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6832B0)
#define IHOFKNBNNLB_FLMIAAELNJN_OFFSET UNITYSDK_OFFSET(0x1E6832A0)
#define IHOFKNBNNLB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6835F0)
#define IHOFKNBNNLB_JJAFCGNLFIL_OFFSET UNITYSDK_OFFSET(0x1E683270)
#define IHOFKNBNNLB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6830B0)
#define IHOFKNBNNLB_LDBECDABBDP_OFFSET UNITYSDK_OFFSET(0x1E683280)
#define IHOFKNBNNLB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6838C0)
#define IHOFKNBNNLB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E683820)
#define IHOFKNBNNLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E683110)
#define IHOFKNBNNLB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E683650)
#define IHOFKNBNNLB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6836B0)

inline static constexpr unsigned int IHOFKNBNNLB_TypeDefinitionIndex = 33101;

	class IHOFKNBNNLB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OCBPJLLLJGO* KMMKCDNIOHI; // 0x18
		::System::Boolean DPJDDKCGOLL; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IHOFKNBNNLB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IHOFKNBNNLB*>**)UnitySDK::FromName("", "IHOFKNBNNLB")->GetStaticField(0x4FE50);
		}

		// static const ::System::Object HCFAPBIJHGG; // 0x0
		// static const ::System::Object KIADLIAPJAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOFKNBNNLB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IHOFKNBNNLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHOFKNBNNLB*))((::PBYTE)hIl2Cpp + IHOFKNBNNLB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHOFKNBNNLB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IHOFKNBNNLB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IHOFKNBNNLB*>*(*)())((::PBYTE)hIl2Cpp + IHOFKNBNNLB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOFKNBNNLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IHOFKNBNNLB* Clone()
		{
			return ((::IHOFKNBNNLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOFKNBNNLB_CLONE_OFFSET))(this);
		}

		::OCBPJLLLJGO* JJAFCGNLFIL()
		{
			return ((::OCBPJLLLJGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOFKNBNNLB_JJAFCGNLFIL_OFFSET))(this);
		}

		::System::Void LDBECDABBDP(::OCBPJLLLJGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCBPJLLLJGO*))((::PBYTE)hIl2Cpp + IHOFKNBNNLB_LDBECDABBDP_OFFSET))(this, a1);
		}

		::System::Boolean AGOAGHCJLAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOFKNBNNLB_AGOAGHCJLAF_OFFSET))(this);
		}

		::System::Void FLMIAAELNJN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHOFKNBNNLB_FLMIAAELNJN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IHOFKNBNNLB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IHOFKNBNNLB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHOFKNBNNLB*))((::PBYTE)hIl2Cpp + IHOFKNBNNLB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOFKNBNNLB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOFKNBNNLB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IHOFKNBNNLB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOFKNBNNLB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IHOFKNBNNLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHOFKNBNNLB*))((::PBYTE)hIl2Cpp + IHOFKNBNNLB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IHOFKNBNNLB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
