#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCEJNBLDAFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCEJNBLDAFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7C8100)
#define KCEJNBLDAFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C8320)
#define KCEJNBLDAFE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7C7D50)
#define KCEJNBLDAFE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7C7D20)
#define KCEJNBLDAFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C7D10)
#define KCEJNBLDAFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7C7E80)
#define KCEJNBLDAFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7C7DB0)
#define KCEJNBLDAFE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7C7DA0)
#define KCEJNBLDAFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7C7FF0)
#define KCEJNBLDAFE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7C7CD0)
#define KCEJNBLDAFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7C81C0)
#define KCEJNBLDAFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7C8190)
#define KCEJNBLDAFE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7C7D90)
#define KCEJNBLDAFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7C7D00)
#define KCEJNBLDAFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7C8020)
#define KCEJNBLDAFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7C8080)

inline static constexpr unsigned int KCEJNBLDAFE_TypeDefinitionIndex = 27096;

	class KCEJNBLDAFE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KCEJNBLDAFE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KCEJNBLDAFE*>**)UnitySDK::FromName("", "KCEJNBLDAFE")->GetStaticField(0xF1E0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJNBLDAFE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCEJNBLDAFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCEJNBLDAFE*))((::PBYTE)hIl2Cpp + KCEJNBLDAFE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCEJNBLDAFE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KCEJNBLDAFE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KCEJNBLDAFE*>*(*)())((::PBYTE)hIl2Cpp + KCEJNBLDAFE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJNBLDAFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCEJNBLDAFE* Clone()
		{
			return ((::KCEJNBLDAFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJNBLDAFE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJNBLDAFE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCEJNBLDAFE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCEJNBLDAFE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCEJNBLDAFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCEJNBLDAFE*))((::PBYTE)hIl2Cpp + KCEJNBLDAFE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJNBLDAFE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJNBLDAFE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCEJNBLDAFE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJNBLDAFE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCEJNBLDAFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCEJNBLDAFE*))((::PBYTE)hIl2Cpp + KCEJNBLDAFE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCEJNBLDAFE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
