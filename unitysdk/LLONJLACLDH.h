#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EINKHFKDCCD;
class LLONJLACLDH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLONJLACLDH_AOFAMJMIOCN_OFFSET UNITYSDK_OFFSET(0x1E971E60)
#define LLONJLACLDH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E972300)
#define LLONJLACLDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E972660)
#define LLONJLACLDH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E971DC0)
#define LLONJLACLDH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E971D50)
#define LLONJLACLDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E971D40)
#define LLONJLACLDH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E972000)
#define LLONJLACLDH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E971E80)
#define LLONJLACLDH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E971E50)
#define LLONJLACLDH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E972180)
#define LLONJLACLDH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E971D00)
#define LLONJLACLDH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E972480)
#define LLONJLACLDH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9723D0)
#define LLONJLACLDH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E971E40)
#define LLONJLACLDH_PAIFLDEKLKL_OFFSET UNITYSDK_OFFSET(0x1E971E70)
#define LLONJLACLDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E971D30)
#define LLONJLACLDH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9721C0)
#define LLONJLACLDH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E972220)

inline static constexpr unsigned int LLONJLACLDH_TypeDefinitionIndex = 34459;

	class LLONJLACLDH : public ::System::Object
	{
	public:
		::EINKHFKDCCD* MHNBLPIPJFB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LLONJLACLDH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LLONJLACLDH*>**)UnitySDK::FromName("", "LLONJLACLDH")->GetStaticField(0x3D060);
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

		static ::Google::Protobuf::MessageParser_1<::LLONJLACLDH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LLONJLACLDH*>*(*)())((::PBYTE)hIl2Cpp + LLONJLACLDH_JJGHOBBFNJD_OFFSET))();
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
