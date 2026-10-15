#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCHMHOONEGG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCHMHOONEGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E047420)
#define CCHMHOONEGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0476F0)
#define CCHMHOONEGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E047070)
#define CCHMHOONEGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E047040)
#define CCHMHOONEGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E047030)
#define CCHMHOONEGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0471E0)
#define CCHMHOONEGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E047100)
#define CCHMHOONEGG_GEIDADIACKB_OFFSET UNITYSDK_OFFSET(0x1E0470C0)
#define CCHMHOONEGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0472B0)
#define CCHMHOONEGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E046FF0)
#define CCHMHOONEGG_KKKJPOJHMAG_OFFSET UNITYSDK_OFFSET(0x1E0470F0)
#define CCHMHOONEGG_MDBKBBMLMNI_OFFSET UNITYSDK_OFFSET(0x1E0470D0)
#define CCHMHOONEGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E047570)
#define CCHMHOONEGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E047530)
#define CCHMHOONEGG_MPCLJNBJNNB_OFFSET UNITYSDK_OFFSET(0x1E0470E0)
#define CCHMHOONEGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E047020)
#define CCHMHOONEGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0472E0)
#define CCHMHOONEGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E047340)

inline static constexpr unsigned int CCHMHOONEGG_TypeDefinitionIndex = 34958;

	class CCHMHOONEGG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BOHLIADLMJN; // 0x18
		::System::UInt32 FEHMAAFJAHA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CCHMHOONEGG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CCHMHOONEGG*>**)UnitySDK::FromName("", "CCHMHOONEGG")->GetStaticField(0xCB90);
		}

		// static const ::System::Object EAEDBOGGHCC; // 0x0
		// static const ::System::Object OHKFIOLPPKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHMHOONEGG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCHMHOONEGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCHMHOONEGG*))((::PBYTE)hIl2Cpp + CCHMHOONEGG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCHMHOONEGG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CCHMHOONEGG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CCHMHOONEGG*>*(*)())((::PBYTE)hIl2Cpp + CCHMHOONEGG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHMHOONEGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCHMHOONEGG* Clone()
		{
			return ((::CCHMHOONEGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHMHOONEGG_CLONE_OFFSET))(this);
		}

		::System::UInt32 GEIDADIACKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHMHOONEGG_GEIDADIACKB_OFFSET))(this);
		}

		::System::Void MDBKBBMLMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCHMHOONEGG_MDBKBBMLMNI_OFFSET))(this, a1);
		}

		::System::UInt32 MPCLJNBJNNB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHMHOONEGG_MPCLJNBJNNB_OFFSET))(this);
		}

		::System::Void KKKJPOJHMAG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCHMHOONEGG_KKKJPOJHMAG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCHMHOONEGG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCHMHOONEGG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCHMHOONEGG*))((::PBYTE)hIl2Cpp + CCHMHOONEGG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHMHOONEGG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHMHOONEGG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCHMHOONEGG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHMHOONEGG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCHMHOONEGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCHMHOONEGG*))((::PBYTE)hIl2Cpp + CCHMHOONEGG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCHMHOONEGG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
