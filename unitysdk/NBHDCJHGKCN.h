#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBHDCJHGKCN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBHDCJHGKCN_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1EAD17E0)
#define NBHDCJHGKCN_BEPKKOHEOGL_OFFSET UNITYSDK_OFFSET(0x1EAD17F0)
#define NBHDCJHGKCN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAD1B70)
#define NBHDCJHGKCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD1F40)
#define NBHDCJHGKCN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAD1750)
#define NBHDCJHGKCN_CMPAPOLKDMI_OFFSET UNITYSDK_OFFSET(0x1EAD1800)
#define NBHDCJHGKCN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAD1710)
#define NBHDCJHGKCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD1700)
#define NBHDCJHGKCN_EALOAPAKGPL_OFFSET UNITYSDK_OFFSET(0x1EAD1820)
#define NBHDCJHGKCN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAD18B0)
#define NBHDCJHGKCN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAD1830)
#define NBHDCJHGKCN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAD1990)
#define NBHDCJHGKCN_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1EAD17D0)
#define NBHDCJHGKCN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAD1690)
#define NBHDCJHGKCN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAD1DA0)
#define NBHDCJHGKCN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAD1D50)
#define NBHDCJHGKCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAD16F0)
#define NBHDCJHGKCN_POCILFFLDOH_OFFSET UNITYSDK_OFFSET(0x1EAD1810)
#define NBHDCJHGKCN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAD19D0)
#define NBHDCJHGKCN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAD1A30)

	class NBHDCJHGKCN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		::System::UInt32 BMGMACIBMFH; // 0x1C
		::System::UInt64 GODIGICNHBG; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NBHDCJHGKCN")->GetStaticField(0x112B0);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object FPEDPMAHHND; // 0x0
		// static const ::System::Object LICENIHDDLB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBHDCJHGKCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBHDCJHGKCN*))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBHDCJHGKCN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NBHDCJHGKCN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBHDCJHGKCN* Clone()
		{
			return ((::NBHDCJHGKCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::UInt32 BEPKKOHEOGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_BEPKKOHEOGL_OFFSET))(this);
		}

		::System::Void CMPAPOLKDMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_CMPAPOLKDMI_OFFSET))(this, a1);
		}

		::System::UInt64 POCILFFLDOH()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_POCILFFLDOH_OFFSET))(this);
		}

		::System::Void EALOAPAKGPL(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_EALOAPAKGPL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBHDCJHGKCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBHDCJHGKCN*))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBHDCJHGKCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBHDCJHGKCN*))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBHDCJHGKCN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
