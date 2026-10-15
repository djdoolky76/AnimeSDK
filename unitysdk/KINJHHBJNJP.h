#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KINJHHBJNJP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KINJHHBJNJP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E837700)
#define KINJHHBJNJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E837A30)
#define KINJHHBJNJP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E837100)
#define KINJHHBJNJP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8370C0)
#define KINJHHBJNJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8370B0)
#define KINJHHBJNJP_EGKLFHBCGCB_OFFSET UNITYSDK_OFFSET(0x1E8371A0)
#define KINJHHBJNJP_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1E8371D0)
#define KINJHHBJNJP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E837240)
#define KINJHHBJNJP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8371E0)
#define KINJHHBJNJP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E837430)
#define KINJHHBJNJP_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1E837190)
#define KINJHHBJNJP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E837040)
#define KINJHHBJNJP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E837890)
#define KINJHHBJNJP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E837830)
#define KINJHHBJNJP_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1E8371C0)
#define KINJHHBJNJP_ODCGOFNBLDI_OFFSET UNITYSDK_OFFSET(0x1E8371B0)
#define KINJHHBJNJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8370A0)
#define KINJHHBJNJP_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1E837180)
#define KINJHHBJNJP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E837550)
#define KINJHHBJNJP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8375B0)

inline static constexpr unsigned int KINJHHBJNJP_TypeDefinitionIndex = 29623;

	class KINJHHBJNJP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MJIMFDKFGDE; // 0x18
		::System::UInt32 HOKFPGEEKED; // 0x1C
		::System::Double BCLKCLDFMOA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KINJHHBJNJP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KINJHHBJNJP*>**)UnitySDK::FromName("", "KINJHHBJNJP")->GetStaticField(0x13FB0);
		}

		// static const ::System::Object IBJNBJNDPIK; // 0x0
		// static const ::System::Object OIFLIDHFDOF; // 0x0
		// static const ::System::Object MJJGNBCFCOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJHHBJNJP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KINJHHBJNJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KINJHHBJNJP*))((::PBYTE)hIl2Cpp + KINJHHBJNJP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KINJHHBJNJP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KINJHHBJNJP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KINJHHBJNJP*>*(*)())((::PBYTE)hIl2Cpp + KINJHHBJNJP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJHHBJNJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KINJHHBJNJP* Clone()
		{
			return ((::KINJHHBJNJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJHHBJNJP_CLONE_OFFSET))(this);
		}

		::System::Double PJLEOJKPGAJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJHHBJNJP_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + KINJHHBJNJP_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::UInt32 EGKLFHBCGCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJHHBJNJP_EGKLFHBCGCB_OFFSET))(this);
		}

		::System::Void ODCGOFNBLDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KINJHHBJNJP_ODCGOFNBLDI_OFFSET))(this, a1);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJHHBJNJP_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KINJHHBJNJP_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KINJHHBJNJP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KINJHHBJNJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KINJHHBJNJP*))((::PBYTE)hIl2Cpp + KINJHHBJNJP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJHHBJNJP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJHHBJNJP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KINJHHBJNJP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJHHBJNJP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KINJHHBJNJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KINJHHBJNJP*))((::PBYTE)hIl2Cpp + KINJHHBJNJP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KINJHHBJNJP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
