#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMLOJKGMBMC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JMLOJKGMBMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E761E00)
#define JMLOJKGMBMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E762020)
#define JMLOJKGMBMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E761A50)
#define JMLOJKGMBMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E761A20)
#define JMLOJKGMBMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E761A10)
#define JMLOJKGMBMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E761B80)
#define JMLOJKGMBMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E761AB0)
#define JMLOJKGMBMC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E761AA0)
#define JMLOJKGMBMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E761CF0)
#define JMLOJKGMBMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7619D0)
#define JMLOJKGMBMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E761EC0)
#define JMLOJKGMBMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E761E90)
#define JMLOJKGMBMC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E761A90)
#define JMLOJKGMBMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E761A00)
#define JMLOJKGMBMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E761D20)
#define JMLOJKGMBMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E761D80)

inline static constexpr unsigned int JMLOJKGMBMC_TypeDefinitionIndex = 27128;

	class JMLOJKGMBMC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JMLOJKGMBMC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JMLOJKGMBMC*>**)UnitySDK::FromName("", "JMLOJKGMBMC")->GetStaticField(0x65430);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLOJKGMBMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JMLOJKGMBMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMLOJKGMBMC*))((::PBYTE)hIl2Cpp + JMLOJKGMBMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMLOJKGMBMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JMLOJKGMBMC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JMLOJKGMBMC*>*(*)())((::PBYTE)hIl2Cpp + JMLOJKGMBMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLOJKGMBMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JMLOJKGMBMC* Clone()
		{
			return ((::JMLOJKGMBMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLOJKGMBMC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLOJKGMBMC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JMLOJKGMBMC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMLOJKGMBMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JMLOJKGMBMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JMLOJKGMBMC*))((::PBYTE)hIl2Cpp + JMLOJKGMBMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLOJKGMBMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLOJKGMBMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JMLOJKGMBMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLOJKGMBMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JMLOJKGMBMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMLOJKGMBMC*))((::PBYTE)hIl2Cpp + JMLOJKGMBMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JMLOJKGMBMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
