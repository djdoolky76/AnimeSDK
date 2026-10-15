#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DACCNAFGHFJ;
class KCLHMJHIDOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DACCNAFGHFJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E14BEE0)
#define DACCNAFGHFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E14C180)
#define DACCNAFGHFJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E14B820)
#define DACCNAFGHFJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E14B790)
#define DACCNAFGHFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14B780)
#define DACCNAFGHFJ_EDJOMKNMIAP_OFFSET UNITYSDK_OFFSET(0x1E14B910)
#define DACCNAFGHFJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E14BAC0)
#define DACCNAFGHFJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E14B920)
#define DACCNAFGHFJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E14BD90)
#define DACCNAFGHFJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E14B710)
#define DACCNAFGHFJ_LEALEBDELCO_OFFSET UNITYSDK_OFFSET(0x1E14B900)
#define DACCNAFGHFJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E14BFF0)
#define DACCNAFGHFJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E14BF40)
#define DACCNAFGHFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E14B770)
#define DACCNAFGHFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E14BDF0)
#define DACCNAFGHFJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E14BE50)

inline static constexpr unsigned int DACCNAFGHFJ_TypeDefinitionIndex = 28335;

	class DACCNAFGHFJ : public ::System::Object
	{
	public:
		::KCLHMJHIDOB* CIDAEJPACKG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DACCNAFGHFJ")->GetStaticField(0x23770);
		}

		// static const ::System::Object LKDKMGEDNKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACCNAFGHFJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DACCNAFGHFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DACCNAFGHFJ*))((::PBYTE)hIl2Cpp + DACCNAFGHFJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DACCNAFGHFJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DACCNAFGHFJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACCNAFGHFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DACCNAFGHFJ* Clone()
		{
			return ((::DACCNAFGHFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACCNAFGHFJ_CLONE_OFFSET))(this);
		}

		::KCLHMJHIDOB* LEALEBDELCO()
		{
			return ((::KCLHMJHIDOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACCNAFGHFJ_LEALEBDELCO_OFFSET))(this);
		}

		::System::Void EDJOMKNMIAP(::KCLHMJHIDOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCLHMJHIDOB*))((::PBYTE)hIl2Cpp + DACCNAFGHFJ_EDJOMKNMIAP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DACCNAFGHFJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DACCNAFGHFJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DACCNAFGHFJ*))((::PBYTE)hIl2Cpp + DACCNAFGHFJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DACCNAFGHFJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACCNAFGHFJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DACCNAFGHFJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DACCNAFGHFJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DACCNAFGHFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DACCNAFGHFJ*))((::PBYTE)hIl2Cpp + DACCNAFGHFJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DACCNAFGHFJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
