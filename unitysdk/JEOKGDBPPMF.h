#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEOKGDBPPMF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEOKGDBPPMF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E721C50)
#define JEOKGDBPPMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E721E70)
#define JEOKGDBPPMF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7218A0)
#define JEOKGDBPPMF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E721870)
#define JEOKGDBPPMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E721860)
#define JEOKGDBPPMF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7219D0)
#define JEOKGDBPPMF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E721900)
#define JEOKGDBPPMF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7218F0)
#define JEOKGDBPPMF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E721B40)
#define JEOKGDBPPMF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E721820)
#define JEOKGDBPPMF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E721D10)
#define JEOKGDBPPMF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E721CE0)
#define JEOKGDBPPMF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7218E0)
#define JEOKGDBPPMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E721850)
#define JEOKGDBPPMF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E721B70)
#define JEOKGDBPPMF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E721BD0)

inline static constexpr unsigned int JEOKGDBPPMF_TypeDefinitionIndex = 26551;

	class JEOKGDBPPMF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JEOKGDBPPMF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JEOKGDBPPMF*>**)UnitySDK::FromName("", "JEOKGDBPPMF")->GetStaticField(0x5F490);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOKGDBPPMF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEOKGDBPPMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEOKGDBPPMF*))((::PBYTE)hIl2Cpp + JEOKGDBPPMF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEOKGDBPPMF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JEOKGDBPPMF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JEOKGDBPPMF*>*(*)())((::PBYTE)hIl2Cpp + JEOKGDBPPMF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOKGDBPPMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEOKGDBPPMF* Clone()
		{
			return ((::JEOKGDBPPMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOKGDBPPMF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOKGDBPPMF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEOKGDBPPMF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEOKGDBPPMF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEOKGDBPPMF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEOKGDBPPMF*))((::PBYTE)hIl2Cpp + JEOKGDBPPMF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOKGDBPPMF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOKGDBPPMF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEOKGDBPPMF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOKGDBPPMF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEOKGDBPPMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEOKGDBPPMF*))((::PBYTE)hIl2Cpp + JEOKGDBPPMF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEOKGDBPPMF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
