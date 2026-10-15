#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGAAHIBNOBP;
class KHNBFDNKLHE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGAAHIBNOBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E125910)
#define AGAAHIBNOBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E125C00)
#define AGAAHIBNOBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1253C0)
#define AGAAHIBNOBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E125350)
#define AGAAHIBNOBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E125340)
#define AGAAHIBNOBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E125600)
#define AGAAHIBNOBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E125480)
#define AGAAHIBNOBP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E125470)
#define AGAAHIBNOBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E125780)
#define AGAAHIBNOBP_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1E125450)
#define AGAAHIBNOBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E125300)
#define AGAAHIBNOBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E125A60)
#define AGAAHIBNOBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1259E0)
#define AGAAHIBNOBP_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1E125440)
#define AGAAHIBNOBP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E125460)
#define AGAAHIBNOBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E125330)
#define AGAAHIBNOBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1257D0)
#define AGAAHIBNOBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E125830)

	class AGAAHIBNOBP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AGAAHIBNOBP")->GetStaticField(0x2FD20);
		}

		// static const ::System::Object CJDOLCNNPKL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAAHIBNOBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGAAHIBNOBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGAAHIBNOBP*))((::PBYTE)hIl2Cpp + AGAAHIBNOBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGAAHIBNOBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AGAAHIBNOBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAAHIBNOBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGAAHIBNOBP* Clone()
		{
			return ((::AGAAHIBNOBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAAHIBNOBP_CLONE_OFFSET))(this);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAAHIBNOBP_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + AGAAHIBNOBP_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAAHIBNOBP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGAAHIBNOBP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGAAHIBNOBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGAAHIBNOBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGAAHIBNOBP*))((::PBYTE)hIl2Cpp + AGAAHIBNOBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAAHIBNOBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAAHIBNOBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGAAHIBNOBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAAHIBNOBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGAAHIBNOBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGAAHIBNOBP*))((::PBYTE)hIl2Cpp + AGAAHIBNOBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGAAHIBNOBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
