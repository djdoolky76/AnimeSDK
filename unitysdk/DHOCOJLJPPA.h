#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHOCOJLJPPA;
class MPIMAEMCEFH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DHOCOJLJPPA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20658DB0)
#define DHOCOJLJPPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x20659100)
#define DHOCOJLJPPA_CLONE_OFFSET UNITYSDK_OFFSET(0x20658870)
#define DHOCOJLJPPA_CNGCHFBINBB_OFFSET UNITYSDK_OFFSET(0x20658920)
#define DHOCOJLJPPA_CPMKDLMDKJH_OFFSET UNITYSDK_OFFSET(0x20658910)
#define DHOCOJLJPPA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20658800)
#define DHOCOJLJPPA_CTOR_OFFSET UNITYSDK_OFFSET(0x206587F0)
#define DHOCOJLJPPA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20658AB0)
#define DHOCOJLJPPA_EQUALS_OFFSET UNITYSDK_OFFSET(0x20658930)
#define DHOCOJLJPPA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20658900)
#define DHOCOJLJPPA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20658C30)
#define DHOCOJLJPPA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x206587B0)
#define DHOCOJLJPPA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20658F30)
#define DHOCOJLJPPA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20658E80)
#define DHOCOJLJPPA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x206588F0)
#define DHOCOJLJPPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206587E0)
#define DHOCOJLJPPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20658C70)
#define DHOCOJLJPPA_WRITETO_OFFSET UNITYSDK_OFFSET(0x20658CD0)

inline static constexpr unsigned int DHOCOJLJPPA_TypeDefinitionIndex = 30332;

	class DHOCOJLJPPA : public ::System::Object
	{
	public:
		::MPIMAEMCEFH* ALGFMBPLIMB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DHOCOJLJPPA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DHOCOJLJPPA*>**)UnitySDK::FromName("", "DHOCOJLJPPA")->GetStaticField(0x2AF40);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GEKOGKHOFNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOCOJLJPPA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DHOCOJLJPPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHOCOJLJPPA*))((::PBYTE)hIl2Cpp + DHOCOJLJPPA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHOCOJLJPPA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DHOCOJLJPPA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DHOCOJLJPPA*>*(*)())((::PBYTE)hIl2Cpp + DHOCOJLJPPA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOCOJLJPPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DHOCOJLJPPA* Clone()
		{
			return ((::DHOCOJLJPPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOCOJLJPPA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOCOJLJPPA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHOCOJLJPPA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::MPIMAEMCEFH* CPMKDLMDKJH()
		{
			return ((::MPIMAEMCEFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOCOJLJPPA_CPMKDLMDKJH_OFFSET))(this);
		}

		::System::Void CNGCHFBINBB(::MPIMAEMCEFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPIMAEMCEFH*))((::PBYTE)hIl2Cpp + DHOCOJLJPPA_CNGCHFBINBB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHOCOJLJPPA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DHOCOJLJPPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DHOCOJLJPPA*))((::PBYTE)hIl2Cpp + DHOCOJLJPPA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOCOJLJPPA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOCOJLJPPA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DHOCOJLJPPA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOCOJLJPPA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DHOCOJLJPPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHOCOJLJPPA*))((::PBYTE)hIl2Cpp + DHOCOJLJPPA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DHOCOJLJPPA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
