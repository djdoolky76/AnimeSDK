#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGECGKEKFNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PGECGKEKFNC_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1DF2CFE0)
#define PGECGKEKFNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF2D360)
#define PGECGKEKFNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2D630)
#define PGECGKEKFNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF2CF60)
#define PGECGKEKFNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF2CF30)
#define PGECGKEKFNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2CF20)
#define PGECGKEKFNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF2D120)
#define PGECGKEKFNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF2D010)
#define PGECGKEKFNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF2D1F0)
#define PGECGKEKFNC_HJNCBOIGDMC_OFFSET UNITYSDK_OFFSET(0x1DF2D000)
#define PGECGKEKFNC_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1DF2CFD0)
#define PGECGKEKFNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF2CEB0)
#define PGECGKEKFNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF2D4B0)
#define PGECGKEKFNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF2D470)
#define PGECGKEKFNC_MHFOGOAKADH_OFFSET UNITYSDK_OFFSET(0x1DF2CFF0)
#define PGECGKEKFNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF2CF10)
#define PGECGKEKFNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF2D220)
#define PGECGKEKFNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF2D280)

inline static constexpr unsigned int PGECGKEKFNC_TypeDefinitionIndex = 29178;

	class PGECGKEKFNC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BHIPOEABFBB; // 0x18
		::System::UInt32 PPNELLDGNPC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PGECGKEKFNC")->GetStaticField(0x3CC90);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		// static const ::System::Object KNEIDLJLJJM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECGKEKFNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PGECGKEKFNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGECGKEKFNC*))((::PBYTE)hIl2Cpp + PGECGKEKFNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGECGKEKFNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PGECGKEKFNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECGKEKFNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PGECGKEKFNC* Clone()
		{
			return ((::PGECGKEKFNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECGKEKFNC_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECGKEKFNC_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGECGKEKFNC_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::UInt32 MHFOGOAKADH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECGKEKFNC_MHFOGOAKADH_OFFSET))(this);
		}

		::System::Void HJNCBOIGDMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGECGKEKFNC_HJNCBOIGDMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGECGKEKFNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PGECGKEKFNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PGECGKEKFNC*))((::PBYTE)hIl2Cpp + PGECGKEKFNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECGKEKFNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECGKEKFNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PGECGKEKFNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGECGKEKFNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PGECGKEKFNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGECGKEKFNC*))((::PBYTE)hIl2Cpp + PGECGKEKFNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PGECGKEKFNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
