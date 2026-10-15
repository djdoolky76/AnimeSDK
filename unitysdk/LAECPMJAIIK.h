#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAECPMJAIIK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LAECPMJAIIK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8CAD50)
#define LAECPMJAIIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8CAF70)
#define LAECPMJAIIK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8CA9A0)
#define LAECPMJAIIK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8CA970)
#define LAECPMJAIIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8CA960)
#define LAECPMJAIIK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8CAAD0)
#define LAECPMJAIIK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8CAA00)
#define LAECPMJAIIK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8CA9F0)
#define LAECPMJAIIK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8CAC40)
#define LAECPMJAIIK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8CA920)
#define LAECPMJAIIK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8CAE10)
#define LAECPMJAIIK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8CADE0)
#define LAECPMJAIIK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8CA9E0)
#define LAECPMJAIIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8CA950)
#define LAECPMJAIIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8CAC70)
#define LAECPMJAIIK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8CACD0)

inline static constexpr unsigned int LAECPMJAIIK_TypeDefinitionIndex = 27100;

	class LAECPMJAIIK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LAECPMJAIIK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LAECPMJAIIK*>**)UnitySDK::FromName("", "LAECPMJAIIK")->GetStaticField(0x2EE40);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAECPMJAIIK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LAECPMJAIIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAECPMJAIIK*))((::PBYTE)hIl2Cpp + LAECPMJAIIK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAECPMJAIIK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LAECPMJAIIK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LAECPMJAIIK*>*(*)())((::PBYTE)hIl2Cpp + LAECPMJAIIK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAECPMJAIIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LAECPMJAIIK* Clone()
		{
			return ((::LAECPMJAIIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAECPMJAIIK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAECPMJAIIK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAECPMJAIIK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LAECPMJAIIK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LAECPMJAIIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAECPMJAIIK*))((::PBYTE)hIl2Cpp + LAECPMJAIIK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAECPMJAIIK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAECPMJAIIK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LAECPMJAIIK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAECPMJAIIK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LAECPMJAIIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAECPMJAIIK*))((::PBYTE)hIl2Cpp + LAECPMJAIIK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LAECPMJAIIK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
