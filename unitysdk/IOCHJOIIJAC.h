#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOCHJOIIJAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IOCHJOIIJAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E69D080)
#define IOCHJOIIJAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E69D2E0)
#define IOCHJOIIJAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E69CC90)
#define IOCHJOIIJAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E69CC50)
#define IOCHJOIIJAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E69CC40)
#define IOCHJOIIJAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E69CE00)
#define IOCHJOIIJAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E69CD20)
#define IOCHJOIIJAC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E69CCF0)
#define IOCHJOIIJAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E69CEE0)
#define IOCHJOIIJAC_IPGKPFGFJGA_OFFSET UNITYSDK_OFFSET(0x1E69CD00)
#define IOCHJOIIJAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E69CC00)
#define IOCHJOIIJAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E69D160)
#define IOCHJOIIJAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E69D120)
#define IOCHJOIIJAC_NKPLIJFEIIL_OFFSET UNITYSDK_OFFSET(0x1E69CD10)
#define IOCHJOIIJAC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E69CCE0)
#define IOCHJOIIJAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E69CC30)
#define IOCHJOIIJAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E69CF10)
#define IOCHJOIIJAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E69CF70)

inline static constexpr unsigned int IOCHJOIIJAC_TypeDefinitionIndex = 34439;

	class IOCHJOIIJAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::Boolean GCOBKLPMODP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::IOCHJOIIJAC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IOCHJOIIJAC*>**)UnitySDK::FromName("", "IOCHJOIIJAC")->GetStaticField(0x54330);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EEMOOMGCAMB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHJOIIJAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IOCHJOIIJAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOCHJOIIJAC*))((::PBYTE)hIl2Cpp + IOCHJOIIJAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOCHJOIIJAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IOCHJOIIJAC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IOCHJOIIJAC*>*(*)())((::PBYTE)hIl2Cpp + IOCHJOIIJAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHJOIIJAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IOCHJOIIJAC* Clone()
		{
			return ((::IOCHJOIIJAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHJOIIJAC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHJOIIJAC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IOCHJOIIJAC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean IPGKPFGFJGA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHJOIIJAC_IPGKPFGFJGA_OFFSET))(this);
		}

		::System::Void NKPLIJFEIIL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IOCHJOIIJAC_NKPLIJFEIIL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IOCHJOIIJAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IOCHJOIIJAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOCHJOIIJAC*))((::PBYTE)hIl2Cpp + IOCHJOIIJAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHJOIIJAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHJOIIJAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IOCHJOIIJAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHJOIIJAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IOCHJOIIJAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOCHJOIIJAC*))((::PBYTE)hIl2Cpp + IOCHJOIIJAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IOCHJOIIJAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
