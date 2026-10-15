#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCJNPKDDKDK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BCJNPKDDKDK_BKGOJMIBBPJ_OFFSET UNITYSDK_OFFSET(0x1E908DE0)
#define BCJNPKDDKDK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E909160)
#define BCJNPKDDKDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9094E0)
#define BCJNPKDDKDK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E908D40)
#define BCJNPKDDKDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E908D00)
#define BCJNPKDDKDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E908CF0)
#define BCJNPKDDKDK_DOINAIBOGOI_OFFSET UNITYSDK_OFFSET(0x1E908D90)
#define BCJNPKDDKDK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E908ED0)
#define BCJNPKDDKDK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E908DF0)
#define BCJNPKDDKDK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E908FA0)
#define BCJNPKDDKDK_IELCCNPGBLI_OFFSET UNITYSDK_OFFSET(0x1E908DA0)
#define BCJNPKDDKDK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E908CB0)
#define BCJNPKDDKDK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E909340)
#define BCJNPKDDKDK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9092F0)
#define BCJNPKDDKDK_MPEEDLNBONK_OFFSET UNITYSDK_OFFSET(0x1E908DC0)
#define BCJNPKDDKDK_OLMAHKEJDJE_OFFSET UNITYSDK_OFFSET(0x1E908DD0)
#define BCJNPKDDKDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E908CE0)
#define BCJNPKDDKDK_PGLNJEILMKB_OFFSET UNITYSDK_OFFSET(0x1E908DB0)
#define BCJNPKDDKDK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E908FD0)
#define BCJNPKDDKDK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E909030)

inline static constexpr unsigned int BCJNPKDDKDK_TypeDefinitionIndex = 26487;

	class BCJNPKDDKDK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FJLILEOEEIB; // 0x18
		::System::UInt32 NFGNEEGBNIF; // 0x1C
		::System::UInt32 MMOEKGNHACP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BCJNPKDDKDK")->GetStaticField(0x3BAA0);
		}

		// static const ::System::Object JBLABOEPILK; // 0x0
		// static const ::System::Object KPGNEGMDKCI; // 0x0
		// static const ::System::Object FPKJMJADEBI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BCJNPKDDKDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCJNPKDDKDK*))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCJNPKDDKDK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BCJNPKDDKDK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BCJNPKDDKDK* Clone()
		{
			return ((::BCJNPKDDKDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_CLONE_OFFSET))(this);
		}

		::System::UInt32 DOINAIBOGOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_DOINAIBOGOI_OFFSET))(this);
		}

		::System::Void IELCCNPGBLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_IELCCNPGBLI_OFFSET))(this, a1);
		}

		::System::UInt32 PGLNJEILMKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_PGLNJEILMKB_OFFSET))(this);
		}

		::System::Void MPEEDLNBONK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_MPEEDLNBONK_OFFSET))(this, a1);
		}

		::System::UInt32 OLMAHKEJDJE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_OLMAHKEJDJE_OFFSET))(this);
		}

		::System::Void BKGOJMIBBPJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_BKGOJMIBBPJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BCJNPKDDKDK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCJNPKDDKDK*))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BCJNPKDDKDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCJNPKDDKDK*))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BCJNPKDDKDK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
