#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIDMLLEGNNN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CIDMLLEGNNN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0A20A0)
#define CIDMLLEGNNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A2340)
#define CIDMLLEGNNN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0A1C20)
#define CIDMLLEGNNN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0A1BE0)
#define CIDMLLEGNNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A1BD0)
#define CIDMLLEGNNN_DPFLPFADJNK_OFFSET UNITYSDK_OFFSET(0x1E0A1C80)
#define CIDMLLEGNNN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0A1D50)
#define CIDMLLEGNNN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0A1CF0)
#define CIDMLLEGNNN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0A1CC0)
#define CIDMLLEGNNN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0A1E40)
#define CIDMLLEGNNN_GGAEMPLONAL_OFFSET UNITYSDK_OFFSET(0x1E0A1CA0)
#define CIDMLLEGNNN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0A1B90)
#define CIDMLLEGNNN_JKLDHNNGNCK_OFFSET UNITYSDK_OFFSET(0x1E0A1C70)
#define CIDMLLEGNNN_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x1E0A1CD0)
#define CIDMLLEGNNN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0A2290)
#define CIDMLLEGNNN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0A2240)
#define CIDMLLEGNNN_MKBLEILBPHI_OFFSET UNITYSDK_OFFSET(0x1E0A1CE0)
#define CIDMLLEGNNN_NHNDECGBGDB_OFFSET UNITYSDK_OFFSET(0x1E0A1C90)
#define CIDMLLEGNNN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0A1CB0)
#define CIDMLLEGNNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0A1BC0)
#define CIDMLLEGNNN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0A1E70)
#define CIDMLLEGNNN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0A1ED0)

inline static constexpr unsigned int CIDMLLEGNNN_TypeDefinitionIndex = 26910;

	class CIDMLLEGNNN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DOIBANHCIIN; // 0x18
		::System::Boolean CDFDONPAJCP; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 IDPMGABNGKO; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::CIDMLLEGNNN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CIDMLLEGNNN*>**)UnitySDK::FromName("", "CIDMLLEGNNN")->GetStaticField(0x16470);
		}

		// static const ::System::Object OOGKNMKNJNI; // 0x0
		// static const ::System::Object MBHJFIABOFK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HBGMNBBBJDO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CIDMLLEGNNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIDMLLEGNNN*))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIDMLLEGNNN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CIDMLLEGNNN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CIDMLLEGNNN*>*(*)())((::PBYTE)hIl2Cpp + CIDMLLEGNNN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CIDMLLEGNNN* Clone()
		{
			return ((::CIDMLLEGNNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_CLONE_OFFSET))(this);
		}

		::System::UInt32 JKLDHNNGNCK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_JKLDHNNGNCK_OFFSET))(this);
		}

		::System::Void DPFLPFADJNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_DPFLPFADJNK_OFFSET))(this, a1);
		}

		::System::UInt32 NHNDECGBGDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_NHNDECGBGDB_OFFSET))(this);
		}

		::System::Void GGAEMPLONAL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_GGAEMPLONAL_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Void MKBLEILBPHI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_MKBLEILBPHI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CIDMLLEGNNN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CIDMLLEGNNN*))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CIDMLLEGNNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIDMLLEGNNN*))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CIDMLLEGNNN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
