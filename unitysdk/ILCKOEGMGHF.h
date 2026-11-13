#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILCKOEGMGHF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILCKOEGMGHF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x206AFA70)
#define ILCKOEGMGHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x206AFD40)
#define ILCKOEGMGHF_CJHDDIJGMCN_OFFSET UNITYSDK_OFFSET(0x206AF6F0)
#define ILCKOEGMGHF_CLONE_OFFSET UNITYSDK_OFFSET(0x206AF670)
#define ILCKOEGMGHF_CPMIGHNAELL_OFFSET UNITYSDK_OFFSET(0x206AF710)
#define ILCKOEGMGHF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x206AF640)
#define ILCKOEGMGHF_CTOR_OFFSET UNITYSDK_OFFSET(0x206AF630)
#define ILCKOEGMGHF_EOCPEBJNPGB_OFFSET UNITYSDK_OFFSET(0x206AF6E0)
#define ILCKOEGMGHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x206AF830)
#define ILCKOEGMGHF_EQUALS_OFFSET UNITYSDK_OFFSET(0x206AF720)
#define ILCKOEGMGHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x206AF900)
#define ILCKOEGMGHF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x206AF5C0)
#define ILCKOEGMGHF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x206AFBC0)
#define ILCKOEGMGHF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x206AFB80)
#define ILCKOEGMGHF_MIENJDHKKOF_OFFSET UNITYSDK_OFFSET(0x206AF700)
#define ILCKOEGMGHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206AF620)
#define ILCKOEGMGHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x206AF930)
#define ILCKOEGMGHF_WRITETO_OFFSET UNITYSDK_OFFSET(0x206AF990)

inline static constexpr unsigned int ILCKOEGMGHF_TypeDefinitionIndex = 28460;

	class ILCKOEGMGHF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LHDAAABMHPL; // 0x18
		::System::UInt32 KIPJPMDOMPF; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::ILCKOEGMGHF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ILCKOEGMGHF*>**)UnitySDK::FromName("", "ILCKOEGMGHF")->GetStaticField(0x4BF20);
		}

		// static const ::System::Object EPBPHGNEEKM; // 0x0
		// static const ::System::Object FPIPDFJEIAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCKOEGMGHF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILCKOEGMGHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILCKOEGMGHF*))((::PBYTE)hIl2Cpp + ILCKOEGMGHF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILCKOEGMGHF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ILCKOEGMGHF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ILCKOEGMGHF*>*(*)())((::PBYTE)hIl2Cpp + ILCKOEGMGHF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCKOEGMGHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILCKOEGMGHF* Clone()
		{
			return ((::ILCKOEGMGHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCKOEGMGHF_CLONE_OFFSET))(this);
		}

		::System::UInt32 EOCPEBJNPGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCKOEGMGHF_EOCPEBJNPGB_OFFSET))(this);
		}

		::System::Void CJHDDIJGMCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILCKOEGMGHF_CJHDDIJGMCN_OFFSET))(this, a1);
		}

		::System::UInt32 MIENJDHKKOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCKOEGMGHF_MIENJDHKKOF_OFFSET))(this);
		}

		::System::Void CPMIGHNAELL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILCKOEGMGHF_CPMIGHNAELL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILCKOEGMGHF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILCKOEGMGHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILCKOEGMGHF*))((::PBYTE)hIl2Cpp + ILCKOEGMGHF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCKOEGMGHF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCKOEGMGHF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILCKOEGMGHF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCKOEGMGHF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILCKOEGMGHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILCKOEGMGHF*))((::PBYTE)hIl2Cpp + ILCKOEGMGHF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILCKOEGMGHF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
