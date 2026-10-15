#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMBDOOHKIBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HMBDOOHKIBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E59D4E0)
#define HMBDOOHKIBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59D700)
#define HMBDOOHKIBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E59D130)
#define HMBDOOHKIBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E59D100)
#define HMBDOOHKIBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59D0F0)
#define HMBDOOHKIBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E59D260)
#define HMBDOOHKIBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E59D190)
#define HMBDOOHKIBC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E59D180)
#define HMBDOOHKIBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E59D3D0)
#define HMBDOOHKIBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E59D0B0)
#define HMBDOOHKIBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E59D5A0)
#define HMBDOOHKIBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E59D570)
#define HMBDOOHKIBC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E59D170)
#define HMBDOOHKIBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E59D0E0)
#define HMBDOOHKIBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E59D400)
#define HMBDOOHKIBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E59D460)

inline static constexpr unsigned int HMBDOOHKIBC_TypeDefinitionIndex = 29444;

	class HMBDOOHKIBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HMBDOOHKIBC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HMBDOOHKIBC*>**)UnitySDK::FromName("", "HMBDOOHKIBC")->GetStaticField(0x396D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDOOHKIBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HMBDOOHKIBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMBDOOHKIBC*))((::PBYTE)hIl2Cpp + HMBDOOHKIBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMBDOOHKIBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HMBDOOHKIBC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HMBDOOHKIBC*>*(*)())((::PBYTE)hIl2Cpp + HMBDOOHKIBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDOOHKIBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HMBDOOHKIBC* Clone()
		{
			return ((::HMBDOOHKIBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDOOHKIBC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDOOHKIBC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMBDOOHKIBC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMBDOOHKIBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HMBDOOHKIBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMBDOOHKIBC*))((::PBYTE)hIl2Cpp + HMBDOOHKIBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDOOHKIBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDOOHKIBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HMBDOOHKIBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDOOHKIBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HMBDOOHKIBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMBDOOHKIBC*))((::PBYTE)hIl2Cpp + HMBDOOHKIBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HMBDOOHKIBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
