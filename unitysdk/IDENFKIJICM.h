#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDENFKIJICM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDENFKIJICM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E629C40)
#define IDENFKIJICM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E629E60)
#define IDENFKIJICM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E629890)
#define IDENFKIJICM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E629860)
#define IDENFKIJICM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E629850)
#define IDENFKIJICM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6299C0)
#define IDENFKIJICM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6298F0)
#define IDENFKIJICM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6298E0)
#define IDENFKIJICM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E629B30)
#define IDENFKIJICM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E629810)
#define IDENFKIJICM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E629D00)
#define IDENFKIJICM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E629CD0)
#define IDENFKIJICM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6298D0)
#define IDENFKIJICM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E629840)
#define IDENFKIJICM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E629B60)
#define IDENFKIJICM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E629BC0)

inline static constexpr unsigned int IDENFKIJICM_TypeDefinitionIndex = 30825;

	class IDENFKIJICM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IDENFKIJICM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IDENFKIJICM*>**)UnitySDK::FromName("", "IDENFKIJICM")->GetStaticField(0x45B00);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDENFKIJICM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDENFKIJICM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDENFKIJICM*))((::PBYTE)hIl2Cpp + IDENFKIJICM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDENFKIJICM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IDENFKIJICM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IDENFKIJICM*>*(*)())((::PBYTE)hIl2Cpp + IDENFKIJICM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDENFKIJICM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDENFKIJICM* Clone()
		{
			return ((::IDENFKIJICM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDENFKIJICM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDENFKIJICM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDENFKIJICM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDENFKIJICM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDENFKIJICM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDENFKIJICM*))((::PBYTE)hIl2Cpp + IDENFKIJICM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDENFKIJICM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDENFKIJICM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDENFKIJICM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDENFKIJICM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDENFKIJICM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDENFKIJICM*))((::PBYTE)hIl2Cpp + IDENFKIJICM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDENFKIJICM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
