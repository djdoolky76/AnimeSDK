#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EINKHFKDCCD;
class LLONJLACLDH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLONJLACLDH_AOFAMJMIOCN_OFFSET UNITYSDK_OFFSET(0x1E99F4C0)
#define LLONJLACLDH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E99F960)
#define LLONJLACLDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E99FCC0)
#define LLONJLACLDH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E99F420)
#define LLONJLACLDH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E99F3B0)
#define LLONJLACLDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E99F3A0)
#define LLONJLACLDH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E99F660)
#define LLONJLACLDH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E99F4E0)
#define LLONJLACLDH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E99F4B0)
#define LLONJLACLDH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E99F7E0)
#define LLONJLACLDH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E99F360)
#define LLONJLACLDH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E99FAE0)
#define LLONJLACLDH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E99FA30)
#define LLONJLACLDH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E99F4A0)
#define LLONJLACLDH_PAIFLDEKLKL_OFFSET UNITYSDK_OFFSET(0x1E99F4D0)
#define LLONJLACLDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E99F390)
#define LLONJLACLDH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E99F820)
#define LLONJLACLDH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E99F880)

inline static constexpr unsigned int LLONJLACLDH_TypeDefinitionIndex = 34459;

	class LLONJLACLDH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EINKHFKDCCD* MHNBLPIPJFB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LLONJLACLDH")->GetStaticField(0x4C580);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BDDLABJNOIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLONJLACLDH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LLONJLACLDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLONJLACLDH*))((::PBYTE)hIl2Cpp + LLONJLACLDH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLONJLACLDH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LLONJLACLDH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLONJLACLDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LLONJLACLDH* Clone()
		{
			return ((::LLONJLACLDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLONJLACLDH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLONJLACLDH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLONJLACLDH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::EINKHFKDCCD* AOFAMJMIOCN()
		{
			return ((::EINKHFKDCCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLONJLACLDH_AOFAMJMIOCN_OFFSET))(this);
		}

		::System::Void PAIFLDEKLKL(::EINKHFKDCCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EINKHFKDCCD*))((::PBYTE)hIl2Cpp + LLONJLACLDH_PAIFLDEKLKL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLONJLACLDH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LLONJLACLDH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLONJLACLDH*))((::PBYTE)hIl2Cpp + LLONJLACLDH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLONJLACLDH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLONJLACLDH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LLONJLACLDH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLONJLACLDH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LLONJLACLDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLONJLACLDH*))((::PBYTE)hIl2Cpp + LLONJLACLDH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LLONJLACLDH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
