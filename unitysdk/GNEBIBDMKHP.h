#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNEBIBDMKHP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNEBIBDMKHP_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E4DC090)
#define GNEBIBDMKHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4DC4B0)
#define GNEBIBDMKHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4DC7E0)
#define GNEBIBDMKHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4DC030)
#define GNEBIBDMKHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4DBFF0)
#define GNEBIBDMKHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DBFE0)
#define GNEBIBDMKHP_EJKCIEFJNFH_OFFSET UNITYSDK_OFFSET(0x1E4DC0A0)
#define GNEBIBDMKHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4DC1D0)
#define GNEBIBDMKHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4DC0E0)
#define GNEBIBDMKHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4DC2B0)
#define GNEBIBDMKHP_HBDGDDGFHHJ_OFFSET UNITYSDK_OFFSET(0x1E4DC0B0)
#define GNEBIBDMKHP_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E4DC080)
#define GNEBIBDMKHP_IANLAJHINMC_OFFSET UNITYSDK_OFFSET(0x1E4DC0D0)
#define GNEBIBDMKHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4DBFA0)
#define GNEBIBDMKHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4DC620)
#define GNEBIBDMKHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4DC5D0)
#define GNEBIBDMKHP_OPDJCLIDOCA_OFFSET UNITYSDK_OFFSET(0x1E4DC0C0)
#define GNEBIBDMKHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4DBFD0)
#define GNEBIBDMKHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4DC2E0)
#define GNEBIBDMKHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4DC340)

inline static constexpr unsigned int GNEBIBDMKHP_TypeDefinitionIndex = 32272;

	class GNEBIBDMKHP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OEPOBIODAJH; // 0x18
		::System::Boolean KPIBCBFAPNM; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 IBEBBFIHLLP; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GNEBIBDMKHP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GNEBIBDMKHP*>**)UnitySDK::FromName("", "GNEBIBDMKHP")->GetStaticField(0x22EF0);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object DBGGJHLHDGO; // 0x0
		// static const ::System::Object BPLJLIMECGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNEBIBDMKHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNEBIBDMKHP*))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNEBIBDMKHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GNEBIBDMKHP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GNEBIBDMKHP*>*(*)())((::PBYTE)hIl2Cpp + GNEBIBDMKHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNEBIBDMKHP* Clone()
		{
			return ((::GNEBIBDMKHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean EJKCIEFJNFH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_EJKCIEFJNFH_OFFSET))(this);
		}

		::System::Void HBDGDDGFHHJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_HBDGDDGFHHJ_OFFSET))(this, a1);
		}

		::System::UInt32 OPDJCLIDOCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_OPDJCLIDOCA_OFFSET))(this);
		}

		::System::Void IANLAJHINMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_IANLAJHINMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNEBIBDMKHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNEBIBDMKHP*))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNEBIBDMKHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNEBIBDMKHP*))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNEBIBDMKHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
