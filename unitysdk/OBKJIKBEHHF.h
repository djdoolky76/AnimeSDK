#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDFGBPHEPDI.h"
#include "unitysdk/System/Object.h"
class OBKJIKBEHHF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBKJIKBEHHF_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x1EB85010)
#define OBKJIKBEHHF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB85360)
#define OBKJIKBEHHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB85670)
#define OBKJIKBEHHF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB84FA0)
#define OBKJIKBEHHF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB84F70)
#define OBKJIKBEHHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB84F60)
#define OBKJIKBEHHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB85110)
#define OBKJIKBEHHF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB85030)
#define OBKJIKBEHHF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB85000)
#define OBKJIKBEHHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB851E0)
#define OBKJIKBEHHF_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0x1EB85020)
#define OBKJIKBEHHF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB84F20)
#define OBKJIKBEHHF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB854F0)
#define OBKJIKBEHHF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB854B0)
#define OBKJIKBEHHF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB84FF0)
#define OBKJIKBEHHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB84F50)
#define OBKJIKBEHHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB85210)
#define OBKJIKBEHHF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB85270)

inline static constexpr unsigned int OBKJIKBEHHF_TypeDefinitionIndex = 32544;

	class OBKJIKBEHHF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::BDFGBPHEPDI CLADFMOEPCK; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OBKJIKBEHHF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OBKJIKBEHHF*>**)UnitySDK::FromName("", "OBKJIKBEHHF")->GetStaticField(0x10550);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MIPCBMDOFEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKJIKBEHHF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBKJIKBEHHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBKJIKBEHHF*))((::PBYTE)hIl2Cpp + OBKJIKBEHHF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBKJIKBEHHF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OBKJIKBEHHF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OBKJIKBEHHF*>*(*)())((::PBYTE)hIl2Cpp + OBKJIKBEHHF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKJIKBEHHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBKJIKBEHHF* Clone()
		{
			return ((::OBKJIKBEHHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKJIKBEHHF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKJIKBEHHF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBKJIKBEHHF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::BDFGBPHEPDI BGDKFHEBDFJ()
		{
			return ((::BDFGBPHEPDI(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKJIKBEHHF_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void HEHJAJFJJMP(::BDFGBPHEPDI a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDFGBPHEPDI))((::PBYTE)hIl2Cpp + OBKJIKBEHHF_HEHJAJFJJMP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBKJIKBEHHF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBKJIKBEHHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBKJIKBEHHF*))((::PBYTE)hIl2Cpp + OBKJIKBEHHF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKJIKBEHHF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKJIKBEHHF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBKJIKBEHHF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKJIKBEHHF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBKJIKBEHHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBKJIKBEHHF*))((::PBYTE)hIl2Cpp + OBKJIKBEHHF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBKJIKBEHHF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
