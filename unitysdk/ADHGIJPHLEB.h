#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADHGIJPHLEB;
class OBIMHNFFLEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ADHGIJPHLEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDE1C00)
#define ADHGIJPHLEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDE1F30)
#define ADHGIJPHLEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDE12B0)
#define ADHGIJPHLEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDE11F0)
#define ADHGIJPHLEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE11A0)
#define ADHGIJPHLEB_DIJBMAOPGOB_OFFSET UNITYSDK_OFFSET(0x1DDE1350)
#define ADHGIJPHLEB_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1DDE1310)
#define ADHGIJPHLEB_ENEBPALECKH_OFFSET UNITYSDK_OFFSET(0x1DDE1320)
#define ADHGIJPHLEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDE13D0)
#define ADHGIJPHLEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDE1370)
#define ADHGIJPHLEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDE1700)
#define ADHGIJPHLEB_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1DDE1340)
#define ADHGIJPHLEB_INAFIFPJOLB_OFFSET UNITYSDK_OFFSET(0x1DDE1360)
#define ADHGIJPHLEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDE1130)
#define ADHGIJPHLEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDE1E20)
#define ADHGIJPHLEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDE1D30)
#define ADHGIJPHLEB_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1DDE1300)
#define ADHGIJPHLEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDE1190)
#define ADHGIJPHLEB_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1DDE1330)
#define ADHGIJPHLEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDE19A0)
#define ADHGIJPHLEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDE1A00)

inline static constexpr unsigned int ADHGIJPHLEB_TypeDefinitionIndex = 25633;

	class ADHGIJPHLEB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::OBIMHNFFLEM*>* NBDHLNFOENM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MJIMFDKFGDE; // 0x20
		::System::Byte _padding0[0x4];
		::System::Double LEOIDKJCJML; // 0x28
		::System::Double BCLKCLDFMOA; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ADHGIJPHLEB")->GetStaticField(0x2B860);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_HCDHMCOEECM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ADHGIJPHLEB")->GetStaticField(0x2B868);
		}

		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object PAJGDCEGIIM; // 0x0
		// static const ::System::Object IBJNBJNDPIK; // 0x0
		// static const ::System::Object PHKNMPELNOL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ADHGIJPHLEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADHGIJPHLEB*))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADHGIJPHLEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ADHGIJPHLEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ADHGIJPHLEB* Clone()
		{
			return ((::ADHGIJPHLEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_CLONE_OFFSET))(this);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OBIMHNFFLEM*>* ENEBPALECKH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OBIMHNFFLEM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_ENEBPALECKH_OFFSET))(this);
		}

		::System::Double PJLEOJKPGAJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::Double DIJBMAOPGOB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_DIJBMAOPGOB_OFFSET))(this);
		}

		::System::Void INAFIFPJOLB(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_INAFIFPJOLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ADHGIJPHLEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ADHGIJPHLEB*))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ADHGIJPHLEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADHGIJPHLEB*))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ADHGIJPHLEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
