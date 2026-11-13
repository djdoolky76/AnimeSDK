#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMHFBLDNPGB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CMHFBLDNPGB_BCFJGOKKHOL_OFFSET UNITYSDK_OFFSET(0x205E8550)
#define CMHFBLDNPGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205E8940)
#define CMHFBLDNPGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x205E8C50)
#define CMHFBLDNPGB_CLONE_OFFSET UNITYSDK_OFFSET(0x205E84C0)
#define CMHFBLDNPGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205E8480)
#define CMHFBLDNPGB_CTOR_OFFSET UNITYSDK_OFFSET(0x205E8470)
#define CMHFBLDNPGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205E8660)
#define CMHFBLDNPGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x205E8570)
#define CMHFBLDNPGB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x205E8540)
#define CMHFBLDNPGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x205E8740)
#define CMHFBLDNPGB_IAKOHDKKOAI_OFFSET UNITYSDK_OFFSET(0x205E8510)
#define CMHFBLDNPGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205E8430)
#define CMHFBLDNPGB_LMGOICEFBPN_OFFSET UNITYSDK_OFFSET(0x205E8520)
#define CMHFBLDNPGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205E8AB0)
#define CMHFBLDNPGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205E8A60)
#define CMHFBLDNPGB_NGBDPDLCCBF_OFFSET UNITYSDK_OFFSET(0x205E8560)
#define CMHFBLDNPGB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x205E8530)
#define CMHFBLDNPGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x205E8460)
#define CMHFBLDNPGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205E8770)
#define CMHFBLDNPGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x205E87D0)

inline static constexpr unsigned int CMHFBLDNPGB_TypeDefinitionIndex = 28349;

	class CMHFBLDNPGB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFIEPBFOMON; // 0x18
		::System::Boolean CKAHNINPCLL; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CMHFBLDNPGB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CMHFBLDNPGB*>**)UnitySDK::FromName("", "CMHFBLDNPGB")->GetStaticField(0x15870);
		}

		// static const ::System::Object ABBONIGHCMB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NLBBKKMIMDO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CMHFBLDNPGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMHFBLDNPGB*))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMHFBLDNPGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CMHFBLDNPGB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CMHFBLDNPGB*>*(*)())((::PBYTE)hIl2Cpp + CMHFBLDNPGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CMHFBLDNPGB* Clone()
		{
			return ((::CMHFBLDNPGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_CLONE_OFFSET))(this);
		}

		::System::UInt32 IAKOHDKKOAI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_IAKOHDKKOAI_OFFSET))(this);
		}

		::System::Void LMGOICEFBPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_LMGOICEFBPN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean BCFJGOKKHOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_BCFJGOKKHOL_OFFSET))(this);
		}

		::System::Void NGBDPDLCCBF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_NGBDPDLCCBF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CMHFBLDNPGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CMHFBLDNPGB*))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CMHFBLDNPGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMHFBLDNPGB*))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CMHFBLDNPGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
