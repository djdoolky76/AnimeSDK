#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFFDMPOCAIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFFDMPOCAIP_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E4678A0)
#define GFFDMPOCAIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E467C60)
#define GFFDMPOCAIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E467F80)
#define GFFDMPOCAIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E467810)
#define GFFDMPOCAIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4677D0)
#define GFFDMPOCAIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4677C0)
#define GFFDMPOCAIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E467980)
#define GFFDMPOCAIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4678F0)
#define GFFDMPOCAIP_FJACFMIOCKG_OFFSET UNITYSDK_OFFSET(0x1E4678D0)
#define GFFDMPOCAIP_FMHOFBCCBOL_OFFSET UNITYSDK_OFFSET(0x1E4678E0)
#define GFFDMPOCAIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E467A60)
#define GFFDMPOCAIP_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E467890)
#define GFFDMPOCAIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E467750)
#define GFFDMPOCAIP_KOPHIMBLMNK_OFFSET UNITYSDK_OFFSET(0x1E4678B0)
#define GFFDMPOCAIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E467DD0)
#define GFFDMPOCAIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E467D80)
#define GFFDMPOCAIP_MFDMIPEEGHG_OFFSET UNITYSDK_OFFSET(0x1E4678C0)
#define GFFDMPOCAIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4677B0)
#define GFFDMPOCAIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E467A90)
#define GFFDMPOCAIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E467AF0)

inline static constexpr unsigned int GFFDMPOCAIP_TypeDefinitionIndex = 25116;

	class GFFDMPOCAIP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JOJDPCGCOOE; // 0x18
		::System::Boolean DNEKKFOFAFG; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 IBEBBFIHLLP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GFFDMPOCAIP")->GetStaticField(0x13890);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object FHOLJMDGPGF; // 0x0
		// static const ::System::Object ECMNKNEPGIL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFFDMPOCAIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFFDMPOCAIP*))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFFDMPOCAIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GFFDMPOCAIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFFDMPOCAIP* Clone()
		{
			return ((::GFFDMPOCAIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean KOPHIMBLMNK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_KOPHIMBLMNK_OFFSET))(this);
		}

		::System::Void MFDMIPEEGHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_MFDMIPEEGHG_OFFSET))(this, a1);
		}

		::System::UInt32 FJACFMIOCKG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_FJACFMIOCKG_OFFSET))(this);
		}

		::System::Void FMHOFBCCBOL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_FMHOFBCCBOL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFFDMPOCAIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFFDMPOCAIP*))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFFDMPOCAIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFFDMPOCAIP*))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFFDMPOCAIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
