#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMJHAHOLEGH;
class GCLPBMPOHLI;
class NGNBAKJNPID;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGNBAKJNPID_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB15670)
#define NGNBAKJNPID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB15AE0)
#define NGNBAKJNPID_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB15150)
#define NGNBAKJNPID_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB15070)
#define NGNBAKJNPID_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB15030)
#define NGNBAKJNPID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB15200)
#define NGNBAKJNPID_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB151D0)
#define NGNBAKJNPID_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB151B0)
#define NGNBAKJNPID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB153E0)
#define NGNBAKJNPID_HFMMBLNAKJE_OFFSET UNITYSDK_OFFSET(0x1EB15190)
#define NGNBAKJNPID_JBBAGNCGGFK_OFFSET UNITYSDK_OFFSET(0x1EB15180)
#define NGNBAKJNPID_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB14FF0)
#define NGNBAKJNPID_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB158F0)
#define NGNBAKJNPID_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB157C0)
#define NGNBAKJNPID_NMJDEEKBACE_OFFSET UNITYSDK_OFFSET(0x1EB151C0)
#define NGNBAKJNPID_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB151A0)
#define NGNBAKJNPID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB15020)
#define NGNBAKJNPID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB154A0)
#define NGNBAKJNPID_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB15500)

	class NGNBAKJNPID : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BMJHAHOLEGH*>* CIHFHHGGAON; // 0x10
		::GCLPBMPOHLI* FEEIBHFHKEJ; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_IGPABHLCEFO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NGNBAKJNPID")->GetStaticField(0x5F990);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NGNBAKJNPID")->GetStaticField(0x5F998);
		}

		// static const ::System::Object JJCFIPOKOHO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CCDOCCHIADJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNBAKJNPID_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGNBAKJNPID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGNBAKJNPID*))((::PBYTE)hIl2Cpp + NGNBAKJNPID_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGNBAKJNPID_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NGNBAKJNPID_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNBAKJNPID_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGNBAKJNPID* Clone()
		{
			return ((::NGNBAKJNPID*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNBAKJNPID_CLONE_OFFSET))(this);
		}

		::GCLPBMPOHLI* JBBAGNCGGFK()
		{
			return ((::GCLPBMPOHLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNBAKJNPID_JBBAGNCGGFK_OFFSET))(this);
		}

		::System::Void HFMMBLNAKJE(::GCLPBMPOHLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCLPBMPOHLI*))((::PBYTE)hIl2Cpp + NGNBAKJNPID_HFMMBLNAKJE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNBAKJNPID_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGNBAKJNPID_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BMJHAHOLEGH*>* NMJDEEKBACE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BMJHAHOLEGH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNBAKJNPID_NMJDEEKBACE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGNBAKJNPID_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGNBAKJNPID* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGNBAKJNPID*))((::PBYTE)hIl2Cpp + NGNBAKJNPID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNBAKJNPID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNBAKJNPID_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGNBAKJNPID_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNBAKJNPID_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGNBAKJNPID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGNBAKJNPID*))((::PBYTE)hIl2Cpp + NGNBAKJNPID_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGNBAKJNPID_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
