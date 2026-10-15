#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBMLOLGEHIM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LBMLOLGEHIM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8DF6C0)
#define LBMLOLGEHIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8DF8E0)
#define LBMLOLGEHIM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8DF310)
#define LBMLOLGEHIM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8DF2E0)
#define LBMLOLGEHIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DF2D0)
#define LBMLOLGEHIM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8DF440)
#define LBMLOLGEHIM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8DF370)
#define LBMLOLGEHIM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8DF360)
#define LBMLOLGEHIM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8DF5B0)
#define LBMLOLGEHIM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8DF290)
#define LBMLOLGEHIM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8DF780)
#define LBMLOLGEHIM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8DF750)
#define LBMLOLGEHIM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8DF350)
#define LBMLOLGEHIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8DF2C0)
#define LBMLOLGEHIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8DF5E0)
#define LBMLOLGEHIM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8DF640)

inline static constexpr unsigned int LBMLOLGEHIM_TypeDefinitionIndex = 27542;

	class LBMLOLGEHIM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LBMLOLGEHIM")->GetStaticField(0x30C90);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMLOLGEHIM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LBMLOLGEHIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBMLOLGEHIM*))((::PBYTE)hIl2Cpp + LBMLOLGEHIM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBMLOLGEHIM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LBMLOLGEHIM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMLOLGEHIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LBMLOLGEHIM* Clone()
		{
			return ((::LBMLOLGEHIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMLOLGEHIM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMLOLGEHIM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBMLOLGEHIM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBMLOLGEHIM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LBMLOLGEHIM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBMLOLGEHIM*))((::PBYTE)hIl2Cpp + LBMLOLGEHIM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMLOLGEHIM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMLOLGEHIM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LBMLOLGEHIM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMLOLGEHIM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LBMLOLGEHIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBMLOLGEHIM*))((::PBYTE)hIl2Cpp + LBMLOLGEHIM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LBMLOLGEHIM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
