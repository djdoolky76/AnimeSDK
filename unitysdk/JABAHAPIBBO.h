#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLEDCMIOIPF;
class JABAHAPIBBO;
class MPIMAEMCEFH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JABAHAPIBBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6EA910)
#define JABAHAPIBBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6EAD30)
#define JABAHAPIBBO_CHJDPHDGMBD_OFFSET UNITYSDK_OFFSET(0x1E6EA270)
#define JABAHAPIBBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6EA1B0)
#define JABAHAPIBBO_CNGCHFBINBB_OFFSET UNITYSDK_OFFSET(0x1E6EA260)
#define JABAHAPIBBO_CPMKDLMDKJH_OFFSET UNITYSDK_OFFSET(0x1E6EA250)
#define JABAHAPIBBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6EA120)
#define JABAHAPIBBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6EA110)
#define JABAHAPIBBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6EA4E0)
#define JABAHAPIBBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6EA2B0)
#define JABAHAPIBBO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6EA2A0)
#define JABAHAPIBBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6EA710)
#define JABAHAPIBBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6EA0D0)
#define JABAHAPIBBO_KFEEOKFJILG_OFFSET UNITYSDK_OFFSET(0x1E6EA280)
#define JABAHAPIBBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6EAB10)
#define JABAHAPIBBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6EAA20)
#define JABAHAPIBBO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6EA290)
#define JABAHAPIBBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6EA100)
#define JABAHAPIBBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6EA770)
#define JABAHAPIBBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6EA7D0)

	class JABAHAPIBBO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CLEDCMIOIPF* OKBMHHFOEMO; // 0x18
		::MPIMAEMCEFH* ALGFMBPLIMB; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JABAHAPIBBO")->GetStaticField(0x5BA70);
		}

		// static const ::System::Object GEKOGKHOFNG; // 0x0
		// static const ::System::Object PHPIFEOCONP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JABAHAPIBBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JABAHAPIBBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JABAHAPIBBO*))((::PBYTE)hIl2Cpp + JABAHAPIBBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JABAHAPIBBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JABAHAPIBBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABAHAPIBBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JABAHAPIBBO* Clone()
		{
			return ((::JABAHAPIBBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABAHAPIBBO_CLONE_OFFSET))(this);
		}

		::MPIMAEMCEFH* CPMKDLMDKJH()
		{
			return ((::MPIMAEMCEFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABAHAPIBBO_CPMKDLMDKJH_OFFSET))(this);
		}

		::System::Void CNGCHFBINBB(::MPIMAEMCEFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPIMAEMCEFH*))((::PBYTE)hIl2Cpp + JABAHAPIBBO_CNGCHFBINBB_OFFSET))(this, a1);
		}

		::CLEDCMIOIPF* CHJDPHDGMBD()
		{
			return ((::CLEDCMIOIPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABAHAPIBBO_CHJDPHDGMBD_OFFSET))(this);
		}

		::System::Void KFEEOKFJILG(::CLEDCMIOIPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLEDCMIOIPF*))((::PBYTE)hIl2Cpp + JABAHAPIBBO_KFEEOKFJILG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JABAHAPIBBO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JABAHAPIBBO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JABAHAPIBBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JABAHAPIBBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JABAHAPIBBO*))((::PBYTE)hIl2Cpp + JABAHAPIBBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JABAHAPIBBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABAHAPIBBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JABAHAPIBBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JABAHAPIBBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JABAHAPIBBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JABAHAPIBBO*))((::PBYTE)hIl2Cpp + JABAHAPIBBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JABAHAPIBBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
