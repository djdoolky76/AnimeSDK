#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMFAKLOHCHN_COBABAJBLLO.h"
#include "unitysdk/System/Object.h"
class FMFAKLOHCHN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class AlleyPlacingShip; }
namespace System { class Object; }
namespace System { class String; }

#define FMFAKLOHCHN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3E25F0)
#define FMFAKLOHCHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E2CB0)
#define FMFAKLOHCHN_CJHEALEFOKG_OFFSET UNITYSDK_OFFSET(0x1E3E1DF0)
#define FMFAKLOHCHN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3E1DC0)
#define FMFAKLOHCHN_CPCPCIHKPFK_OFFSET UNITYSDK_OFFSET(0x1E3E1E20)
#define FMFAKLOHCHN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3E1AA0)
#define FMFAKLOHCHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E1A90)
#define FMFAKLOHCHN_DFJPBEOAMMG_OFFSET UNITYSDK_OFFSET(0x1E3E1CE0)
#define FMFAKLOHCHN_EGLNOELNEMD_OFFSET UNITYSDK_OFFSET(0x1E3E1D10)
#define FMFAKLOHCHN_EHLJOHBIGAF_OFFSET UNITYSDK_OFFSET(0x1E3E1E10)
#define FMFAKLOHCHN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3E1E60)
#define FMFAKLOHCHN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3E1E30)
#define FMFAKLOHCHN_FAJNEFOFDLB_OFFSET UNITYSDK_OFFSET(0x1E3E1D90)
#define FMFAKLOHCHN_FHOGDNJKOGB_OFFSET UNITYSDK_OFFSET(0x1E3E1E00)
#define FMFAKLOHCHN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3E21E0)
#define FMFAKLOHCHN_JGAMBLMOOOK_OFFSET UNITYSDK_OFFSET(0x1E3E1C60)
#define FMFAKLOHCHN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3E1A50)
#define FMFAKLOHCHN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3E2A40)
#define FMFAKLOHCHN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3E2840)
#define FMFAKLOHCHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3E1A80)
#define FMFAKLOHCHN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3E2350)
#define FMFAKLOHCHN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3E23B0)

inline static constexpr unsigned int FMFAKLOHCHN_TypeDefinitionIndex = 26220;

	class FMFAKLOHCHN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* CBGCMMFDPND; // 0x18
		::Proto::AlleyPlacingShip* EGHCFNOACJN; // 0x20
		::FMFAKLOHCHN_COBABAJBLLO MBOLMOGEOLA; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FMFAKLOHCHN")->GetStaticField(0x64A80);
		}

		// static const ::System::Object PGCGPAEBAKN; // 0x0
		// static const ::System::Object IKGCBOAGDDH; // 0x0
		// static const ::System::Object HOIAIELDIFE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FMFAKLOHCHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMFAKLOHCHN*))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMFAKLOHCHN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FMFAKLOHCHN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FMFAKLOHCHN* Clone()
		{
			return ((::FMFAKLOHCHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_CLONE_OFFSET))(this);
		}

		::Proto::AlleyPlacingShip* CJHEALEFOKG()
		{
			return ((::Proto::AlleyPlacingShip*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_CJHEALEFOKG_OFFSET))(this);
		}

		::System::Void FHOGDNJKOGB(::Proto::AlleyPlacingShip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AlleyPlacingShip*))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_FHOGDNJKOGB_OFFSET))(this, a1);
		}

		::System::UInt32 JGAMBLMOOOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_JGAMBLMOOOK_OFFSET))(this);
		}

		::System::Void DFJPBEOAMMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_DFJPBEOAMMG_OFFSET))(this, a1);
		}

		::System::UInt32 EGLNOELNEMD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_EGLNOELNEMD_OFFSET))(this);
		}

		::System::Void FAJNEFOFDLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_FAJNEFOFDLB_OFFSET))(this, a1);
		}

		::FMFAKLOHCHN_COBABAJBLLO EHLJOHBIGAF()
		{
			return ((::FMFAKLOHCHN_COBABAJBLLO(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_EHLJOHBIGAF_OFFSET))(this);
		}

		::System::Void CPCPCIHKPFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_CPCPCIHKPFK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FMFAKLOHCHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMFAKLOHCHN*))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FMFAKLOHCHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMFAKLOHCHN*))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FMFAKLOHCHN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
