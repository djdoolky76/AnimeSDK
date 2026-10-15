#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGBAFBEMICB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGBAFBEMICB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E807900)
#define KGBAFBEMICB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E807B60)
#define KGBAFBEMICB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8074B0)
#define KGBAFBEMICB_CPFJIFFJPMC_OFFSET UNITYSDK_OFFSET(0x1E807560)
#define KGBAFBEMICB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E807470)
#define KGBAFBEMICB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E807460)
#define KGBAFBEMICB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E807680)
#define KGBAFBEMICB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E807570)
#define KGBAFBEMICB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E807760)
#define KGBAFBEMICB_HGMKNPPIDOL_OFFSET UNITYSDK_OFFSET(0x1E807530)
#define KGBAFBEMICB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8073F0)
#define KGBAFBEMICB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8079E0)
#define KGBAFBEMICB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8079A0)
#define KGBAFBEMICB_NLNFCKIBGLB_OFFSET UNITYSDK_OFFSET(0x1E807540)
#define KGBAFBEMICB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E807450)
#define KGBAFBEMICB_PEPMGCEFMJC_OFFSET UNITYSDK_OFFSET(0x1E807550)
#define KGBAFBEMICB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E807790)
#define KGBAFBEMICB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8077F0)

inline static constexpr unsigned int KGBAFBEMICB_TypeDefinitionIndex = 28938;

	class KGBAFBEMICB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FCKKJAFAIDB; // 0x18
		::System::Boolean IPLABOBCCDJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KGBAFBEMICB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KGBAFBEMICB*>**)UnitySDK::FromName("", "KGBAFBEMICB")->GetStaticField(0x14CC0);
		}

		// static const ::System::Object OBGIKJNNODO; // 0x0
		// static const ::System::Object KCKCCOLCNJM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBAFBEMICB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGBAFBEMICB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGBAFBEMICB*))((::PBYTE)hIl2Cpp + KGBAFBEMICB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGBAFBEMICB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KGBAFBEMICB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KGBAFBEMICB*>*(*)())((::PBYTE)hIl2Cpp + KGBAFBEMICB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBAFBEMICB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGBAFBEMICB* Clone()
		{
			return ((::KGBAFBEMICB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBAFBEMICB_CLONE_OFFSET))(this);
		}

		::System::UInt32 HGMKNPPIDOL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBAFBEMICB_HGMKNPPIDOL_OFFSET))(this);
		}

		::System::Void NLNFCKIBGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGBAFBEMICB_NLNFCKIBGLB_OFFSET))(this, a1);
		}

		::System::Boolean PEPMGCEFMJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBAFBEMICB_PEPMGCEFMJC_OFFSET))(this);
		}

		::System::Void CPFJIFFJPMC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGBAFBEMICB_CPFJIFFJPMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGBAFBEMICB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGBAFBEMICB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGBAFBEMICB*))((::PBYTE)hIl2Cpp + KGBAFBEMICB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBAFBEMICB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBAFBEMICB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGBAFBEMICB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBAFBEMICB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGBAFBEMICB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGBAFBEMICB*))((::PBYTE)hIl2Cpp + KGBAFBEMICB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGBAFBEMICB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
