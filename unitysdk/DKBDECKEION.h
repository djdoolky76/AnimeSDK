#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKBDECKEION;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DKBDECKEION_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB3A6A0)
#define DKBDECKEION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB3AA10)
#define DKBDECKEION_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB3A0F0)
#define DKBDECKEION_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB3A0A0)
#define DKBDECKEION_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB3A090)
#define DKBDECKEION_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1FB3A150)
#define DKBDECKEION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB3A2A0)
#define DKBDECKEION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB3A210)
#define DKBDECKEION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB3A3C0)
#define DKBDECKEION_GPAFPIFJEAF_OFFSET UNITYSDK_OFFSET(0x1FB3A200)
#define DKBDECKEION_HLACEGGLEGF_OFFSET UNITYSDK_OFFSET(0x1FB3A1F0)
#define DKBDECKEION_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB3A050)
#define DKBDECKEION_KMPPMJDLKFG_OFFSET UNITYSDK_OFFSET(0x1FB3A190)
#define DKBDECKEION_LKCNFLPFNBH_OFFSET UNITYSDK_OFFSET(0x1FB3A1A0)
#define DKBDECKEION_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB3A930)
#define DKBDECKEION_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB3A8D0)
#define DKBDECKEION_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1FB3A160)
#define DKBDECKEION_OIFCKGODKON_OFFSET UNITYSDK_OFFSET(0x1FB3A180)
#define DKBDECKEION_OPFINOFMACO_OFFSET UNITYSDK_OFFSET(0x1FB3A170)
#define DKBDECKEION_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB3A080)
#define DKBDECKEION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB3A490)
#define DKBDECKEION_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB3A4F0)

inline static constexpr unsigned int DKBDECKEION_TypeDefinitionIndex = 34962;

	class DKBDECKEION : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* KNMOCKHLHIJ; // 0x18
		::System::UInt64 JEHBHEOHGLN; // 0x20
		::System::UInt32 FLBKCMIIFFP; // 0x28
		::System::UInt32 MIJMCFOKJCH; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::DKBDECKEION*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DKBDECKEION*>**)UnitySDK::FromName("", "DKBDECKEION")->GetStaticField(0x2D520);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object ELMGEBCLLFP; // 0x0
		// static const ::System::Object BIGDFAFLLNG; // 0x0
		// static const ::System::Object GEMDHFJFBHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDECKEION_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DKBDECKEION* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKBDECKEION*))((::PBYTE)hIl2Cpp + DKBDECKEION_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKBDECKEION_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DKBDECKEION*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DKBDECKEION*>*(*)())((::PBYTE)hIl2Cpp + DKBDECKEION_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDECKEION_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DKBDECKEION* Clone()
		{
			return ((::DKBDECKEION*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDECKEION_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDECKEION_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKBDECKEION_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 OPFINOFMACO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDECKEION_OPFINOFMACO_OFFSET))(this);
		}

		::System::Void OIFCKGODKON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKBDECKEION_OIFCKGODKON_OFFSET))(this, a1);
		}

		::System::String* KMPPMJDLKFG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDECKEION_KMPPMJDLKFG_OFFSET))(this);
		}

		::System::Void LKCNFLPFNBH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DKBDECKEION_LKCNFLPFNBH_OFFSET))(this, a1);
		}

		::System::UInt64 HLACEGGLEGF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDECKEION_HLACEGGLEGF_OFFSET))(this);
		}

		::System::Void GPAFPIFJEAF(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + DKBDECKEION_GPAFPIFJEAF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKBDECKEION_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DKBDECKEION* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DKBDECKEION*))((::PBYTE)hIl2Cpp + DKBDECKEION_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDECKEION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDECKEION_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DKBDECKEION_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDECKEION_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DKBDECKEION* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKBDECKEION*))((::PBYTE)hIl2Cpp + DKBDECKEION_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DKBDECKEION_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
