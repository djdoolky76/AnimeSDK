#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJKMDOLJPHP;
class GFDENAMMEHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJKMDOLJPHP_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x1E0E2370)
#define CJKMDOLJPHP_BLILPNPEACH_OFFSET UNITYSDK_OFFSET(0x1E0E2330)
#define CJKMDOLJPHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0E2860)
#define CJKMDOLJPHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E2B60)
#define CJKMDOLJPHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0E2290)
#define CJKMDOLJPHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0E2220)
#define CJKMDOLJPHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E2210)
#define CJKMDOLJPHP_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E0E2310)
#define CJKMDOLJPHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0E2490)
#define CJKMDOLJPHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0E2390)
#define CJKMDOLJPHP_FLJHGHCNMLD_OFFSET UNITYSDK_OFFSET(0x1E0E2350)
#define CJKMDOLJPHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0E2630)
#define CJKMDOLJPHP_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0x1E0E2380)
#define CJKMDOLJPHP_HFKLAOMBPMD_OFFSET UNITYSDK_OFFSET(0x1E0E2360)
#define CJKMDOLJPHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0E21D0)
#define CJKMDOLJPHP_KIJDPPMHBME_OFFSET UNITYSDK_OFFSET(0x1E0E2340)
#define CJKMDOLJPHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0E2AA0)
#define CJKMDOLJPHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0E2A20)
#define CJKMDOLJPHP_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E0E2320)
#define CJKMDOLJPHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0E2200)
#define CJKMDOLJPHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0E2670)
#define CJKMDOLJPHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0E26D0)

inline static constexpr unsigned int CJKMDOLJPHP_TypeDefinitionIndex = 34074;

	class CJKMDOLJPHP : public ::System::Object
	{
	public:
		::GFDENAMMEHM* DFBHLGHEMHG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FOBLPJCIGJE; // 0x20
		::System::UInt32 CLADFMOEPCK; // 0x24
		::System::UInt32 FLBKCMIIFFP; // 0x28
		static ::Google::Protobuf::MessageParser_1<::CJKMDOLJPHP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CJKMDOLJPHP*>**)UnitySDK::FromName("", "CJKMDOLJPHP")->GetStaticField(0x1A250);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object NOBLDDEFEKI; // 0x0
		// static const ::System::Object GFBPPEBMICC; // 0x0
		// static const ::System::Object MIPCBMDOFEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJKMDOLJPHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJKMDOLJPHP*))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJKMDOLJPHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CJKMDOLJPHP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CJKMDOLJPHP*>*(*)())((::PBYTE)hIl2Cpp + CJKMDOLJPHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJKMDOLJPHP* Clone()
		{
			return ((::CJKMDOLJPHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 BLILPNPEACH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_BLILPNPEACH_OFFSET))(this);
		}

		::System::Void KIJDPPMHBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_KIJDPPMHBME_OFFSET))(this, a1);
		}

		::GFDENAMMEHM* FLJHGHCNMLD()
		{
			return ((::GFDENAMMEHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_FLJHGHCNMLD_OFFSET))(this);
		}

		::System::Void HFKLAOMBPMD(::GFDENAMMEHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFDENAMMEHM*))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_HFKLAOMBPMD_OFFSET))(this, a1);
		}

		::System::UInt32 BGDKFHEBDFJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void HEHJAJFJJMP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_HEHJAJFJJMP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJKMDOLJPHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJKMDOLJPHP*))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJKMDOLJPHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJKMDOLJPHP*))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJKMDOLJPHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
