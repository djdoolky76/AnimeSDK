#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOEOMHPIPKE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DOEOMHPIPKE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4DC570)
#define DOEOMHPIPKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4DC790)
#define DOEOMHPIPKE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4DC1C0)
#define DOEOMHPIPKE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4DC190)
#define DOEOMHPIPKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4DC180)
#define DOEOMHPIPKE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4DC2F0)
#define DOEOMHPIPKE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4DC220)
#define DOEOMHPIPKE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F4DC210)
#define DOEOMHPIPKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F4DC460)
#define DOEOMHPIPKE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F4DC140)
#define DOEOMHPIPKE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4DC630)
#define DOEOMHPIPKE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F4DC600)
#define DOEOMHPIPKE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F4DC200)
#define DOEOMHPIPKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4DC170)
#define DOEOMHPIPKE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4DC490)
#define DOEOMHPIPKE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4DC4F0)

inline static constexpr unsigned int DOEOMHPIPKE_TypeDefinitionIndex = 31195;

	class DOEOMHPIPKE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DOEOMHPIPKE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DOEOMHPIPKE*>**)UnitySDK::FromName("", "DOEOMHPIPKE")->GetStaticField(0x3E570);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEOMHPIPKE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DOEOMHPIPKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOEOMHPIPKE*))((::PBYTE)hIl2Cpp + DOEOMHPIPKE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOEOMHPIPKE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DOEOMHPIPKE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DOEOMHPIPKE*>*(*)())((::PBYTE)hIl2Cpp + DOEOMHPIPKE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEOMHPIPKE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DOEOMHPIPKE* Clone()
		{
			return ((::DOEOMHPIPKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEOMHPIPKE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEOMHPIPKE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DOEOMHPIPKE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOEOMHPIPKE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DOEOMHPIPKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOEOMHPIPKE*))((::PBYTE)hIl2Cpp + DOEOMHPIPKE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEOMHPIPKE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEOMHPIPKE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DOEOMHPIPKE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEOMHPIPKE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DOEOMHPIPKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOEOMHPIPKE*))((::PBYTE)hIl2Cpp + DOEOMHPIPKE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DOEOMHPIPKE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
