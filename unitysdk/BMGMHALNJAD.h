#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMGMHALNJAD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMGMHALNJAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E027100)
#define BMGMHALNJAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E027360)
#define BMGMHALNJAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E01E6A0)
#define BMGMHALNJAD_COMOLMEJBEC_OFFSET UNITYSDK_OFFSET(0x1E026CF0)
#define BMGMHALNJAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E026C20)
#define BMGMHALNJAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E01F6F0)
#define BMGMHALNJAD_DPFLPFADJNK_OFFSET UNITYSDK_OFFSET(0x1E026D20)
#define BMGMHALNJAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E026DC0)
#define BMGMHALNJAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E026D30)
#define BMGMHALNJAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E01EC70)
#define BMGMHALNJAD_GJDHLMPNHIK_OFFSET UNITYSDK_OFFSET(0x1E026CC0)
#define BMGMHALNJAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E026BE0)
#define BMGMHALNJAD_JKLDHNNGNCK_OFFSET UNITYSDK_OFFSET(0x1E026D10)
#define BMGMHALNJAD_KHINOGAEHBI_OFFSET UNITYSDK_OFFSET(0x1E026CE0)
#define BMGMHALNJAD_LLAOGFOBNMA_OFFSET UNITYSDK_OFFSET(0x1E026D00)
#define BMGMHALNJAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E027270)
#define BMGMHALNJAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E01F740)
#define BMGMHALNJAD_OACFKOBFCIN_OFFSET UNITYSDK_OFFSET(0x1E026CD0)
#define BMGMHALNJAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E026C10)
#define BMGMHALNJAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E026EE0)
#define BMGMHALNJAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E026F40)

inline static constexpr unsigned int BMGMHALNJAD_TypeDefinitionIndex = 26876;

	class BMGMHALNJAD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLHOIFJLDCM; // 0x18
		::System::UInt32 MNPCFPKHFAB; // 0x20
		::System::Boolean OCCJMAIFMMI; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 IDPMGABNGKO; // 0x28
		static ::Google::Protobuf::MessageParser_1<::BMGMHALNJAD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BMGMHALNJAD*>**)UnitySDK::FromName("", "BMGMHALNJAD")->GetStaticField(0x505D0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JNLOIKKDOFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BMGMHALNJAD")->GetStaticField(0x505D8);
		}

		// static const ::System::Object INDBKLPEMDP; // 0x0
		// static const ::System::Object PMGMOKACFAP; // 0x0
		// static const ::System::Object MBFLGJHIGPI; // 0x0
		// static const ::System::Object OOGKNMKNJNI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGMHALNJAD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMGMHALNJAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMGMHALNJAD*))((::PBYTE)hIl2Cpp + BMGMHALNJAD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMGMHALNJAD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BMGMHALNJAD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BMGMHALNJAD*>*(*)())((::PBYTE)hIl2Cpp + BMGMHALNJAD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGMHALNJAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMGMHALNJAD* Clone()
		{
			return ((::BMGMHALNJAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGMHALNJAD_CLONE_OFFSET))(this);
		}

		::System::UInt32 GJDHLMPNHIK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGMHALNJAD_GJDHLMPNHIK_OFFSET))(this);
		}

		::System::Void OACFKOBFCIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMGMHALNJAD_OACFKOBFCIN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHINOGAEHBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGMHALNJAD_KHINOGAEHBI_OFFSET))(this);
		}

		::System::Boolean COMOLMEJBEC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGMHALNJAD_COMOLMEJBEC_OFFSET))(this);
		}

		::System::Void LLAOGFOBNMA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMGMHALNJAD_LLAOGFOBNMA_OFFSET))(this, a1);
		}

		::System::UInt32 JKLDHNNGNCK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGMHALNJAD_JKLDHNNGNCK_OFFSET))(this);
		}

		::System::Void DPFLPFADJNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMGMHALNJAD_DPFLPFADJNK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMGMHALNJAD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMGMHALNJAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMGMHALNJAD*))((::PBYTE)hIl2Cpp + BMGMHALNJAD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGMHALNJAD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGMHALNJAD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMGMHALNJAD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGMHALNJAD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMGMHALNJAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMGMHALNJAD*))((::PBYTE)hIl2Cpp + BMGMHALNJAD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMGMHALNJAD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
