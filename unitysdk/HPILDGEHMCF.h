#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPILDGEHMCF;
class JGDOHOFOFOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPILDGEHMCF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5F8C10)
#define HPILDGEHMCF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F8F20)
#define HPILDGEHMCF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5F8690)
#define HPILDGEHMCF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5F8610)
#define HPILDGEHMCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F8600)
#define HPILDGEHMCF_DGNGPKEFJEG_OFFSET UNITYSDK_OFFSET(0x1E5F8750)
#define HPILDGEHMCF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5F88E0)
#define HPILDGEHMCF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5F8760)
#define HPILDGEHMCF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5F8730)
#define HPILDGEHMCF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5F8A60)
#define HPILDGEHMCF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5F85C0)
#define HPILDGEHMCF_KPIKOLEGENM_OFFSET UNITYSDK_OFFSET(0x1E5F8740)
#define HPILDGEHMCF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5F8D90)
#define HPILDGEHMCF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5F8CE0)
#define HPILDGEHMCF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5F8720)
#define HPILDGEHMCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5F85F0)
#define HPILDGEHMCF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5F8AD0)
#define HPILDGEHMCF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5F8B30)

inline static constexpr unsigned int HPILDGEHMCF_TypeDefinitionIndex = 31533;

	class HPILDGEHMCF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JGDOHOFOFOF* MAFPEGFDMGP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HPILDGEHMCF")->GetStaticField(0x51770);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EOMFFNCEAOK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPILDGEHMCF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPILDGEHMCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPILDGEHMCF*))((::PBYTE)hIl2Cpp + HPILDGEHMCF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPILDGEHMCF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HPILDGEHMCF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPILDGEHMCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPILDGEHMCF* Clone()
		{
			return ((::HPILDGEHMCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPILDGEHMCF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPILDGEHMCF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPILDGEHMCF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::JGDOHOFOFOF* KPIKOLEGENM()
		{
			return ((::JGDOHOFOFOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPILDGEHMCF_KPIKOLEGENM_OFFSET))(this);
		}

		::System::Void DGNGPKEFJEG(::JGDOHOFOFOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGDOHOFOFOF*))((::PBYTE)hIl2Cpp + HPILDGEHMCF_DGNGPKEFJEG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPILDGEHMCF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPILDGEHMCF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPILDGEHMCF*))((::PBYTE)hIl2Cpp + HPILDGEHMCF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPILDGEHMCF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPILDGEHMCF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPILDGEHMCF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPILDGEHMCF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPILDGEHMCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPILDGEHMCF*))((::PBYTE)hIl2Cpp + HPILDGEHMCF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPILDGEHMCF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
